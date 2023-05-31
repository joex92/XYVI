/*******************************************************************************************************************
Copyright (c) 2023 Cycling '74

The code that Max generates automatically and that end users are capable of
exporting and using, and any associated documentation files (the “Software”)
is a work of authorship for which Cycling '74 is the author and owner for
copyright purposes.

This Software is dual-licensed either under the terms of the Cycling '74
License for Max-Generated Code for Export, or alternatively under the terms
of the General Public License (GPL) Version 3. You may use the Software
according to either of these licenses as it is most appropriate for your
project on a case-by-case basis (proprietary or not).

A) Cycling '74 License for Max-Generated Code for Export

A license is hereby granted, free of charge, to any person obtaining a copy
of the Software (“Licensee”) to use, copy, modify, merge, publish, and
distribute copies of the Software, and to permit persons to whom the Software
is furnished to do so, subject to the following conditions:

The Software is licensed to Licensee for all uses that do not include the sale,
sublicensing, or commercial distribution of software that incorporates this
source code. This means that the Licensee is free to use this software for
educational, research, and prototyping purposes, to create musical or other
creative works with software that incorporates this source code, or any other
use that does not constitute selling software that makes use of this source
code. Commercial distribution also includes the packaging of free software with
other paid software, hardware, or software-provided commercial services.

For entities with UNDER $200k in annual revenue or funding, a license is hereby
granted, free of charge, for the sale, sublicensing, or commercial distribution
of software that incorporates this source code, for as long as the entity's
annual revenue remains below $200k annual revenue or funding.

For entities with OVER $200k in annual revenue or funding interested in the
sale, sublicensing, or commercial distribution of software that incorporates
this source code, please send inquiries to licensing@cycling74.com.

The above copyright notice and this license shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Please see
https://support.cycling74.com/hc/en-us/articles/10730637742483-RNBO-Export-Licensing-FAQ
for additional information

B) General Public License Version 3 (GPLv3)
Details of the GPLv3 license can be found at: https://www.gnu.org/licenses/gpl-3.0.html
*******************************************************************************************************************/

#include "RNBO_Common.h"
#include "RNBO_AudioSignal.h"

namespace RNBO {


#define floor(x) ((long)(x))

#if defined(__GNUC__) || defined(__clang__)
    #define RNBO_RESTRICT __restrict__
#elif defined(_MSC_VER)
    #define RNBO_RESTRICT __restrict
#endif

#define FIXEDSIZEARRAYINIT(...) { }

class rnbomatic : public PatcherInterfaceImpl {
public:

rnbomatic()
{
}

~rnbomatic()
{
}

rnbomatic* getTopLevelPatcher() {
    return this;
}

void cancelClockEvents()
{
    getEngine()->flushClockEvents(this, 1646922831, false);
    getEngine()->flushClockEvents(this, -1508480176, false);
    getEngine()->flushClockEvents(this, -368915887, false);
    getEngine()->flushClockEvents(this, 892732297, false);
    getEngine()->flushClockEvents(this, -1735137014, false);
}

template <typename T> void listquicksort(T& arr, T& sortindices, Int l, Int h, bool ascending) {
    if (l < h) {
        Int p = (Int)(this->listpartition(arr, sortindices, l, h, ascending));
        this->listquicksort(arr, sortindices, l, p - 1, ascending);
        this->listquicksort(arr, sortindices, p + 1, h, ascending);
    }
}

template <typename T> Int listpartition(T& arr, T& sortindices, Int l, Int h, bool ascending) {
    number x = arr[(Index)h];
    Int i = (Int)(l - 1);

    for (Int j = (Int)(l); j <= h - 1; j++) {
        bool asc = (bool)((bool)(ascending) && arr[(Index)j] <= x);
        bool desc = (bool)((bool)(!(bool)(ascending)) && arr[(Index)j] >= x);

        if ((bool)(asc) || (bool)(desc)) {
            i++;
            this->listswapelements(arr, i, j);
            this->listswapelements(sortindices, i, j);
        }
    }

    i++;
    this->listswapelements(arr, i, h);
    this->listswapelements(sortindices, i, h);
    return i;
}

template <typename T> void listswapelements(T& arr, Int a, Int b) {
    auto tmp = arr[(Index)a];
    arr[(Index)a] = arr[(Index)b];
    arr[(Index)b] = tmp;
}

inline number safesqrt(number num) {
    return (num > 0.0 ? rnbo_sqrt(num) : 0.0);
}

inline number linearinterp(number frac, number x, number y) {
    return x + (y - x) * frac;
}

inline number cubicinterp(number a, number w, number x, number y, number z) {
    number a2 = a * a;
    number f0 = z - y - w + x;
    number f1 = w - x - f0;
    number f2 = y - w;
    number f3 = x;
    return f0 * a * a2 + f1 * a2 + f2 * a + f3;
}

inline number splineinterp(number a, number w, number x, number y, number z) {
    number a2 = a * a;
    number f0 = -0.5 * w + 1.5 * x - 1.5 * y + 0.5 * z;
    number f1 = w - 2.5 * x + 2 * y - 0.5 * z;
    number f2 = -0.5 * w + 0.5 * y;
    return f0 * a * a2 + f1 * a2 + f2 * a + x;
}

inline number cosT8(number r) {
    number t84 = 56.0;
    number t83 = 1680.0;
    number t82 = 20160.0;
    number t81 = 2.4801587302e-05;
    number t73 = 42.0;
    number t72 = 840.0;
    number t71 = 1.9841269841e-04;

    if (r < 0.785398163397448309615660845819875721 && r > -0.785398163397448309615660845819875721) {
        number rr = r * r;
        return 1.0 - rr * t81 * (t82 - rr * (t83 - rr * (t84 - rr)));
    } else if (r > 0.0) {
        r -= 1.57079632679489661923132169163975144;
        number rr = r * r;
        return -r * (1.0 - t71 * rr * (t72 - rr * (t73 - rr)));
    } else {
        r += 1.57079632679489661923132169163975144;
        number rr = r * r;
        return r * (1.0 - t71 * rr * (t72 - rr * (t73 - rr)));
    }
}

inline number cosineinterp(number frac, number x, number y) {
    number a2 = (1.0 - this->cosT8(frac * 3.14159265358979323846)) / (number)2.0;
    return x * (1.0 - a2) + y * a2;
}

number mstosamps(MillisecondTime ms) {
    return ms * this->sr * 0.001;
}

number samplerate() {
    return this->sr;
}

Index vectorsize() {
    return this->vs;
}

number maximum(number x, number y) {
    return (x < y ? y : x);
}

ParameterValue fromnormalized(ParameterIndex index, ParameterValue normalizedValue) {
    return this->convertFromNormalizedParameterValue(index, normalizedValue);
}

MillisecondTime currenttime() {
    return this->_currentTime;
}

number tempo() {
    return this->getTopLevelPatcher()->globaltransport_getTempo();
}

number mstobeats(number ms) {
    return ms * this->tempo() * 0.008 / (number)480;
}

MillisecondTime sampstoms(number samps) {
    return samps * 1000 / this->sr;
}

Index getNumMidiInputPorts() const {
    return 0;
}

void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}

Index getNumMidiOutputPorts() const {
    return 0;
}

void process(
    const SampleValue * const* inputs,
    Index numInputs,
    SampleValue * const* outputs,
    Index numOutputs,
    Index n
) {
    this->vs = n;
    this->updateTime(this->getEngine()->getCurrentTime());
    const SampleValue * Output = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
    const SampleValue * Rotation = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
    SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
    SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
    const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
    const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
    this->ip_01_perform(this->signals[0], n);
    this->dspexpr_02_perform(this->signals[0], this->dspexpr_02_in2, this->signals[1], n);

    this->dspexpr_03_perform(
        this->signals[1],
        this->dspexpr_03_in2,
        this->dspexpr_03_in3,
        this->signals[2],
        n
    );

    this->ip_02_perform(this->signals[1], n);
    this->dspexpr_04_perform(in1, in2, this->signals[3], n);

    this->selector_09_perform(
        this->selector_09_onoff,
        in1,
        in2,
        this->signals[3],
        this->signals[3],
        this->signals[4],
        n
    );

    this->fftstream_tilde_01_perform(
        this->signals[4],
        this->fftstream_tilde_01_imagIn,
        this->signals[5],
        this->signals[6],
        this->signals[7],
        n
    );

    this->gen_01_perform(
        this->signals[5],
        this->signals[6],
        this->signals[7],
        this->signals[4],
        this->dummyBuffer,
        n
    );

    this->dspexpr_10_perform(this->signals[4], this->dspexpr_10_in2, this->signals[7], n);

    this->selector_07_perform(
        this->selector_07_onoff,
        this->signals[7],
        this->zeroBuffer,
        this->signals[4],
        n
    );

    this->rampsmooth_tilde_01_perform(
        this->signals[4],
        this->rampsmooth_tilde_01_up,
        this->rampsmooth_tilde_01_down,
        this->signals[7],
        n
    );

    this->snapshot_03_perform(this->signals[7], n);
    this->selector_06_perform(this->signals[1], this->signals[7], this->zeroBuffer, this->signals[4], n);

    this->dspexpr_07_perform(
        this->signals[4],
        this->dspexpr_07_in2,
        this->dspexpr_07_in3,
        this->signals[7],
        n
    );

    this->ftom_tilde_01_perform(this->signals[7], this->signals[4], n);
    this->snapshot_02_perform(this->signals[4], n);
    this->selector_04_perform(this->signals[1], this->signals[4], this->zeroBuffer, this->signals[7], n);
    this->mtof_tilde_01_perform(this->signals[7], this->signals[4], n);
    this->paramtilde_01_perform(Output, this->signals[7], n);
    this->dspexpr_09_perform(this->signals[7], this->signals[6], n);
    this->paramtilde_02_perform(Rotation, this->signals[7], n);
    this->dspexpr_08_perform(this->signals[7], this->signals[5], n);
    this->ip_03_perform(this->signals[7], n);
    this->ip_04_perform(this->signals[8], n);
    this->dspexpr_05_perform(this->signals[4], this->signals[8], this->signals[9], n);
    this->selector_03_perform(this->signals[1], this->signals[9], this->signals[7], this->signals[8], n);
    this->delaytilde_02_perform(this->signals[8], this->signals[3], this->signals[7], n);
    this->snapshot_01_perform(this->signals[8], n);
    this->delaytilde_04_perform(this->signals[8], this->signals[3], this->signals[9], n);
    this->delaytilde_01_perform(this->signals[8], in1, this->signals[1], n);

    this->selector_02_perform(
        this->signals[0],
        in1,
        this->signals[1],
        this->signals[3],
        this->signals[7],
        this->signals[4],
        n
    );

    this->selector_01_perform(this->signals[2], in1, this->signals[4], this->signals[7], n);
    this->delaytilde_03_perform(this->signals[8], in2, this->signals[4], n);

    this->selector_08_perform(
        this->signals[0],
        this->signals[4],
        in2,
        this->signals[9],
        this->signals[3],
        this->signals[8],
        n
    );

    this->selector_05_perform(this->signals[2], in2, this->signals[8], this->signals[3], n);
    this->cartopol_tilde_01_perform(this->signals[7], this->signals[3], this->signals[8], this->signals[2], n);
    this->dspexpr_01_perform(this->signals[8], this->signals[6], this->signals[3], n);
    this->dspexpr_06_perform(this->signals[2], this->signals[5], this->signals[6], n);
    this->poltocar_tilde_01_perform(this->signals[3], this->signals[6], out1, out2, n);
    this->stackprotect_perform(n);
    this->globaltransport_advance();
    this->audioProcessSampleCount += this->vs;
}

void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
    if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
        Index i;

        for (i = 0; i < 10; i++) {
            this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
        }

        this->ip_01_sigbuf = resizeSignal(this->ip_01_sigbuf, this->maxvs, maxBlockSize);
        this->ip_02_sigbuf = resizeSignal(this->ip_02_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_01_sigbuf = resizeSignal(this->paramtilde_01_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_02_sigbuf = resizeSignal(this->paramtilde_02_sigbuf, this->maxvs, maxBlockSize);
        this->ip_03_sigbuf = resizeSignal(this->ip_03_sigbuf, this->maxvs, maxBlockSize);
        this->ip_04_sigbuf = resizeSignal(this->ip_04_sigbuf, this->maxvs, maxBlockSize);
        this->globaltransport_tempo = resizeSignal(this->globaltransport_tempo, this->maxvs, maxBlockSize);
        this->globaltransport_state = resizeSignal(this->globaltransport_state, this->maxvs, maxBlockSize);
        this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
        this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
        this->didAllocateSignals = true;
    }

    const bool sampleRateChanged = sampleRate != this->sr;
    const bool maxvsChanged = maxBlockSize != this->maxvs;
    const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;

    if (sampleRateChanged || maxvsChanged) {
        this->vs = maxBlockSize;
        this->maxvs = maxBlockSize;
        this->sr = sampleRate;
        this->invsr = 1 / sampleRate;
    }

    this->ip_01_dspsetup(forceDSPSetup);
    this->ip_02_dspsetup(forceDSPSetup);
    this->fftstream_tilde_01_dspsetup(forceDSPSetup);
    this->rampsmooth_tilde_01_dspsetup(forceDSPSetup);
    this->paramtilde_01_dspsetup(forceDSPSetup);
    this->paramtilde_02_dspsetup(forceDSPSetup);
    this->ip_03_dspsetup(forceDSPSetup);
    this->ip_04_dspsetup(forceDSPSetup);
    this->delaytilde_02_dspsetup(forceDSPSetup);
    this->delaytilde_04_dspsetup(forceDSPSetup);
    this->delaytilde_01_dspsetup(forceDSPSetup);
    this->delaytilde_03_dspsetup(forceDSPSetup);
    this->globaltransport_dspsetup(forceDSPSetup);

    if (sampleRateChanged)
        this->onSampleRateChanged(sampleRate);
}

void setProbingTarget(MessageTag id) {
    switch (id) {
    default:
        {
        this->setProbingIndex(-1);
        break;
        }
    }
}

void setProbingIndex(ProbingIndex ) {}

Index getProbingChannels(MessageTag outletId) const {
    RNBO_UNUSED(outletId);
    return 0;
}

DataRef* getDataRef(DataRefIndex index)  {
    switch (index) {
    case 0:
        {
        return addressOf(this->delaytilde_01_del_bufferobj);
        break;
        }
    case 1:
        {
        return addressOf(this->RNBODefaultMtofLookupTable256);
        break;
        }
    case 2:
        {
        return addressOf(this->delaytilde_02_del_bufferobj);
        break;
        }
    case 3:
        {
        return addressOf(this->delaytilde_03_del_bufferobj);
        break;
        }
    case 4:
        {
        return addressOf(this->RNBODefaultFftWindow);
        break;
        }
    case 5:
        {
        return addressOf(this->delaytilde_04_del_bufferobj);
        break;
        }
    default:
        {
        return nullptr;
        }
    }
}

DataRefIndex getNumDataRefs() const {
    return 6;
}

void fillRNBODefaultMtofLookupTable256(DataRef& ref) {
    Float64BufferRef buffer;
    buffer = new Float64Buffer(ref);
    number bufsize = buffer->getSize();

    for (Index i = 0; i < bufsize; i++) {
        number midivalue = -256. + (number)512. / (bufsize - 1) * i;
        buffer[i] = rnbo_exp(.057762265 * (midivalue - 69.0));
    }
}

void fillDataRef(DataRefIndex index, DataRef& ref) {
    switch (index) {
    case 1:
        {
        this->fillRNBODefaultMtofLookupTable256(ref);
        break;
        }
    }
}

void zeroDataRef(DataRef& ref) {
    ref->setZero();
}

void processDataViewUpdate(DataRefIndex index, MillisecondTime time) {
    this->updateTime(time);

    if (index == 0) {
        this->delaytilde_01_del_buffer = new Float64Buffer(this->delaytilde_01_del_bufferobj);
    }

    if (index == 1) {
        this->mtof_tilde_01_innerMtoF_buffer = new Float64Buffer(this->RNBODefaultMtofLookupTable256);
        this->mtof_01_innerMtoF_buffer = new Float64Buffer(this->RNBODefaultMtofLookupTable256);
    }

    if (index == 2) {
        this->delaytilde_02_del_buffer = new Float64Buffer(this->delaytilde_02_del_bufferobj);
    }

    if (index == 3) {
        this->delaytilde_03_del_buffer = new Float64Buffer(this->delaytilde_03_del_bufferobj);
    }

    if (index == 4) {
        this->fftstream_tilde_01_win_buf = new Float32Buffer(this->RNBODefaultFftWindow);
    }

    if (index == 5) {
        this->delaytilde_04_del_buffer = new Float64Buffer(this->delaytilde_04_del_bufferobj);
    }
}

void initialize() {
    this->delaytilde_01_del_bufferobj = initDataRef("delaytilde_01_del_bufferobj", true, nullptr, "buffer~");
    this->RNBODefaultMtofLookupTable256 = initDataRef("RNBODefaultMtofLookupTable256", true, nullptr, "buffer~");
    this->delaytilde_02_del_bufferobj = initDataRef("delaytilde_02_del_bufferobj", true, nullptr, "buffer~");
    this->delaytilde_03_del_bufferobj = initDataRef("delaytilde_03_del_bufferobj", true, nullptr, "buffer~");
    this->RNBODefaultFftWindow = initDataRef("RNBODefaultFftWindow", false, nullptr, "buffer~");
    this->delaytilde_04_del_bufferobj = initDataRef("delaytilde_04_del_bufferobj", true, nullptr, "buffer~");
    this->assign_defaults();
    this->setState();
    this->delaytilde_01_del_bufferobj->setIndex(0);
    this->delaytilde_01_del_buffer = new Float64Buffer(this->delaytilde_01_del_bufferobj);
    this->RNBODefaultMtofLookupTable256->setIndex(1);
    this->mtof_tilde_01_innerMtoF_buffer = new Float64Buffer(this->RNBODefaultMtofLookupTable256);
    this->mtof_01_innerMtoF_buffer = new Float64Buffer(this->RNBODefaultMtofLookupTable256);
    this->delaytilde_02_del_bufferobj->setIndex(2);
    this->delaytilde_02_del_buffer = new Float64Buffer(this->delaytilde_02_del_bufferobj);
    this->delaytilde_03_del_bufferobj->setIndex(3);
    this->delaytilde_03_del_buffer = new Float64Buffer(this->delaytilde_03_del_bufferobj);
    this->RNBODefaultFftWindow->setIndex(4);
    this->fftstream_tilde_01_win_buf = new Float32Buffer(this->RNBODefaultFftWindow);
    this->delaytilde_04_del_bufferobj->setIndex(5);
    this->delaytilde_04_del_buffer = new Float64Buffer(this->delaytilde_04_del_bufferobj);
    this->initializeObjects();
    this->allocateDataRefs();
    this->startup();
}

Index getIsMuted()  {
    return this->isMuted;
}

void setIsMuted(Index v)  {
    this->isMuted = v;
}

Index getPatcherSerial() const {
    return 0;
}

void getState(PatcherStateInterface& ) {}

void setState() {}

void getPreset(PatcherStateInterface& preset) {
    preset["__presetid"] = "rnbo";
    this->param_01_getPresetValue(getSubState(preset, "Channel"));
    this->param_02_getPresetValue(getSubState(preset, "Smoothing"));
    this->param_03_getPresetValue(getSubState(preset, "Delay"));
    this->param_04_getPresetValue(getSubState(preset, "MIDI"));
    this->param_05_getPresetValue(getSubState(preset, "Frequency"));
    this->param_06_getPresetValue(getSubState(preset, "Framesize"));
    this->param_07_getPresetValue(getSubState(preset, "DelayTuning"));
    this->param_08_getPresetValue(getSubState(preset, "Mode"));
}

void setPreset(MillisecondTime time, PatcherStateInterface& preset) {
    this->updateTime(time);
    this->param_01_setPresetValue(getSubState(preset, "Channel"));
    this->param_07_setPresetValue(getSubState(preset, "DelayTuning"));
    this->param_08_setPresetValue(getSubState(preset, "Mode"));
    this->param_02_setPresetValue(getSubState(preset, "Smoothing"));
    this->param_03_setPresetValue(getSubState(preset, "Delay"));
    this->param_04_setPresetValue(getSubState(preset, "MIDI"));
    this->param_05_setPresetValue(getSubState(preset, "Frequency"));
    this->param_06_setPresetValue(getSubState(preset, "Framesize"));
}

void processTempoEvent(MillisecondTime time, Tempo tempo) {
    this->updateTime(time);

    if (this->globaltransport_setTempo(tempo, false))
        {}
}

void processTransportEvent(MillisecondTime time, TransportState state) {
    this->updateTime(time);

    if (this->globaltransport_setState(state, false))
        {}
}

void processBeatTimeEvent(MillisecondTime time, BeatTime beattime) {
    this->updateTime(time);

    if (this->globaltransport_setBeatTime(beattime, false))
        {}
}

void onSampleRateChanged(double samplerate) {
    this->samplerate_01_onSampleRateChanged(samplerate);
}

void processTimeSignatureEvent(MillisecondTime time, int numerator, int denominator) {
    this->updateTime(time);

    if (this->globaltransport_setTimeSignature(numerator, denominator, false))
        {}
}

void setParameterValue(ParameterIndex index, ParameterValue v, MillisecondTime time) {
    this->updateTime(time);

    switch (index) {
    case 0:
        {
        this->param_01_value_set(v);
        break;
        }
    case 1:
        {
        this->param_02_value_set(v);
        break;
        }
    case 2:
        {
        this->param_03_value_set(v);
        break;
        }
    case 3:
        {
        this->param_04_value_set(v);
        break;
        }
    case 4:
        {
        this->param_05_value_set(v);
        break;
        }
    case 5:
        {
        this->param_06_value_set(v);
        break;
        }
    case 6:
        {
        this->param_07_value_set(v);
        break;
        }
    case 7:
        {
        this->param_08_value_set(v);
        break;
        }
    case 8:
        {
        this->paramtilde_01_value_set(v);
        break;
        }
    case 9:
        {
        this->paramtilde_02_value_set(v);
        break;
        }
    case 10:
        {
        // namedAudioIn: Output
        break;
        }
    case 11:
        {
        // namedAudioIn: Rotation
        break;
        }
    }
}

void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
    this->setParameterValue(index, value, time);
}

void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
    this->setParameterValueNormalized(index, value, time);
}

ParameterValue getParameterValue(ParameterIndex index)  {
    switch (index) {
    case 0:
        {
        return this->param_01_value;
        }
    case 1:
        {
        return this->param_02_value;
        }
    case 2:
        {
        return this->param_03_value;
        }
    case 3:
        {
        return this->param_04_value;
        }
    case 4:
        {
        return this->param_05_value;
        }
    case 5:
        {
        return this->param_06_value;
        }
    case 6:
        {
        return this->param_07_value;
        }
    case 7:
        {
        return this->param_08_value;
        }
    case 8:
        {
        return this->paramtilde_01_value;
        }
    case 9:
        {
        return this->paramtilde_02_value;
        }
    case 10:
        {
        // namedAudioIn: Output
        return 0;
        }
    case 11:
        {
        // namedAudioIn: Rotation
        return 0;
        }
    default:
        {
        return 0;
        }
    }
}

ParameterIndex getNumSignalInParameters() const {
    return 2;
}

ParameterIndex getNumSignalOutParameters() const {
    return 0;
}

ParameterIndex getNumParameters() const {
    return 12;
}

ConstCharPointer getParameterName(ParameterIndex index) const {
    switch (index) {
    case 0:
        {
        return "Channel";
        }
    case 1:
        {
        return "Smoothing";
        }
    case 2:
        {
        return "Delay";
        }
    case 3:
        {
        return "MIDI";
        }
    case 4:
        {
        return "Frequency";
        }
    case 5:
        {
        return "Framesize";
        }
    case 6:
        {
        return "DelayTuning";
        }
    case 7:
        {
        return "Mode";
        }
    case 8:
        {
        return "Output";
        }
    case 9:
        {
        return "Rotation";
        }
    case 10:
        {
        return "Output";
        }
    case 11:
        {
        return "Rotation";
        }
    default:
        {
        return "bogus";
        }
    }
}

ConstCharPointer getParameterId(ParameterIndex index) const {
    switch (index) {
    case 0:
        {
        return "Channel";
        }
    case 1:
        {
        return "Smoothing";
        }
    case 2:
        {
        return "Delay";
        }
    case 3:
        {
        return "MIDI";
        }
    case 4:
        {
        return "Frequency";
        }
    case 5:
        {
        return "Framesize";
        }
    case 6:
        {
        return "DelayTuning";
        }
    case 7:
        {
        return "Mode";
        }
    case 8:
        {
        return "Output";
        }
    case 9:
        {
        return "Rotation";
        }
    case 10:
        {
        return "/signals/Output";
        }
    case 11:
        {
        return "/signals/Rotation";
        }
    default:
        {
        return "bogus";
        }
    }
}

void getParameterInfo(ParameterIndex index, ParameterInfo * info) const {
    {
        switch (index) {
        case 0:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 4;
            info->exponent = 1;
            info->steps = 5;
            static const char * eVal0[] = {"Bypass", "L", "R", "L+R", "R+L"};
            info->enumValues = eVal0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 1:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 100;
            info->min = 0;
            info->max = 100;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "%";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 2:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 1000;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "ms";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 3:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = -37;
            info->max = 136;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 4:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 1;
            info->max = 20000;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "Hz";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 5:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 12;
            info->min = 8;
            info->max = 16;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 6:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = -100;
            info->max = 100;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "%";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 7:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = 0;
            info->max = 1;
            info->exponent = 1;
            info->steps = 2;
            static const char * eVal7[] = {"Auto", "Manual"};
            info->enumValues = eVal7;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 8:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = -70;
            info->max = 6;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 9:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = -180;
            info->max = 180;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 10:
            {
            info->type = ParameterTypeSignal;
            info->initialValue = 0;
            info->min = 0;
            info->max = 1;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = false;
            info->transmittable = false;
            info->initialized = false;
            info->visible = false;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeInput;
            info->signalIndex = 2;
            break;
            }
        case 11:
            {
            info->type = ParameterTypeSignal;
            info->initialValue = 0;
            info->min = 0;
            info->max = 1;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = false;
            info->transmittable = false;
            info->initialized = false;
            info->visible = false;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeInput;
            info->signalIndex = 3;
            break;
            }
        }
    }
}

void sendParameter(ParameterIndex index, bool ignoreValue) {
    this->getEngine()->notifyParameterValueChanged(index, (ignoreValue ? 0 : this->getParameterValue(index)), ignoreValue);
}

ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
    if (steps == 1) {
        if (normalizedValue > 0) {
            normalizedValue = 1.;
        }
    } else {
        ParameterValue oneStep = (number)1. / (steps - 1);
        ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
        normalizedValue = numberOfSteps * oneStep;
    }

    return normalizedValue;
}

ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
    switch (index) {
    case 7:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));
            ParameterValue normalizedValue = (value - 0) / (1 - 0);

            {
                normalizedValue = this->applyStepsToNormalizedParameterValue(normalizedValue, 2);
            }

            return normalizedValue;
        }
        }
    case 0:
        {
        {
            value = (value < 0 ? 0 : (value > 4 ? 4 : value));
            ParameterValue normalizedValue = (value - 0) / (4 - 0);

            {
                normalizedValue = this->applyStepsToNormalizedParameterValue(normalizedValue, 5);
            }

            return normalizedValue;
        }
        }
    case 1:
        {
        {
            value = (value < 0 ? 0 : (value > 100 ? 100 : value));
            ParameterValue normalizedValue = (value - 0) / (100 - 0);
            return normalizedValue;
        }
        }
    case 2:
        {
        {
            value = (value < 0 ? 0 : (value > 1000 ? 1000 : value));
            ParameterValue normalizedValue = (value - 0) / (1000 - 0);
            return normalizedValue;
        }
        }
    case 4:
        {
        {
            value = (value < 1 ? 1 : (value > 20000 ? 20000 : value));
            ParameterValue normalizedValue = (value - 1) / (20000 - 1);
            return normalizedValue;
        }
        }
    case 5:
        {
        {
            value = (value < 8 ? 8 : (value > 16 ? 16 : value));
            ParameterValue normalizedValue = (value - 8) / (16 - 8);
            return normalizedValue;
        }
        }
    case 3:
        {
        {
            value = (value < -37 ? -37 : (value > 136 ? 136 : value));
            ParameterValue normalizedValue = (value - -37) / (136 - -37);
            return normalizedValue;
        }
        }
    case 6:
        {
        {
            value = (value < -100 ? -100 : (value > 100 ? 100 : value));
            ParameterValue normalizedValue = (value - -100) / (100 - -100);
            return normalizedValue;
        }
        }
    case 8:
        {
        {
            value = (value < -70 ? -70 : (value > 6 ? 6 : value));
            ParameterValue normalizedValue = (value - -70) / (6 - -70);
            return normalizedValue;
        }
        }
    case 9:
        {
        {
            value = (value < -180 ? -180 : (value > 180 ? 180 : value));
            ParameterValue normalizedValue = (value - -180) / (180 - -180);
            return normalizedValue;
        }
        }
    default:
        {
        return value;
        }
    }
}

ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
    value = (value < 0 ? 0 : (value > 1 ? 1 : value));

    switch (index) {
    case 7:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                value = this->applyStepsToNormalizedParameterValue(value, 2);
            }

            {
                return 0 + value * (1 - 0);
            }
        }
        }
    case 0:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                value = this->applyStepsToNormalizedParameterValue(value, 5);
            }

            {
                return 0 + value * (4 - 0);
            }
        }
        }
    case 1:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (100 - 0);
            }
        }
        }
    case 2:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (1000 - 0);
            }
        }
        }
    case 4:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 1 + value * (20000 - 1);
            }
        }
        }
    case 5:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 8 + value * (16 - 8);
            }
        }
        }
    case 3:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -37 + value * (136 - -37);
            }
        }
        }
    case 6:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -100 + value * (100 - -100);
            }
        }
        }
    case 8:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -70 + value * (6 - -70);
            }
        }
        }
    case 9:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -180 + value * (180 - -180);
            }
        }
        }
    default:
        {
        return value;
        }
    }
}

ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
    switch (index) {
    case 0:
        {
        return this->param_01_value_constrain(value);
        }
    case 1:
        {
        return this->param_02_value_constrain(value);
        }
    case 2:
        {
        return this->param_03_value_constrain(value);
        }
    case 3:
        {
        return this->param_04_value_constrain(value);
        }
    case 4:
        {
        return this->param_05_value_constrain(value);
        }
    case 5:
        {
        return this->param_06_value_constrain(value);
        }
    case 6:
        {
        return this->param_07_value_constrain(value);
        }
    case 7:
        {
        return this->param_08_value_constrain(value);
        }
    default:
        {
        return value;
        }
    }
}

void scheduleParamInit(ParameterIndex index, Index order) {
    this->paramInitIndices->push(index);
    this->paramInitOrder->push(order);
}

void processParamInitEvents() {
    this->listquicksort(
        this->paramInitOrder,
        this->paramInitIndices,
        0,
        (int)(this->paramInitOrder->length - 1),
        true
    );

    for (Index i = 0; i < this->paramInitOrder->length; i++) {
        this->getEngine()->scheduleParameterChange(
            this->paramInitIndices[i],
            this->getParameterValue(this->paramInitIndices[i]),
            0
        );
    }
}

void processClockEvent(MillisecondTime time, ClockId index, bool hasValue, ParameterValue value) {
    RNBO_UNUSED(hasValue);
    this->updateTime(time);

    switch (index) {
    case 1646922831:
        {
        this->snapshot_01_out_set(value);
        break;
        }
    case -1508480176:
        {
        this->snapshot_02_out_set(value);
        break;
        }
    case -368915887:
        {
        this->snapshot_03_out_set(value);
        break;
        }
    case 892732297:
        {
        this->loadmess_01_startupbang_bang();
        break;
        }
    case -1735137014:
        {
        this->loadbang_01_startupbang_bang();
        break;
        }
    }
}

void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}

void processOutletEvent(
    EngineLink* sender,
    OutletIndex index,
    ParameterValue value,
    MillisecondTime time
) {
    this->updateTime(time);
    this->processOutletAtCurrentTime(sender, index, value);
}

void processNumMessage(MessageTag , MessageTag , MillisecondTime , number ) {}

void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}

void processBangMessage(MessageTag tag, MessageTag objectId, MillisecondTime time) {
    this->updateTime(time);

    switch (tag) {
    case TAG("startupbang"):
        {
        if (TAG("loadmess_obj-35") == objectId)
            this->loadmess_01_startupbang_bang();

        if (TAG("loadbang_obj-40") == objectId)
            this->loadbang_01_startupbang_bang();

        break;
        }
    }
}

MessageTagInfo resolveTag(MessageTag tag) const {
    switch (tag) {
    case TAG("delay"):
        {
        return "delay";
        }
    case TAG(""):
        {
        return "";
        }
    case TAG("midi"):
        {
        return "midi";
        }
    case TAG("freq"):
        {
        return "freq";
        }
    case TAG("startupbang"):
        {
        return "startupbang";
        }
    case TAG("loadmess_obj-35"):
        {
        return "loadmess_obj-35";
        }
    case TAG("loadbang_obj-40"):
        {
        return "loadbang_obj-40";
        }
    }

    return "";
}

MessageIndex getNumMessages() const {
    return 3;
}

const MessageInfo& getMessageInfo(MessageIndex index) const {
    switch (index) {
    case 0:
        {
        static const MessageInfo r0 = {
            "delay",
            Outport
        };

        return r0;
        }
    case 1:
        {
        static const MessageInfo r1 = {
            "midi",
            Outport
        };

        return r1;
        }
    case 2:
        {
        static const MessageInfo r2 = {
            "freq",
            Outport
        };

        return r2;
        }
    }

    return NullMessageInfo;
}

protected:

void param_01_value_set(number v) {
    v = this->param_01_value_constrain(v);
    this->param_01_value = v;
    this->sendParameter(0, false);

    if (this->param_01_value != this->param_01_lastValue) {
        this->getEngine()->presetTouched();
        this->param_01_lastValue = this->param_01_value;
    }

    this->trigger_01_input_number_set(v);
}

void param_02_value_set(number v) {
    v = this->param_02_value_constrain(v);
    this->param_02_value = v;
    this->sendParameter(1, false);

    if (this->param_02_value != this->param_02_lastValue) {
        this->getEngine()->presetTouched();
        this->param_02_lastValue = this->param_02_value;
    }

    this->expr_02_in1_set(v);
}

void param_03_value_set(number v) {
    if (this->stackprotect_check())
        return;

    v = this->param_03_value_constrain(v);
    this->param_03_value = v;
    this->sendParameter(2, false);

    if (this->param_03_value != this->param_03_lastValue) {
        this->getEngine()->presetTouched();
        this->param_03_lastValue = this->param_03_value;
    }

    this->outport_01_input_number_set(v);
    this->gate_01_input_number_set(v);
}

void param_06_value_set(number v) {
    v = this->param_06_value_constrain(v);
    this->param_06_value = v;
    this->sendParameter(5, false);

    if (this->param_06_value != this->param_06_lastValue) {
        this->getEngine()->presetTouched();
        this->param_06_lastValue = this->param_06_value;
    }

    this->trigger_04_input_number_set(v);
}

void param_07_value_set(number v) {
    v = this->param_07_value_constrain(v);
    this->param_07_value = v;
    this->sendParameter(6, false);

    if (this->param_07_value != this->param_07_lastValue) {
        this->getEngine()->presetTouched();
        this->param_07_lastValue = this->param_07_value;
    }

    this->expr_09_in1_set(v);
}

void param_08_value_set(number v) {
    v = this->param_08_value_constrain(v);
    this->param_08_value = v;
    this->sendParameter(7, false);

    if (this->param_08_value != this->param_08_lastValue) {
        this->getEngine()->presetTouched();
        this->param_08_lastValue = this->param_08_value;
    }

    this->expr_10_in1_set(v);
}

void paramtilde_01_value_set(number v) {
    this->paramtilde_01_value_setter(v);
    v = this->paramtilde_01_value;
    this->sendParameter(8, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_01_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_01_lastIndex); i < k; i++) {
            this->paramtilde_01_sigbuf[(Index)i] = v;
            this->paramtilde_01_lastIndex = k;
        }
    }
}

void paramtilde_02_value_set(number v) {
    this->paramtilde_02_value_setter(v);
    v = this->paramtilde_02_value;
    this->sendParameter(9, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_02_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_02_lastIndex); i < k; i++) {
            this->paramtilde_02_sigbuf[(Index)i] = v;
            this->paramtilde_02_lastIndex = k;
        }
    }
}

void snapshot_01_out_set(number v) {
    this->snapshot_01_out = v;
    this->switchobj_01_in1_number_set(v);
}

void snapshot_02_out_set(number v) {
    this->snapshot_02_out = v;
    this->switchobj_02_in1_number_set(v);
}

void snapshot_03_out_set(number v) {
    this->snapshot_03_out = v;
    this->switchobj_03_in1_number_set(v);
}

void loadmess_01_startupbang_bang() {
    this->loadmess_01_message_bang();
}

void loadbang_01_startupbang_bang() {
    this->loadbang_01_output_bang();
}

number msToSamps(MillisecondTime ms, number sampleRate) {
    return ms * sampleRate * 0.001;
}

MillisecondTime sampsToMs(SampleIndex samps) {
    return samps * (this->invsr * 1000);
}

Index getMaxBlockSize() const {
    return this->maxvs;
}

number getSampleRate() const {
    return this->sr;
}

bool hasFixedVectorSize() const {
    return false;
}

Index getNumInputChannels() const {
    return 2;
}

Index getNumOutputChannels() const {
    return 2;
}

void allocateDataRefs() {
    this->mtof_tilde_01_innerMtoF_buffer->requestSize(65536, 1);
    this->mtof_tilde_01_innerMtoF_buffer->setSampleRate(this->sr);
    this->mtof_01_innerMtoF_buffer->requestSize(65536, 1);
    this->mtof_01_innerMtoF_buffer->setSampleRate(this->sr);
    this->delaytilde_01_del_buffer = this->delaytilde_01_del_buffer->allocateIfNeeded();

    if (this->delaytilde_01_del_bufferobj->hasRequestedSize()) {
        if (this->delaytilde_01_del_bufferobj->wantsFill())
            this->zeroDataRef(this->delaytilde_01_del_bufferobj);

        this->getEngine()->sendDataRefUpdated(0);
    }

    this->mtof_tilde_01_innerMtoF_buffer = this->mtof_tilde_01_innerMtoF_buffer->allocateIfNeeded();
    this->mtof_01_innerMtoF_buffer = this->mtof_01_innerMtoF_buffer->allocateIfNeeded();

    if (this->RNBODefaultMtofLookupTable256->hasRequestedSize()) {
        if (this->RNBODefaultMtofLookupTable256->wantsFill())
            this->fillRNBODefaultMtofLookupTable256(this->RNBODefaultMtofLookupTable256);

        this->getEngine()->sendDataRefUpdated(1);
    }

    this->delaytilde_02_del_buffer = this->delaytilde_02_del_buffer->allocateIfNeeded();

    if (this->delaytilde_02_del_bufferobj->hasRequestedSize()) {
        if (this->delaytilde_02_del_bufferobj->wantsFill())
            this->zeroDataRef(this->delaytilde_02_del_bufferobj);

        this->getEngine()->sendDataRefUpdated(2);
    }

    this->delaytilde_03_del_buffer = this->delaytilde_03_del_buffer->allocateIfNeeded();

    if (this->delaytilde_03_del_bufferobj->hasRequestedSize()) {
        if (this->delaytilde_03_del_bufferobj->wantsFill())
            this->zeroDataRef(this->delaytilde_03_del_bufferobj);

        this->getEngine()->sendDataRefUpdated(3);
    }

    this->fftstream_tilde_01_win_buf = this->fftstream_tilde_01_win_buf->allocateIfNeeded();

    if (this->RNBODefaultFftWindow->hasRequestedSize()) {
        if (this->RNBODefaultFftWindow->wantsFill())
            this->zeroDataRef(this->RNBODefaultFftWindow);

        this->getEngine()->sendDataRefUpdated(4);
    }

    this->delaytilde_04_del_buffer = this->delaytilde_04_del_buffer->allocateIfNeeded();

    if (this->delaytilde_04_del_bufferobj->hasRequestedSize()) {
        if (this->delaytilde_04_del_bufferobj->wantsFill())
            this->zeroDataRef(this->delaytilde_04_del_bufferobj);

        this->getEngine()->sendDataRefUpdated(5);
    }
}

void initializeObjects() {
    this->ip_01_init();
    this->ip_02_init();
    this->delaytilde_01_del_init();
    this->mtof_tilde_01_innerScala_init();
    this->mtof_tilde_01_init();
    this->delaytilde_02_del_init();
    this->ftom_tilde_01_innerScala_init();
    this->ftom_tilde_01_init();
    this->delaytilde_03_del_init();
    this->gen_01_history_2_init();
    this->gen_01_history_1_init();
    this->gen_01_change_0_init();
    this->delaytilde_04_del_init();
    this->ftom_01_innerScala_init();
    this->ftom_01_init();
    this->ip_03_init();
    this->mtof_01_innerScala_init();
    this->mtof_01_init();
    this->ftom_02_innerScala_init();
    this->ftom_02_init();
    this->ip_04_init();
}

void sendOutlet(OutletIndex index, ParameterValue value) {
    this->getEngine()->sendOutlet(this, index, value);
}

void startup() {
    this->updateTime(this->getEngine()->getCurrentTime());
    this->getEngine()->scheduleClockEvent(this, 892732297, 0 + this->_currentTime);;
    this->getEngine()->scheduleClockEvent(this, -1735137014, 0 + this->_currentTime);;

    {
        this->scheduleParamInit(0, -2147483647);
    }

    {
        this->scheduleParamInit(1, 0);
    }

    {
        this->scheduleParamInit(2, 0);
    }

    {
        this->scheduleParamInit(3, 0);
    }

    {
        this->scheduleParamInit(4, 0);
    }

    {
        this->scheduleParamInit(5, 0);
    }

    {
        this->scheduleParamInit(6, -2147483647);
    }

    {
        this->scheduleParamInit(7, -2147483647);
    }

    this->processParamInitEvents();
}

static number param_01_value_constrain(number v) {
    v = (v > 4 ? 4 : (v < 0 ? 0 : v));

    {
        number oneStep = (number)4 / (number)4;
        number oneStepInv = (oneStep != 0 ? (number)1 / oneStep : 0);
        number numberOfSteps = rnbo_fround(v * oneStepInv * 1 / (number)1) * 1;
        v = numberOfSteps * oneStep;
    }

    return v;
}

void selector_09_onoff_set(number v) {
    this->selector_09_onoff = v;
}

void trigger_01_out2_set(number v) {
    this->selector_09_onoff_set(v);
}

void ip_01_value_set(number v) {
    this->ip_01_value = v;
    this->ip_01_fillSigBuf();
    this->ip_01_lastValue = v;
}

void trigger_01_out1_set(number v) {
    this->ip_01_value_set(v);
}

void trigger_01_input_number_set(number v) {
    this->trigger_01_out2_set(rnbo_trunc(v));
    this->trigger_01_out1_set(rnbo_trunc(v));
}

static number param_02_value_constrain(number v) {
    v = (v > 100 ? 100 : (v < 0 ? 0 : v));
    return v;
}

void rampsmooth_tilde_01_down_set(number v) {
    this->rampsmooth_tilde_01_down = v;
}

void rampsmooth_tilde_01_up_set(number v) {
    this->rampsmooth_tilde_01_up = v;
}

void expr_02_out1_set(number v) {
    this->expr_02_out1 = v;
    this->rampsmooth_tilde_01_down_set(this->expr_02_out1);
    this->rampsmooth_tilde_01_up_set(this->expr_02_out1);
}

void expr_02_in1_set(number in1) {
    this->expr_02_in1 = in1;
    this->expr_02_out1_set(this->expr_02_in1 * this->expr_02_in2);//#map:*_obj-24:1
}

static number param_03_value_constrain(number v) {
    v = (v > 1000 ? 1000 : (v < 0 ? 0 : v));
    return v;
}

void outport_01_input_number_set(number v) {
    this->getEngine()->sendNumMessage(TAG("delay"), TAG(""), v, this->_currentTime);
}

void gate_02_onoff_set(number v) {
    this->gate_02_onoff = v;
}

void gate_03_onoff_set(number v) {
    this->gate_03_onoff = v;
}

void trigger_02_out4_set(number v) {
    this->gate_02_onoff_set(v);
    this->gate_03_onoff_set(v);
}

static number param_05_value_constrain(number v) {
    v = (v > 20000 ? 20000 : (v < 1 ? 1 : v));
    return v;
}

void outport_03_input_number_set(number v) {
    this->getEngine()->sendNumMessage(TAG("freq"), TAG(""), v, this->_currentTime);
}

static number param_04_value_constrain(number v) {
    v = (v > 136 ? 136 : (v < -37 ? -37 : v));
    return v;
}

void outport_02_input_number_set(number v) {
    this->getEngine()->sendNumMessage(TAG("midi"), TAG(""), v, this->_currentTime);
}

void trigger_03_out3_set(number v) {
    this->gate_03_onoff_set(v);
}

void gate_03_input_number_set(number v) {
    if (this->stackprotect_check())
        return;

    if (this->gate_03_onoff == 1)
        this->gate_03_out1_number_set(v);
}

void param_05_value_set(number v) {
    if (this->stackprotect_check())
        return;

    v = this->param_05_value_constrain(v);
    this->param_05_value = v;
    this->sendParameter(4, false);

    if (this->param_05_value != this->param_05_lastValue) {
        this->getEngine()->presetTouched();
        this->param_05_lastValue = this->param_05_value;
    }

    this->outport_03_input_number_set(v);
    this->gate_03_input_number_set(v);
}

void param_05_normalizedvalue_set(number v) {
    this->param_05_value_set(this->fromnormalized(4, v));
}

void switchobj_03_out_list_set(const list& v) {
    {
        if (v->length > 1)
            this->param_05_normalizedvalue_set(v[1]);

        number converted = (v->length > 0 ? v[0] : 0);
        this->param_05_value_set(converted);
    }
}

void switchobj_03_in2_list_set(const list& v) {
    if (this->switchobj_03_onoff == 2) {
        this->switchobj_03_out_list_set(v);
    }
}

void gate_01_input_number_set(number v) {
    if (this->stackprotect_check())
        return;

    if (this->gate_01_onoff == 1)
        this->gate_01_out1_number_set(v);
}

void switchobj_01_out_number_set(number v) {
    this->param_03_value_set(v);
}

void switchobj_01_in2_number_set(number v) {
    if (this->switchobj_01_onoff == 2) {
        this->switchobj_01_out_number_set(v);
    }
}

void expr_05_out1_set(number v) {
    this->expr_05_out1 = v;
    this->switchobj_01_in2_number_set(this->expr_05_out1);
}

void expr_05_in1_set(number in1) {
    this->expr_05_in1 = in1;

    this->expr_05_out1_set(
        ((this->expr_05_in1 == 0. ? 0. : (number)10000 / this->expr_05_in1)) * this->expr_05_in2
    );//#map:expr_obj-167:1
}

void expr_05_in2_set(number v) {
    this->expr_05_in2 = v;
}

void mtof_01_out_set(const list& v) {
    this->switchobj_03_in2_list_set(v);

    {
        if (v->length > 1)
            this->expr_05_in2_set(v[1]);

        number converted = (v->length > 0 ? v[0] : 0);
        this->expr_05_in1_set(converted);
    }
}

void mtof_01_midivalue_set(const list& v) {
    this->mtof_01_midivalue = jsCreateListCopy(v);
    list tmp = list();

    for (int i = 0; i < this->mtof_01_midivalue->length; i++) {
        tmp->push(
            this->mtof_01_innerMtoF_next(this->mtof_01_midivalue[(Index)i], this->mtof_01_base)
        );
    }

    this->mtof_01_out_set(tmp);
}

void trigger_03_out2_set(number v) {
    {
        list converted = {v};
        this->mtof_01_midivalue_set(converted);
    }
}

void trigger_03_out1_set(number v) {
    this->gate_03_onoff_set(v);
}

void trigger_03_input_number_set(number v) {
    this->trigger_03_out3_set(0);
    this->trigger_03_out2_set(v);
    this->trigger_03_out1_set(1);
}

void gate_02_out1_number_set(number v) {
    this->gate_02_out1_number = v;
    this->trigger_03_input_number_set(v);
}

void gate_02_input_number_set(number v) {
    if (this->gate_02_onoff == 1)
        this->gate_02_out1_number_set(v);
}

void param_04_value_set(number v) {
    v = this->param_04_value_constrain(v);
    this->param_04_value = v;
    this->sendParameter(3, false);

    if (this->param_04_value != this->param_04_lastValue) {
        this->getEngine()->presetTouched();
        this->param_04_lastValue = this->param_04_value;
    }

    this->outport_02_input_number_set(v);
    this->gate_02_input_number_set(v);
}

void param_04_normalizedvalue_set(number v) {
    this->param_04_value_set(this->fromnormalized(3, v));
}

void switchobj_02_out_list_set(const list& v) {
    {
        if (v->length > 1)
            this->param_04_normalizedvalue_set(v[1]);

        number converted = (v->length > 0 ? v[0] : 0);
        this->param_04_value_set(converted);
    }
}

void switchobj_02_in2_list_set(const list& v) {
    if (this->switchobj_02_onoff == 2) {
        this->switchobj_02_out_list_set(v);
    }
}

void ftom_01_out_set(const list& v) {
    this->switchobj_02_in2_list_set(v);
}

void ftom_01_frequency_set(const list& v) {
    this->ftom_01_frequency = jsCreateListCopy(v);
    list tmp = list();

    for (int i = 0; i < this->ftom_01_frequency->length; i++) {
        number v = this->ftom_01_innerFtoM_next(this->ftom_01_frequency[(Index)i], this->ftom_01_base);

        if (1 == 0 || v != -999.0) {
            tmp->push(v);
        }
    }

    if (1 == 0 || tmp->length > 0) {
        this->ftom_01_out_set(tmp);
    }
}

void expr_03_out1_set(number v) {
    this->expr_03_out1 = v;

    {
        list converted = {this->expr_03_out1};
        this->ftom_01_frequency_set(converted);
    }
}

void expr_03_in1_set(number in1) {
    this->expr_03_in1 = in1;

    this->expr_03_out1_set(
        (this->expr_03_in1 > this->expr_03_in3 ? this->expr_03_in3 : (this->expr_03_in1 < this->expr_03_in2 ? this->expr_03_in2 : this->expr_03_in1))
    );//#map:clip_obj-186:1
}

void gate_03_out1_number_set(number v) {
    this->gate_03_out1_number = v;
    this->expr_03_in1_set(v);
}

void switchobj_03_out_number_set(number v) {
    this->param_05_value_set(v);
}

void switchobj_03_in2_number_set(number v) {
    if (this->switchobj_03_onoff == 2) {
        this->switchobj_03_out_number_set(v);
    }
}

void ftom_02_out_set(const list& v) {
    this->switchobj_02_in2_list_set(v);
}

void ftom_02_frequency_set(const list& v) {
    this->ftom_02_frequency = jsCreateListCopy(v);
    list tmp = list();

    for (int i = 0; i < this->ftom_02_frequency->length; i++) {
        number v = this->ftom_02_innerFtoM_next(this->ftom_02_frequency[(Index)i], this->ftom_02_base);

        if (1 == 0 || v != -999.0) {
            tmp->push(v);
        }
    }

    if (1 == 0 || tmp->length > 0) {
        this->ftom_02_out_set(tmp);
    }
}

void expr_06_out1_set(number v) {
    this->expr_06_out1 = v;

    {
        list converted = {this->expr_06_out1};
        this->ftom_02_frequency_set(converted);
    }
}

void expr_06_in1_set(number in1) {
    this->expr_06_in1 = in1;

    this->expr_06_out1_set(
        (this->expr_06_in1 > this->expr_06_in3 ? this->expr_06_in3 : (this->expr_06_in1 < this->expr_06_in2 ? this->expr_06_in2 : this->expr_06_in1))
    );//#map:clip_obj-188:1
}

void expr_07_out1_set(number v) {
    this->expr_07_out1 = v;
    this->switchobj_03_in2_number_set(this->expr_07_out1);
    this->expr_06_in1_set(this->expr_07_out1);
}

void expr_07_in1_set(number in1) {
    this->expr_07_in1 = in1;

    this->expr_07_out1_set(
        ((this->expr_07_in1 == 0. ? 0. : (number)10000 / this->expr_07_in1)) * this->expr_07_in2
    );//#map:expr_obj-171:1
}

void trigger_02_out3_set(number v) {
    this->expr_07_in1_set(v);
}

void ip_03_value_set(number v) {
    this->ip_03_value = v;
    this->ip_03_fillSigBuf();
    this->ip_03_lastValue = v;
}

void trigger_02_out2_set(number v) {
    this->ip_03_value_set(v);
}

void trigger_02_out1_set(number v) {
    this->gate_02_onoff_set(v);
    this->gate_03_onoff_set(v);
}

void trigger_02_input_number_set(number v) {
    this->trigger_02_out4_set(0);
    this->trigger_02_out3_set(v);
    this->trigger_02_out2_set(v);
    this->trigger_02_out1_set(1);
}

void gate_01_out1_number_set(number v) {
    this->gate_01_out1_number = v;
    this->trigger_02_input_number_set(v);
}

static number param_06_value_constrain(number v) {
    v = (v > 16 ? 16 : (v < 8 ? 8 : v));
    return v;
}

void expr_08_in2_set(number v) {
    this->expr_08_in2 = v;
}

void trigger_04_out2_set(number v) {
    this->expr_08_in2_set(v);
}

void expr_08_out1_set(number v) {
    this->expr_08_out1 = v;
}

void expr_08_in1_set(number in1) {
    this->expr_08_in1 = in1;
    this->expr_08_out1_set(fixnan(rnbo_pow(this->expr_08_in1, this->expr_08_in2)));//#map:pow_obj-152:1
}

void trigger_04_out1_set(number v) {
    this->expr_08_in1_set(v);
}

void trigger_04_input_number_set(number v) {
    this->trigger_04_out2_set(rnbo_trunc(v));
    this->trigger_04_out1_set(2);
}

static number param_07_value_constrain(number v) {
    v = (v > 100 ? 100 : (v < -100 ? -100 : v));
    return v;
}

void ip_04_value_set(number v) {
    this->ip_04_value = v;
    this->ip_04_fillSigBuf();
    this->ip_04_lastValue = v;
}

void trigger_05_out4_set(number v) {
    this->ip_04_value_set(v);
}

void expr_07_in2_set(number v) {
    this->expr_07_in2 = v;
}

void trigger_05_out3_set(number v) {
    this->expr_07_in2_set(v);
}

void trigger_05_out2_set(number v) {
    this->expr_05_in2_set(v);
}

void param_05_value_bang() {
    if (this->stackprotect_check())
        return;

    number v = this->param_05_value;
    this->sendParameter(4, false);

    if (this->param_05_value != this->param_05_lastValue) {
        this->getEngine()->presetTouched();
        this->param_05_lastValue = this->param_05_value;
    }

    this->outport_03_input_number_set(v);
    this->gate_03_input_number_set(v);
}

void trigger_05_out1_bang() {
    this->param_05_value_bang();
}

void trigger_05_input_number_set(number v) {
    this->trigger_05_out4_set(v);
    this->trigger_05_out3_set(v);
    this->trigger_05_out2_set(v);
    this->trigger_05_out1_bang();
}

void expr_09_out1_set(number v) {
    this->expr_09_out1 = v;
    this->trigger_05_input_number_set(this->expr_09_out1);
}

void expr_09_in1_set(number in1) {
    this->expr_09_in1 = in1;
    this->expr_09_out1_set(this->expr_09_in1 / (number)100.1 + 1);//#map:expr_obj-39:1
}

static number param_08_value_constrain(number v) {
    v = (v > 1 ? 1 : (v < 0 ? 0 : v));

    {
        number oneStep = (number)1 / (number)1;
        number oneStepInv = (oneStep != 0 ? (number)1 / oneStep : 0);
        number numberOfSteps = rnbo_fround(v * oneStepInv * 1 / (number)1) * 1;
        v = numberOfSteps * oneStep;
    }

    return v;
}

void gate_01_onoff_set(number v) {
    this->gate_01_onoff = v;
}

void expr_04_out1_set(number v) {
    this->expr_04_out1 = v;
    this->gate_01_onoff_set(this->expr_04_out1);
    this->gate_02_onoff_set(this->expr_04_out1);
    this->gate_03_onoff_set(this->expr_04_out1);
}

void expr_04_in1_set(number in1) {
    this->expr_04_in1 = in1;
    this->expr_04_out1_set(this->expr_04_in1 - this->expr_04_in2);//#map:-_obj-179:1
}

void trigger_06_out2_set(number v) {
    this->expr_04_in1_set(v);
}

void switchobj_01_onoff_set(number v) {
    this->switchobj_01_onoff = v;
}

void switchobj_02_onoff_set(number v) {
    this->switchobj_02_onoff = v;
}

void switchobj_03_onoff_set(number v) {
    this->switchobj_03_onoff = v;
}

void selector_07_onoff_set(number v) {
    this->selector_07_onoff = v;
}

void ip_02_value_set(number v) {
    this->ip_02_value = v;
    this->ip_02_fillSigBuf();
    this->ip_02_lastValue = v;
}

void trigger_06_out1_set(number v) {
    this->switchobj_01_onoff_set(v);
    this->switchobj_02_onoff_set(v);
    this->switchobj_03_onoff_set(v);
    this->selector_07_onoff_set(v);
    this->ip_02_value_set(v);
}

void trigger_06_input_number_set(number v) {
    this->trigger_06_out2_set(rnbo_trunc(v));
    this->trigger_06_out1_set(rnbo_trunc(v));
}

void expr_10_out1_set(number v) {
    this->expr_10_out1 = v;
    this->trigger_06_input_number_set(this->expr_10_out1);
}

void expr_10_in1_set(number in1) {
    this->expr_10_in1 = in1;
    this->expr_10_out1_set(this->expr_10_in1 + this->expr_10_in2);//#map:+_obj-138:1
}

void switchobj_01_in1_number_set(number v) {
    if (this->switchobj_01_onoff == 1) {
        this->switchobj_01_out_number_set(v);
    }
}

void switchobj_02_out_number_set(number v) {
    this->param_04_value_set(v);
}

void switchobj_02_in1_number_set(number v) {
    if (this->switchobj_02_onoff == 1) {
        this->switchobj_02_out_number_set(v);
    }
}

void switchobj_03_in1_number_set(number v) {
    if (this->switchobj_03_onoff == 1) {
        this->switchobj_03_out_number_set(v);
    }
}

void trigger_07_out2_set(number v) {
    this->expr_10_in1_set(v);
}

void dspexpr_10_in2_set(number v) {
    this->dspexpr_10_in2 = v;
}

void expr_01_out1_set(number v) {
    this->expr_01_out1 = v;
    this->dspexpr_10_in2_set(this->expr_01_out1);
}

void expr_01_in1_set(number in1) {
    this->expr_01_in1 = in1;

    this->expr_01_out1_set(
        (this->expr_01_in2 == 0 ? 0 : (this->expr_01_in2 == 0. ? 0. : this->expr_01_in1 / this->expr_01_in2))
    );//#map:/_obj-18:1
}

void samplerate_01_samplerate_set(number v) {
    this->expr_01_in1_set(v);
}

void samplerate_01_input_bang() {
    this->samplerate_01_samplerate_set(this->samplerate());
}

void trigger_07_out1_bang() {
    this->samplerate_01_input_bang();
}

void trigger_07_input_list_set(const list& v) {
    this->trigger_07_out2_set((v->length > 0 ? rnbo_trunc(v[0]) : 0));
    this->trigger_07_out1_bang();
}

void loadmess_01_message_bang() {
    list v = this->loadmess_01_message;
    this->trigger_07_input_list_set(v);
}

void param_01_reset_bang() {
    this->param_01_value_set(0);
}

void param_06_reset_bang() {
    this->param_06_value_set(12);
}

void param_07_reset_bang() {
    this->param_07_value_set(0);
}

void param_08_reset_bang() {
    this->param_08_value_set(1);
}

void loadbang_01_output_bang() {
    this->param_01_reset_bang();
    this->param_06_reset_bang();
    this->param_07_reset_bang();
    this->param_08_reset_bang();
}

void ip_01_perform(SampleValue * out, Index n) {
    auto __ip_01_sigbuf = this->ip_01_sigbuf;
    auto __ip_01_lastValue = this->ip_01_lastValue;
    auto __ip_01_lastIndex = this->ip_01_lastIndex;

    for (Index i = 0; i < n; i++) {
        out[(Index)i] = ((SampleIndex)(i) >= __ip_01_lastIndex ? __ip_01_lastValue : __ip_01_sigbuf[(Index)i]);
    }

    __ip_01_lastIndex = 0;
    this->ip_01_lastIndex = __ip_01_lastIndex;
}

void dspexpr_02_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    RNBO_UNUSED(in2);
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + 1;//#map:_###_obj_###_:1
    }
}

void dspexpr_03_perform(const Sample * in1, number in2, number in3, SampleValue * out1, Index n) {
    RNBO_UNUSED(in3);
    RNBO_UNUSED(in2);
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = (in1[(Index)i] > 2 ? 2 : (in1[(Index)i] < 1 ? 1 : in1[(Index)i]));//#map:_###_obj_###_:1
    }
}

void ip_02_perform(SampleValue * out, Index n) {
    auto __ip_02_sigbuf = this->ip_02_sigbuf;
    auto __ip_02_lastValue = this->ip_02_lastValue;
    auto __ip_02_lastIndex = this->ip_02_lastIndex;

    for (Index i = 0; i < n; i++) {
        out[(Index)i] = ((SampleIndex)(i) >= __ip_02_lastIndex ? __ip_02_lastValue : __ip_02_sigbuf[(Index)i]);
    }

    __ip_02_lastIndex = 0;
    this->ip_02_lastIndex = __ip_02_lastIndex;
}

void dspexpr_04_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = (in1[(Index)i] + in2[(Index)i]) / (number)2;//#map:_###_obj_###_:1
    }
}

void selector_09_perform(
    number onoff,
    const SampleValue * in1,
    const SampleValue * in2,
    const SampleValue * in3,
    const SampleValue * in4,
    SampleValue * out,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        if (onoff >= 1 && onoff < 2)
            out[(Index)i] = in1[(Index)i];
        else if (onoff >= 2 && onoff < 3)
            out[(Index)i] = in2[(Index)i];
        else if (onoff >= 3 && onoff < 4)
            out[(Index)i] = in3[(Index)i];
        else if (onoff >= 4 && onoff < 5)
            out[(Index)i] = in4[(Index)i];
        else
            out[(Index)i] = 0;
    }
}

void fftstream_tilde_01_perform(
    const Sample * realIn,
    number imagIn,
    SampleValue * out1,
    SampleValue * out2,
    SampleValue * out3,
    Index n
) {
    RNBO_UNUSED(imagIn);
    auto __fftstream_tilde_01_outWorkspace = this->fftstream_tilde_01_outWorkspace;
    auto __fftstream_tilde_01_inWorkspace = this->fftstream_tilde_01_inWorkspace;
    auto __fftstream_tilde_01_datapos = this->fftstream_tilde_01_datapos;
    number invFftSize = (number)1 / (number)4096;
    Index i0;

    for (i0 = 0; i0 < n; i0++) {
        SampleIndex i = (SampleIndex)(__fftstream_tilde_01_datapos);
        array<number, 3> out = {0, 0, i};
        number windowFactor = 1;

        if (__fftstream_tilde_01_datapos < 4096) {
            __fftstream_tilde_01_inWorkspace[(Index)(2 * i)] = windowFactor * realIn[(Index)i0];
            out[0] = __fftstream_tilde_01_outWorkspace[(Index)(2 * i)];
            __fftstream_tilde_01_inWorkspace[(Index)(2 * i + 1)] = windowFactor * 0;
            out[1] = __fftstream_tilde_01_outWorkspace[(Index)(2 * i + 1)];

            if (i == 4096 - 1) {
                this->fftstream_tilde_01_fft_next(__fftstream_tilde_01_inWorkspace, 4096);

                for (SampleIndex j = 0; j < 4096 * 2; j++) {
                    __fftstream_tilde_01_outWorkspace[(Index)j] = __fftstream_tilde_01_inWorkspace[(Index)j];
                }
            }

            __fftstream_tilde_01_datapos = (__fftstream_tilde_01_datapos + 1) % 4096;
        }

        out1[(Index)i0] = out[0];
        out2[(Index)i0] = out[1];
        out3[(Index)i0] = out[2];
    }

    this->fftstream_tilde_01_datapos = __fftstream_tilde_01_datapos;
}

void gen_01_perform(
    const Sample * in1,
    const Sample * in2,
    const Sample * in3,
    SampleValue * out1,
    SampleValue * out2,
    Index n
) {
    auto __gen_01_history_2_value = this->gen_01_history_2_value;
    auto __gen_01_history_1_value = this->gen_01_history_1_value;
    Index i;

    for (i = 0; i < n; i++) {
        number change_3_1 = this->gen_01_change_0_next(in3[(Index)i]);
        number eq_4_2 = change_3_1 == 1;
        out2[(Index)i] = eq_4_2;
        number radius_5 = 0;
        number angle_6 = 0;
        radius_5 = (in1[(Index)i] * in1[(Index)i] + in2[(Index)i] * in2[(Index)i] <= 0 ? 0 : rnbo_sqrt(in1[(Index)i] * in1[(Index)i] + in2[(Index)i] * in2[(Index)i])), angle_6 = rnbo_atan2(in2[(Index)i], in1[(Index)i]);
        auto max_7_3 = this->maximum(radius_5, __gen_01_history_1_value);
        number mul_8_4 = max_7_3 * eq_4_2;
        number gt_9_5 = max_7_3 > __gen_01_history_1_value;
        number gate_10_6 = (gt_9_5 >= 1 ? in3[(Index)i] : 0);
        auto max_11_7 = this->maximum(gate_10_6, __gen_01_history_2_value);
        number sub_12_8 = max_11_7 - __gen_01_history_2_value;
        number abs_13_9 = rnbo_abs(sub_12_8);
        number lt_14_10 = abs_13_9 < 1000;
        number gate_15_11 = (lt_14_10 >= 1 ? max_11_7 : 0);
        number mul_16_12 = gate_15_11 * eq_4_2;
        number add_17_13 = lt_14_10 + 1;
        number selector_18_14 = (add_17_13 >= 2 ? max_11_7 : (add_17_13 >= 1 ? __gen_01_history_2_value : 0));
        out1[(Index)i] = selector_18_14;
        number history_1_next_19_15 = fixdenorm(mul_8_4);
        number history_2_next_20_16 = fixdenorm(mul_16_12);
        __gen_01_history_1_value = history_1_next_19_15;
        __gen_01_history_2_value = history_2_next_20_16;
    }

    this->gen_01_history_1_value = __gen_01_history_1_value;
    this->gen_01_history_2_value = __gen_01_history_2_value;
}

void dspexpr_10_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] * in2;//#map:_###_obj_###_:1
    }
}

void selector_07_perform(
    number onoff,
    const SampleValue * in1,
    const SampleValue * in2,
    SampleValue * out,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        if (onoff >= 1 && onoff < 2)
            out[(Index)i] = in1[(Index)i];
        else if (onoff >= 2 && onoff < 3)
            out[(Index)i] = in2[(Index)i];
        else
            out[(Index)i] = 0;
    }
}

void rampsmooth_tilde_01_perform(const Sample * x, number up, number down, SampleValue * out1, Index n) {
    auto __rampsmooth_tilde_01_increment = this->rampsmooth_tilde_01_increment;
    auto __rampsmooth_tilde_01_index = this->rampsmooth_tilde_01_index;
    auto __rampsmooth_tilde_01_prev = this->rampsmooth_tilde_01_prev;
    Index i;

    for (i = 0; i < n; i++) {
        if (this->rampsmooth_tilde_01_d_next(x[(Index)i]) != 0.) {
            if (x[(Index)i] > __rampsmooth_tilde_01_prev) {
                number _up = up;

                if (_up < 1)
                    _up = 1;

                __rampsmooth_tilde_01_index = _up;
                __rampsmooth_tilde_01_increment = (x[(Index)i] - __rampsmooth_tilde_01_prev) / _up;
            } else if (x[(Index)i] < __rampsmooth_tilde_01_prev) {
                number _down = down;

                if (_down < 1)
                    _down = 1;

                __rampsmooth_tilde_01_index = _down;
                __rampsmooth_tilde_01_increment = (x[(Index)i] - __rampsmooth_tilde_01_prev) / _down;
            }
        }

        if (__rampsmooth_tilde_01_index > 0) {
            __rampsmooth_tilde_01_prev += __rampsmooth_tilde_01_increment;
            __rampsmooth_tilde_01_index -= 1;
        } else {
            __rampsmooth_tilde_01_prev = x[(Index)i];
        }

        out1[(Index)i] = __rampsmooth_tilde_01_prev;
    }

    this->rampsmooth_tilde_01_prev = __rampsmooth_tilde_01_prev;
    this->rampsmooth_tilde_01_index = __rampsmooth_tilde_01_index;
    this->rampsmooth_tilde_01_increment = __rampsmooth_tilde_01_increment;
}

void snapshot_03_perform(const SampleValue * input_signal, Index n) {
    auto __snapshot_03_lastValue = this->snapshot_03_lastValue;
    auto __snapshot_03_calc = this->snapshot_03_calc;
    auto __snapshot_03_count = this->snapshot_03_count;
    auto __snapshot_03_nextTime = this->snapshot_03_nextTime;
    auto __snapshot_03_interval = this->snapshot_03_interval;
    number timeInSamples = this->msToSamps(__snapshot_03_interval, this->sr);

    if (__snapshot_03_interval > 0) {
        for (Index i = 0; i < n; i++) {
            if (__snapshot_03_nextTime <= __snapshot_03_count + (SampleIndex)(i)) {
                {
                    __snapshot_03_calc = input_signal[(Index)i];
                }

                this->getEngine()->scheduleClockEventWithValue(
                    this,
                    -368915887,
                    this->sampsToMs((SampleIndex)(this->vs)) + this->_currentTime,
                    __snapshot_03_calc
                );;

                __snapshot_03_calc = 0;
                __snapshot_03_nextTime += timeInSamples;
            }
        }

        __snapshot_03_count += this->vs;
    }

    __snapshot_03_lastValue = input_signal[(Index)(n - 1)];
    this->snapshot_03_nextTime = __snapshot_03_nextTime;
    this->snapshot_03_count = __snapshot_03_count;
    this->snapshot_03_calc = __snapshot_03_calc;
    this->snapshot_03_lastValue = __snapshot_03_lastValue;
}

void selector_06_perform(
    const Sample * onoff,
    const SampleValue * in1,
    const SampleValue * in2,
    SampleValue * out,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        if (onoff[(Index)i] >= 1 && onoff[(Index)i] < 2)
            out[(Index)i] = in1[(Index)i];
        else if (onoff[(Index)i] >= 2 && onoff[(Index)i] < 3)
            out[(Index)i] = in2[(Index)i];
        else
            out[(Index)i] = 0;
    }
}

void dspexpr_07_perform(const Sample * in1, number in2, number in3, SampleValue * out1, Index n) {
    RNBO_UNUSED(in3);
    RNBO_UNUSED(in2);
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = (in1[(Index)i] > 20000 ? 20000 : (in1[(Index)i] < 1 ? 1 : in1[(Index)i]));//#map:_###_obj_###_:1
    }
}

void ftom_tilde_01_perform(const Sample * frequency, SampleValue * out, Index n) {
    auto __ftom_tilde_01_base = this->ftom_tilde_01_base;

    for (Index i = 0; i < n; i++) {
        number v = this->ftom_tilde_01_innerFtoM_next(frequency[(Index)i], __ftom_tilde_01_base);
        out[(Index)i] = (v == -999.0 ? 0.0 : v);
    }
}

void snapshot_02_perform(const SampleValue * input_signal, Index n) {
    auto __snapshot_02_lastValue = this->snapshot_02_lastValue;
    auto __snapshot_02_calc = this->snapshot_02_calc;
    auto __snapshot_02_count = this->snapshot_02_count;
    auto __snapshot_02_nextTime = this->snapshot_02_nextTime;
    auto __snapshot_02_interval = this->snapshot_02_interval;
    number timeInSamples = this->msToSamps(__snapshot_02_interval, this->sr);

    if (__snapshot_02_interval > 0) {
        for (Index i = 0; i < n; i++) {
            if (__snapshot_02_nextTime <= __snapshot_02_count + (SampleIndex)(i)) {
                {
                    __snapshot_02_calc = input_signal[(Index)i];
                }

                this->getEngine()->scheduleClockEventWithValue(
                    this,
                    -1508480176,
                    this->sampsToMs((SampleIndex)(this->vs)) + this->_currentTime,
                    __snapshot_02_calc
                );;

                __snapshot_02_calc = 0;
                __snapshot_02_nextTime += timeInSamples;
            }
        }

        __snapshot_02_count += this->vs;
    }

    __snapshot_02_lastValue = input_signal[(Index)(n - 1)];
    this->snapshot_02_nextTime = __snapshot_02_nextTime;
    this->snapshot_02_count = __snapshot_02_count;
    this->snapshot_02_calc = __snapshot_02_calc;
    this->snapshot_02_lastValue = __snapshot_02_lastValue;
}

void selector_04_perform(
    const Sample * onoff,
    const SampleValue * in1,
    const SampleValue * in2,
    SampleValue * out,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        if (onoff[(Index)i] >= 1 && onoff[(Index)i] < 2)
            out[(Index)i] = in1[(Index)i];
        else if (onoff[(Index)i] >= 2 && onoff[(Index)i] < 3)
            out[(Index)i] = in2[(Index)i];
        else
            out[(Index)i] = 0;
    }
}

void mtof_tilde_01_perform(const Sample * midivalue, SampleValue * out, Index n) {
    auto __mtof_tilde_01_base = this->mtof_tilde_01_base;

    for (Index i = 0; i < n; i++) {
        out[(Index)i] = this->mtof_tilde_01_innerMtoF_next(midivalue[(Index)i], __mtof_tilde_01_base);
    }
}

void paramtilde_01_perform(const SampleValue * Output, SampleValue * out, Index n) {
    auto __paramtilde_01_sigbuf = this->paramtilde_01_sigbuf;
    auto __paramtilde_01_value = this->paramtilde_01_value;
    auto __paramtilde_01_lastIndex = this->paramtilde_01_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_01_lastIndex) {
            out[(Index)i] = Output[(Index)i] + __paramtilde_01_value;
        } else {
            out[(Index)i] = Output[(Index)i] + __paramtilde_01_sigbuf[(Index)i];
        }
    }

    __paramtilde_01_lastIndex = 0;
    this->paramtilde_01_lastIndex = __paramtilde_01_lastIndex;
}

void dspexpr_09_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = rnbo_pow(10, in1[(Index)i] * 0.05);//#map:_###_obj_###_:1
    }
}

void paramtilde_02_perform(const SampleValue * Rotation, SampleValue * out, Index n) {
    auto __paramtilde_02_sigbuf = this->paramtilde_02_sigbuf;
    auto __paramtilde_02_value = this->paramtilde_02_value;
    auto __paramtilde_02_lastIndex = this->paramtilde_02_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_02_lastIndex) {
            out[(Index)i] = Rotation[(Index)i] + __paramtilde_02_value;
        } else {
            out[(Index)i] = Rotation[(Index)i] + __paramtilde_02_sigbuf[(Index)i];
        }
    }

    __paramtilde_02_lastIndex = 0;
    this->paramtilde_02_lastIndex = __paramtilde_02_lastIndex;
}

void dspexpr_08_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void ip_03_perform(SampleValue * out, Index n) {
    auto __ip_03_sigbuf = this->ip_03_sigbuf;
    auto __ip_03_lastValue = this->ip_03_lastValue;
    auto __ip_03_lastIndex = this->ip_03_lastIndex;

    for (Index i = 0; i < n; i++) {
        out[(Index)i] = ((SampleIndex)(i) >= __ip_03_lastIndex ? __ip_03_lastValue : __ip_03_sigbuf[(Index)i]);
    }

    __ip_03_lastIndex = 0;
    this->ip_03_lastIndex = __ip_03_lastIndex;
}

void ip_04_perform(SampleValue * out, Index n) {
    auto __ip_04_sigbuf = this->ip_04_sigbuf;
    auto __ip_04_lastValue = this->ip_04_lastValue;
    auto __ip_04_lastIndex = this->ip_04_lastIndex;

    for (Index i = 0; i < n; i++) {
        out[(Index)i] = ((SampleIndex)(i) >= __ip_04_lastIndex ? __ip_04_lastValue : __ip_04_sigbuf[(Index)i]);
    }

    __ip_04_lastIndex = 0;
    this->ip_04_lastIndex = __ip_04_lastIndex;
}

void dspexpr_05_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = ((in1[(Index)i] == 0. ? 0. : (number)10000 / in1[(Index)i])) * in2[(Index)i];//#map:_###_obj_###_:1
    }
}

void selector_03_perform(
    const Sample * onoff,
    const SampleValue * in1,
    const SampleValue * in2,
    SampleValue * out,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        if (onoff[(Index)i] >= 1 && onoff[(Index)i] < 2)
            out[(Index)i] = in1[(Index)i];
        else if (onoff[(Index)i] >= 2 && onoff[(Index)i] < 3)
            out[(Index)i] = in2[(Index)i];
        else
            out[(Index)i] = 0;
    }
}

void delaytilde_02_perform(
    const Sample * delay,
    const SampleValue * input,
    SampleValue * output,
    Index n
) {
    auto __delaytilde_02_crossfadeDelay = this->delaytilde_02_crossfadeDelay;
    auto __delaytilde_02_rampInSamples = this->delaytilde_02_rampInSamples;
    auto __delaytilde_02_ramp = this->delaytilde_02_ramp;
    auto __delaytilde_02_lastDelay = this->delaytilde_02_lastDelay;

    for (Index i = 0; i < n; i++) {
        if (__delaytilde_02_lastDelay == -1) {
            __delaytilde_02_lastDelay = delay[(Index)i];
        }

        if (__delaytilde_02_ramp > 0) {
            number factor = __delaytilde_02_ramp / __delaytilde_02_rampInSamples;
            output[(Index)i] = this->delaytilde_02_del_read(__delaytilde_02_crossfadeDelay, 0) * factor + this->delaytilde_02_del_read(__delaytilde_02_lastDelay, 0) * (1. - factor);
            __delaytilde_02_ramp--;
        } else {
            number effectiveDelay = delay[(Index)i];

            if (effectiveDelay != __delaytilde_02_lastDelay) {
                __delaytilde_02_ramp = __delaytilde_02_rampInSamples;
                __delaytilde_02_crossfadeDelay = __delaytilde_02_lastDelay;
                __delaytilde_02_lastDelay = effectiveDelay;
                output[(Index)i] = this->delaytilde_02_del_read(__delaytilde_02_crossfadeDelay, 0);
                __delaytilde_02_ramp--;
            } else {
                output[(Index)i] = this->delaytilde_02_del_read(effectiveDelay, 0);
            }
        }

        this->delaytilde_02_del_write(input[(Index)i]);
        this->delaytilde_02_del_step();
    }

    this->delaytilde_02_lastDelay = __delaytilde_02_lastDelay;
    this->delaytilde_02_ramp = __delaytilde_02_ramp;
    this->delaytilde_02_crossfadeDelay = __delaytilde_02_crossfadeDelay;
}

void snapshot_01_perform(const SampleValue * input_signal, Index n) {
    auto __snapshot_01_lastValue = this->snapshot_01_lastValue;
    auto __snapshot_01_calc = this->snapshot_01_calc;
    auto __snapshot_01_count = this->snapshot_01_count;
    auto __snapshot_01_nextTime = this->snapshot_01_nextTime;
    auto __snapshot_01_interval = this->snapshot_01_interval;
    number timeInSamples = this->msToSamps(__snapshot_01_interval, this->sr);

    if (__snapshot_01_interval > 0) {
        for (Index i = 0; i < n; i++) {
            if (__snapshot_01_nextTime <= __snapshot_01_count + (SampleIndex)(i)) {
                {
                    __snapshot_01_calc = input_signal[(Index)i];
                }

                this->getEngine()->scheduleClockEventWithValue(
                    this,
                    1646922831,
                    this->sampsToMs((SampleIndex)(this->vs)) + this->_currentTime,
                    __snapshot_01_calc
                );;

                __snapshot_01_calc = 0;
                __snapshot_01_nextTime += timeInSamples;
            }
        }

        __snapshot_01_count += this->vs;
    }

    __snapshot_01_lastValue = input_signal[(Index)(n - 1)];
    this->snapshot_01_nextTime = __snapshot_01_nextTime;
    this->snapshot_01_count = __snapshot_01_count;
    this->snapshot_01_calc = __snapshot_01_calc;
    this->snapshot_01_lastValue = __snapshot_01_lastValue;
}

void delaytilde_04_perform(
    const Sample * delay,
    const SampleValue * input,
    SampleValue * output,
    Index n
) {
    auto __delaytilde_04_crossfadeDelay = this->delaytilde_04_crossfadeDelay;
    auto __delaytilde_04_rampInSamples = this->delaytilde_04_rampInSamples;
    auto __delaytilde_04_ramp = this->delaytilde_04_ramp;
    auto __delaytilde_04_lastDelay = this->delaytilde_04_lastDelay;

    for (Index i = 0; i < n; i++) {
        if (__delaytilde_04_lastDelay == -1) {
            __delaytilde_04_lastDelay = delay[(Index)i];
        }

        if (__delaytilde_04_ramp > 0) {
            number factor = __delaytilde_04_ramp / __delaytilde_04_rampInSamples;
            output[(Index)i] = this->delaytilde_04_del_read(__delaytilde_04_crossfadeDelay, 0) * factor + this->delaytilde_04_del_read(__delaytilde_04_lastDelay, 0) * (1. - factor);
            __delaytilde_04_ramp--;
        } else {
            number effectiveDelay = delay[(Index)i];

            if (effectiveDelay != __delaytilde_04_lastDelay) {
                __delaytilde_04_ramp = __delaytilde_04_rampInSamples;
                __delaytilde_04_crossfadeDelay = __delaytilde_04_lastDelay;
                __delaytilde_04_lastDelay = effectiveDelay;
                output[(Index)i] = this->delaytilde_04_del_read(__delaytilde_04_crossfadeDelay, 0);
                __delaytilde_04_ramp--;
            } else {
                output[(Index)i] = this->delaytilde_04_del_read(effectiveDelay, 0);
            }
        }

        this->delaytilde_04_del_write(input[(Index)i]);
        this->delaytilde_04_del_step();
    }

    this->delaytilde_04_lastDelay = __delaytilde_04_lastDelay;
    this->delaytilde_04_ramp = __delaytilde_04_ramp;
    this->delaytilde_04_crossfadeDelay = __delaytilde_04_crossfadeDelay;
}

void delaytilde_01_perform(
    const Sample * delay,
    const SampleValue * input,
    SampleValue * output,
    Index n
) {
    auto __delaytilde_01_crossfadeDelay = this->delaytilde_01_crossfadeDelay;
    auto __delaytilde_01_rampInSamples = this->delaytilde_01_rampInSamples;
    auto __delaytilde_01_ramp = this->delaytilde_01_ramp;
    auto __delaytilde_01_lastDelay = this->delaytilde_01_lastDelay;

    for (Index i = 0; i < n; i++) {
        if (__delaytilde_01_lastDelay == -1) {
            __delaytilde_01_lastDelay = delay[(Index)i];
        }

        if (__delaytilde_01_ramp > 0) {
            number factor = __delaytilde_01_ramp / __delaytilde_01_rampInSamples;
            output[(Index)i] = this->delaytilde_01_del_read(__delaytilde_01_crossfadeDelay, 0) * factor + this->delaytilde_01_del_read(__delaytilde_01_lastDelay, 0) * (1. - factor);
            __delaytilde_01_ramp--;
        } else {
            number effectiveDelay = delay[(Index)i];

            if (effectiveDelay != __delaytilde_01_lastDelay) {
                __delaytilde_01_ramp = __delaytilde_01_rampInSamples;
                __delaytilde_01_crossfadeDelay = __delaytilde_01_lastDelay;
                __delaytilde_01_lastDelay = effectiveDelay;
                output[(Index)i] = this->delaytilde_01_del_read(__delaytilde_01_crossfadeDelay, 0);
                __delaytilde_01_ramp--;
            } else {
                output[(Index)i] = this->delaytilde_01_del_read(effectiveDelay, 0);
            }
        }

        this->delaytilde_01_del_write(input[(Index)i]);
        this->delaytilde_01_del_step();
    }

    this->delaytilde_01_lastDelay = __delaytilde_01_lastDelay;
    this->delaytilde_01_ramp = __delaytilde_01_ramp;
    this->delaytilde_01_crossfadeDelay = __delaytilde_01_crossfadeDelay;
}

void selector_02_perform(
    const Sample * onoff,
    const SampleValue * in1,
    const SampleValue * in2,
    const SampleValue * in3,
    const SampleValue * in4,
    SampleValue * out,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        if (onoff[(Index)i] >= 1 && onoff[(Index)i] < 2)
            out[(Index)i] = in1[(Index)i];
        else if (onoff[(Index)i] >= 2 && onoff[(Index)i] < 3)
            out[(Index)i] = in2[(Index)i];
        else if (onoff[(Index)i] >= 3 && onoff[(Index)i] < 4)
            out[(Index)i] = in3[(Index)i];
        else if (onoff[(Index)i] >= 4 && onoff[(Index)i] < 5)
            out[(Index)i] = in4[(Index)i];
        else
            out[(Index)i] = 0;
    }
}

void selector_01_perform(
    const Sample * onoff,
    const SampleValue * in1,
    const SampleValue * in2,
    SampleValue * out,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        if (onoff[(Index)i] >= 1 && onoff[(Index)i] < 2)
            out[(Index)i] = in1[(Index)i];
        else if (onoff[(Index)i] >= 2 && onoff[(Index)i] < 3)
            out[(Index)i] = in2[(Index)i];
        else
            out[(Index)i] = 0;
    }
}

void delaytilde_03_perform(
    const Sample * delay,
    const SampleValue * input,
    SampleValue * output,
    Index n
) {
    auto __delaytilde_03_crossfadeDelay = this->delaytilde_03_crossfadeDelay;
    auto __delaytilde_03_rampInSamples = this->delaytilde_03_rampInSamples;
    auto __delaytilde_03_ramp = this->delaytilde_03_ramp;
    auto __delaytilde_03_lastDelay = this->delaytilde_03_lastDelay;

    for (Index i = 0; i < n; i++) {
        if (__delaytilde_03_lastDelay == -1) {
            __delaytilde_03_lastDelay = delay[(Index)i];
        }

        if (__delaytilde_03_ramp > 0) {
            number factor = __delaytilde_03_ramp / __delaytilde_03_rampInSamples;
            output[(Index)i] = this->delaytilde_03_del_read(__delaytilde_03_crossfadeDelay, 0) * factor + this->delaytilde_03_del_read(__delaytilde_03_lastDelay, 0) * (1. - factor);
            __delaytilde_03_ramp--;
        } else {
            number effectiveDelay = delay[(Index)i];

            if (effectiveDelay != __delaytilde_03_lastDelay) {
                __delaytilde_03_ramp = __delaytilde_03_rampInSamples;
                __delaytilde_03_crossfadeDelay = __delaytilde_03_lastDelay;
                __delaytilde_03_lastDelay = effectiveDelay;
                output[(Index)i] = this->delaytilde_03_del_read(__delaytilde_03_crossfadeDelay, 0);
                __delaytilde_03_ramp--;
            } else {
                output[(Index)i] = this->delaytilde_03_del_read(effectiveDelay, 0);
            }
        }

        this->delaytilde_03_del_write(input[(Index)i]);
        this->delaytilde_03_del_step();
    }

    this->delaytilde_03_lastDelay = __delaytilde_03_lastDelay;
    this->delaytilde_03_ramp = __delaytilde_03_ramp;
    this->delaytilde_03_crossfadeDelay = __delaytilde_03_crossfadeDelay;
}

void selector_08_perform(
    const Sample * onoff,
    const SampleValue * in1,
    const SampleValue * in2,
    const SampleValue * in3,
    const SampleValue * in4,
    SampleValue * out,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        if (onoff[(Index)i] >= 1 && onoff[(Index)i] < 2)
            out[(Index)i] = in1[(Index)i];
        else if (onoff[(Index)i] >= 2 && onoff[(Index)i] < 3)
            out[(Index)i] = in2[(Index)i];
        else if (onoff[(Index)i] >= 3 && onoff[(Index)i] < 4)
            out[(Index)i] = in3[(Index)i];
        else if (onoff[(Index)i] >= 4 && onoff[(Index)i] < 5)
            out[(Index)i] = in4[(Index)i];
        else
            out[(Index)i] = 0;
    }
}

void selector_05_perform(
    const Sample * onoff,
    const SampleValue * in1,
    const SampleValue * in2,
    SampleValue * out,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        if (onoff[(Index)i] >= 1 && onoff[(Index)i] < 2)
            out[(Index)i] = in1[(Index)i];
        else if (onoff[(Index)i] >= 2 && onoff[(Index)i] < 3)
            out[(Index)i] = in2[(Index)i];
        else
            out[(Index)i] = 0;
    }
}

void cartopol_tilde_01_perform(
    const Sample * x,
    const Sample * y,
    SampleValue * out1,
    SampleValue * out2,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = this->safesqrt(x[(Index)i] * x[(Index)i] + y[(Index)i] * y[(Index)i]);
        out2[(Index)i] = rnbo_atan2(y[(Index)i], x[(Index)i]);
    }
}

void dspexpr_01_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
    }
}

void dspexpr_06_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2[(Index)i];//#map:_###_obj_###_:1
    }
}

void poltocar_tilde_01_perform(
    const Sample * radius,
    const Sample * angle,
    SampleValue * out1,
    SampleValue * out2,
    Index n
) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = radius[(Index)i] * rnbo_cos(angle[(Index)i]);
        out2[(Index)i] = radius[(Index)i] * rnbo_sin(angle[(Index)i]);
    }
}

void stackprotect_perform(Index n) {
    RNBO_UNUSED(n);
    auto __stackprotect_count = this->stackprotect_count;
    __stackprotect_count = 0;
    this->stackprotect_count = __stackprotect_count;
}

void paramtilde_01_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(6))) && v >= 6) {
        v = 6;
    }

    if ((bool)(!(bool)(isNaN(-70))) && v <= -70) {
        v = -70;
    }

    this->paramtilde_01_value = v;
}

void paramtilde_02_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_02_value = v;
}

void ip_01_init() {
    this->ip_01_lastValue = this->ip_01_value;
}

void ip_01_fillSigBuf() {
    if ((bool)(this->ip_01_sigbuf)) {
        SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

        if (k >= (SampleIndex)(this->vs))
            k = (SampleIndex)(this->vs) - 1;

        for (SampleIndex i = (SampleIndex)(this->ip_01_lastIndex); i < k; i++) {
            if (this->ip_01_resetCount > 0) {
                this->ip_01_sigbuf[(Index)i] = 1;
                this->ip_01_resetCount--;
            } else {
                this->ip_01_sigbuf[(Index)i] = this->ip_01_lastValue;
            }
        }

        this->ip_01_lastIndex = k;
    }
}

void ip_01_dspsetup(bool force) {
    if ((bool)(this->ip_01_setupDone) && (bool)(!(bool)(force)))
        return;

    this->ip_01_lastIndex = 0;
    this->ip_01_setupDone = true;
}

void ip_02_init() {
    this->ip_02_lastValue = this->ip_02_value;
}

void ip_02_fillSigBuf() {
    if ((bool)(this->ip_02_sigbuf)) {
        SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

        if (k >= (SampleIndex)(this->vs))
            k = (SampleIndex)(this->vs) - 1;

        for (SampleIndex i = (SampleIndex)(this->ip_02_lastIndex); i < k; i++) {
            if (this->ip_02_resetCount > 0) {
                this->ip_02_sigbuf[(Index)i] = 1;
                this->ip_02_resetCount--;
            } else {
                this->ip_02_sigbuf[(Index)i] = this->ip_02_lastValue;
            }
        }

        this->ip_02_lastIndex = k;
    }
}

void ip_02_dspsetup(bool force) {
    if ((bool)(this->ip_02_setupDone) && (bool)(!(bool)(force)))
        return;

    this->ip_02_lastIndex = 0;
    this->ip_02_setupDone = true;
}

void delaytilde_01_del_step() {
    this->delaytilde_01_del_reader++;

    if (this->delaytilde_01_del_reader >= (int)(this->delaytilde_01_del_buffer->getSize()))
        this->delaytilde_01_del_reader = 0;
}

number delaytilde_01_del_read(number size, Int interp) {
    if (interp == 0) {
        number r = (int)(this->delaytilde_01_del_buffer->getSize()) + this->delaytilde_01_del_reader - ((size > this->delaytilde_01_del__maxdelay ? this->delaytilde_01_del__maxdelay : (size < (this->delaytilde_01_del_reader != this->delaytilde_01_del_writer) ? this->delaytilde_01_del_reader != this->delaytilde_01_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        long index2 = (long)(index1 + 1);

        return this->linearinterp(frac, this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ), this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ));
    } else if (interp == 1) {
        number r = (int)(this->delaytilde_01_del_buffer->getSize()) + this->delaytilde_01_del_reader - ((size > this->delaytilde_01_del__maxdelay ? this->delaytilde_01_del__maxdelay : (size < (1 + this->delaytilde_01_del_reader != this->delaytilde_01_del_writer) ? 1 + this->delaytilde_01_del_reader != this->delaytilde_01_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);
        Index index3 = (Index)(index2 + 1);
        Index index4 = (Index)(index3 + 1);

        return this->cubicinterp(frac, this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ), this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ), this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index3 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ), this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index4 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ));
    } else if (interp == 2) {
        number r = (int)(this->delaytilde_01_del_buffer->getSize()) + this->delaytilde_01_del_reader - ((size > this->delaytilde_01_del__maxdelay ? this->delaytilde_01_del__maxdelay : (size < (1 + this->delaytilde_01_del_reader != this->delaytilde_01_del_writer) ? 1 + this->delaytilde_01_del_reader != this->delaytilde_01_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);
        Index index3 = (Index)(index2 + 1);
        Index index4 = (Index)(index3 + 1);

        return this->splineinterp(frac, this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ), this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ), this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index3 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ), this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index4 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ));
    } else if (interp == 3) {
        number r = (int)(this->delaytilde_01_del_buffer->getSize()) + this->delaytilde_01_del_reader - ((size > this->delaytilde_01_del__maxdelay ? this->delaytilde_01_del__maxdelay : (size < (this->delaytilde_01_del_reader != this->delaytilde_01_del_writer) ? this->delaytilde_01_del_reader != this->delaytilde_01_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);

        return this->cosineinterp(frac, this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ), this->delaytilde_01_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_01_del_wrap))
        ));
    }

    number r = (int)(this->delaytilde_01_del_buffer->getSize()) + this->delaytilde_01_del_reader - ((size > this->delaytilde_01_del__maxdelay ? this->delaytilde_01_del__maxdelay : (size < (this->delaytilde_01_del_reader != this->delaytilde_01_del_writer) ? this->delaytilde_01_del_reader != this->delaytilde_01_del_writer : size)));
    long index1 = (long)(rnbo_floor(r));

    return this->delaytilde_01_del_buffer->getSample(
        0,
        (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_01_del_wrap))
    );
}

void delaytilde_01_del_write(number v) {
    this->delaytilde_01_del_writer = this->delaytilde_01_del_reader;
    this->delaytilde_01_del_buffer[(Index)this->delaytilde_01_del_writer] = v;
}

number delaytilde_01_del_next(number v, int size) {
    number effectiveSize = (size == -1 ? this->delaytilde_01_del__maxdelay : size);
    number val = this->delaytilde_01_del_read(effectiveSize, 0);
    this->delaytilde_01_del_write(v);
    this->delaytilde_01_del_step();
    return val;
}

array<Index, 2> delaytilde_01_del_calcSizeInSamples() {
    number sizeInSamples = 0;
    Index allocatedSizeInSamples = 0;

    {
        sizeInSamples = this->delaytilde_01_del_evaluateSizeExpr(this->samplerate(), this->vectorsize());
        this->delaytilde_01_del_sizemode = 0;
    }

    sizeInSamples = rnbo_floor(sizeInSamples);
    sizeInSamples = this->maximum(sizeInSamples, 2);
    allocatedSizeInSamples = (Index)(sizeInSamples);
    allocatedSizeInSamples = nextpoweroftwo(allocatedSizeInSamples);
    return {sizeInSamples, allocatedSizeInSamples};
}

void delaytilde_01_del_init() {
    auto result = this->delaytilde_01_del_calcSizeInSamples();
    this->delaytilde_01_del__maxdelay = result[0];
    Index requestedSizeInSamples = (Index)(result[1]);
    this->delaytilde_01_del_buffer->requestSize(requestedSizeInSamples, 1);
    this->delaytilde_01_del_wrap = requestedSizeInSamples - 1;
}

void delaytilde_01_del_clear() {
    this->delaytilde_01_del_buffer->setZero();
}

void delaytilde_01_del_reset() {
    auto result = this->delaytilde_01_del_calcSizeInSamples();
    this->delaytilde_01_del__maxdelay = result[0];
    Index allocatedSizeInSamples = (Index)(result[1]);
    this->delaytilde_01_del_buffer->setSize(allocatedSizeInSamples);
    updateDataRef(this, this->delaytilde_01_del_buffer);
    this->delaytilde_01_del_wrap = this->delaytilde_01_del_buffer->getSize() - 1;
    this->delaytilde_01_del_clear();

    if (this->delaytilde_01_del_reader >= this->delaytilde_01_del__maxdelay || this->delaytilde_01_del_writer >= this->delaytilde_01_del__maxdelay) {
        this->delaytilde_01_del_reader = 0;
        this->delaytilde_01_del_writer = 0;
    }
}

void delaytilde_01_del_dspsetup() {
    this->delaytilde_01_del_reset();
}

number delaytilde_01_del_evaluateSizeExpr(number samplerate, number vectorsize) {
    RNBO_UNUSED(vectorsize);
    return samplerate;
}

number delaytilde_01_del_size() {
    return this->delaytilde_01_del__maxdelay;
}

void delaytilde_01_dspsetup(bool force) {
    if ((bool)(this->delaytilde_01_setupDone) && (bool)(!(bool)(force)))
        return;

    this->delaytilde_01_rampInSamples = (long)(this->mstosamps(50));
    this->delaytilde_01_lastDelay = -1;
    this->delaytilde_01_setupDone = true;
    this->delaytilde_01_del_dspsetup();
}

number mtof_tilde_01_innerMtoF_next(number midivalue, number tuning) {
    if (midivalue == this->mtof_tilde_01_innerMtoF_lastInValue && tuning == this->mtof_tilde_01_innerMtoF_lastTuning)
        return this->mtof_tilde_01_innerMtoF_lastOutValue;

    this->mtof_tilde_01_innerMtoF_lastInValue = midivalue;
    this->mtof_tilde_01_innerMtoF_lastTuning = tuning;
    number result = 0;

    {
        result = rnbo_exp(.057762265 * (midivalue - 69.0));
    }

    this->mtof_tilde_01_innerMtoF_lastOutValue = tuning * result;
    return this->mtof_tilde_01_innerMtoF_lastOutValue;
}

void mtof_tilde_01_innerMtoF_reset() {
    this->mtof_tilde_01_innerMtoF_lastInValue = 0;
    this->mtof_tilde_01_innerMtoF_lastOutValue = 0;
    this->mtof_tilde_01_innerMtoF_lastTuning = 0;
}

void mtof_tilde_01_innerScala_mid(int v) {
    this->mtof_tilde_01_innerScala_kbmMid = v;
    this->mtof_tilde_01_innerScala_updateRefFreq();
}

void mtof_tilde_01_innerScala_ref(int v) {
    this->mtof_tilde_01_innerScala_kbmRefNum = v;
    this->mtof_tilde_01_innerScala_updateRefFreq();
}

void mtof_tilde_01_innerScala_base(number v) {
    this->mtof_tilde_01_innerScala_kbmRefFreq = v;
    this->mtof_tilde_01_innerScala_updateRefFreq();
}

void mtof_tilde_01_innerScala_init() {
    list sclValid = {
        12,
        100,
        0,
        200,
        0,
        300,
        0,
        400,
        0,
        500,
        0,
        600,
        0,
        700,
        0,
        800,
        0,
        900,
        0,
        1000,
        0,
        1100,
        0,
        2,
        1
    };

    this->mtof_tilde_01_innerScala_updateScale(sclValid);
}

void mtof_tilde_01_innerScala_update(list scale, list map) {
    if (scale->length > 0) {
        this->mtof_tilde_01_innerScala_updateScale(scale);
    }

    if (map->length > 0) {
        this->mtof_tilde_01_innerScala_updateMap(map);
    }
}

number mtof_tilde_01_innerScala_mtof(number note) {
    if ((bool)(this->mtof_tilde_01_innerScala_lastValid) && this->mtof_tilde_01_innerScala_lastNote == note) {
        return this->mtof_tilde_01_innerScala_lastFreq;
    }

    array<int, 2> degoct = this->mtof_tilde_01_innerScala_applyKBM(note);
    number out = 0;

    if (degoct[1] > 0) {
        out = this->mtof_tilde_01_innerScala_applySCL(degoct[0], fract(note), this->mtof_tilde_01_innerScala_refFreq);
    }

    this->mtof_tilde_01_innerScala_updateLast(note, out);
    return out;
}

number mtof_tilde_01_innerScala_ftom(number hz) {
    if (hz <= 0.0) {
        return 0.0;
    }

    if ((bool)(this->mtof_tilde_01_innerScala_lastValid) && this->mtof_tilde_01_innerScala_lastFreq == hz) {
        return this->mtof_tilde_01_innerScala_lastNote;
    }

    array<number, 2> df = this->mtof_tilde_01_innerScala_hztodeg(hz);
    int degree = (int)(df[0]);
    number frac = df[1];
    number out = 0;

    if (this->mtof_tilde_01_innerScala_kbmSize == 0) {
        out = this->mtof_tilde_01_innerScala_kbmMid + degree;
    } else {
        array<int, 2> octdeg = this->mtof_tilde_01_innerScala_octdegree(degree, this->mtof_tilde_01_innerScala_kbmOctaveDegree);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);
        Index entry = 0;

        for (Index i = 0; i < this->mtof_tilde_01_innerScala_kbmMapSize; i++) {
            if (index == this->mtof_tilde_01_innerScala_kbmValid[(Index)(i + this->mtof_tilde_01_innerScala_KBM_MAP_OFFSET)]) {
                entry = i;
                break;
            }
        }

        out = oct * this->mtof_tilde_01_innerScala_kbmSize + entry + this->mtof_tilde_01_innerScala_kbmMid;
    }

    out = out + frac;
    this->mtof_tilde_01_innerScala_updateLast(out, hz);
    return this->mtof_tilde_01_innerScala_lastNote;
}

int mtof_tilde_01_innerScala_updateScale(list scl) {
    if (scl->length > 1 && scl[0] * 2 + 1 == scl->length) {
        this->mtof_tilde_01_innerScala_lastValid = false;
        this->mtof_tilde_01_innerScala_sclExpMul = {};
        number last = 1;

        for (Index i = 1; i < scl->length; i += 2) {
            const number c = (const number)(scl[(Index)(i + 0)]);
            const number d = (const number)(scl[(Index)(i + 1)]);

            if (d <= 0) {
                last = c / (number)1200;
            } else {
                last = rnbo_log2(c / d);
            }

            this->mtof_tilde_01_innerScala_sclExpMul->push(last);
        }

        this->mtof_tilde_01_innerScala_sclOctaveMul = last;
        this->mtof_tilde_01_innerScala_sclEntryCount = (int)(this->mtof_tilde_01_innerScala_sclExpMul->length);
        this->mtof_tilde_01_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

int mtof_tilde_01_innerScala_updateMap(list kbm) {
    if (kbm->length == 1 && kbm[0] == 0.0) {
        kbm = {0.0, 0.0, 0.0, 60.0, 69.0, 440.0};
    }

    if (kbm->length >= 6 && kbm[0] >= 0.0) {
        this->mtof_tilde_01_innerScala_lastValid = false;
        Index size = (Index)(kbm[0]);
        int octave = 12;

        if (kbm->length > 6) {
            octave = (int)(kbm[6]);
        }

        if (size > 0 && kbm->length < this->mtof_tilde_01_innerScala_KBM_MAP_OFFSET) {
            return 0;
        }

        this->mtof_tilde_01_innerScala_kbmSize = (int)(size);
        this->mtof_tilde_01_innerScala_kbmMin = (int)(kbm[1]);
        this->mtof_tilde_01_innerScala_kbmMax = (int)(kbm[2]);
        this->mtof_tilde_01_innerScala_kbmMid = (int)(kbm[3]);
        this->mtof_tilde_01_innerScala_kbmRefNum = (int)(kbm[4]);
        this->mtof_tilde_01_innerScala_kbmRefFreq = kbm[5];
        this->mtof_tilde_01_innerScala_kbmOctaveDegree = octave;
        this->mtof_tilde_01_innerScala_kbmValid = kbm;
        this->mtof_tilde_01_innerScala_kbmMapSize = (kbm->length - this->mtof_tilde_01_innerScala_KBM_MAP_OFFSET > kbm->length ? kbm->length : (kbm->length - this->mtof_tilde_01_innerScala_KBM_MAP_OFFSET < 0 ? 0 : kbm->length - this->mtof_tilde_01_innerScala_KBM_MAP_OFFSET));
        this->mtof_tilde_01_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

void mtof_tilde_01_innerScala_updateLast(number note, number freq) {
    this->mtof_tilde_01_innerScala_lastValid = true;
    this->mtof_tilde_01_innerScala_lastNote = note;
    this->mtof_tilde_01_innerScala_lastFreq = freq;
}

array<number, 2> mtof_tilde_01_innerScala_hztodeg(number hz) {
    number hza = rnbo_abs(hz);

    number octave = rnbo_floor(
        rnbo_log2(hza / this->mtof_tilde_01_innerScala_refFreq) / this->mtof_tilde_01_innerScala_sclOctaveMul
    );

    int i = 0;
    number frac = 0;
    number n = 0;

    for (; i < this->mtof_tilde_01_innerScala_sclEntryCount; i++) {
        number c = this->mtof_tilde_01_innerScala_applySCLOctIndex(octave, i + 0, 0.0, this->mtof_tilde_01_innerScala_refFreq);
        n = this->mtof_tilde_01_innerScala_applySCLOctIndex(octave, i + 1, 0.0, this->mtof_tilde_01_innerScala_refFreq);

        if (c <= hza && hza < n) {
            if (c != hza) {
                frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
            }

            break;
        }
    }

    if (i == this->mtof_tilde_01_innerScala_sclEntryCount && n != hza) {
        number c = n;
        n = this->mtof_tilde_01_innerScala_applySCLOctIndex(octave + 1, 0, 0.0, this->mtof_tilde_01_innerScala_refFreq);
        frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
    }

    number deg = i + octave * this->mtof_tilde_01_innerScala_sclEntryCount;

    {
        deg = rnbo_fround((deg + frac) * 1 / (number)1) * 1;
        frac = 0.0;
    }

    return {deg, frac};
}

array<int, 2> mtof_tilde_01_innerScala_octdegree(int degree, int count) {
    int octave = 0;
    int index = 0;

    if (degree < 0) {
        octave = -(1 + (-1 - degree) / count);
        index = -degree % count;

        if (index > 0) {
            index = count - index;
        }
    } else {
        octave = degree / count;
        index = degree % count;
    }

    return {octave, index};
}

array<int, 2> mtof_tilde_01_innerScala_applyKBM(number note) {
    if ((this->mtof_tilde_01_innerScala_kbmMin == this->mtof_tilde_01_innerScala_kbmMax && this->mtof_tilde_01_innerScala_kbmMax == 0) || (note >= this->mtof_tilde_01_innerScala_kbmMin && note <= this->mtof_tilde_01_innerScala_kbmMax)) {
        int degree = (int)(rnbo_floor(note - this->mtof_tilde_01_innerScala_kbmMid));

        if (this->mtof_tilde_01_innerScala_kbmSize == 0) {
            return {degree, 1};
        }

        array<int, 2> octdeg = this->mtof_tilde_01_innerScala_octdegree(degree, this->mtof_tilde_01_innerScala_kbmSize);
        int octave = (int)(octdeg[0]);
        Index index = (Index)(octdeg[1]);

        if (this->mtof_tilde_01_innerScala_kbmMapSize > index) {
            degree = (int)(this->mtof_tilde_01_innerScala_kbmValid[(Index)(this->mtof_tilde_01_innerScala_KBM_MAP_OFFSET + index)]);

            if (degree >= 0) {
                return {degree + octave * this->mtof_tilde_01_innerScala_kbmOctaveDegree, 1};
            }
        }
    }

    return {-1, 0};
}

number mtof_tilde_01_innerScala_applySCL(int degree, number frac, number refFreq) {
    array<int, 2> octdeg = this->mtof_tilde_01_innerScala_octdegree(degree, this->mtof_tilde_01_innerScala_sclEntryCount);
    return this->mtof_tilde_01_innerScala_applySCLOctIndex(octdeg[0], octdeg[1], frac, refFreq);
}

number mtof_tilde_01_innerScala_applySCLOctIndex(number octave, int index, number frac, number refFreq) {
    number p = 0;

    if (index > 0) {
        p = this->mtof_tilde_01_innerScala_sclExpMul[(Index)(index - 1)];
    }

    if (frac > 0) {
        p = this->linearinterp(frac, p, this->mtof_tilde_01_innerScala_sclExpMul[(Index)index]);
    } else if (frac < 0) {
        p = this->linearinterp(-frac, this->mtof_tilde_01_innerScala_sclExpMul[(Index)index], p);
    }

    return refFreq * rnbo_pow(2, p + octave * this->mtof_tilde_01_innerScala_sclOctaveMul);
}

void mtof_tilde_01_innerScala_updateRefFreq() {
    this->mtof_tilde_01_innerScala_lastValid = false;
    int refOffset = (int)(this->mtof_tilde_01_innerScala_kbmRefNum - this->mtof_tilde_01_innerScala_kbmMid);

    if (refOffset == 0) {
        this->mtof_tilde_01_innerScala_refFreq = this->mtof_tilde_01_innerScala_kbmRefFreq;
    } else {
        int base = (int)(this->mtof_tilde_01_innerScala_kbmSize);

        if (base < 1) {
            base = this->mtof_tilde_01_innerScala_sclEntryCount;
        }

        array<int, 2> octdeg = this->mtof_tilde_01_innerScala_octdegree(refOffset, base);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);

        if (base > 0) {
            oct = oct + rnbo_floor(index / base);
            index = index % base;
        }

        if (index >= 0 && index < this->mtof_tilde_01_innerScala_kbmSize) {
            if (index < this->mtof_tilde_01_innerScala_kbmMapSize) {
                index = (int)(this->mtof_tilde_01_innerScala_kbmValid[(Index)((Index)(index) + this->mtof_tilde_01_innerScala_KBM_MAP_OFFSET)]);
            } else {
                index = -1;
            }
        }

        if (index < 0 || index > this->mtof_tilde_01_innerScala_sclExpMul->length)
            {} else {
            number p = 0;

            if (index > 0) {
                p = this->mtof_tilde_01_innerScala_sclExpMul[(Index)(index - 1)];
            }

            this->mtof_tilde_01_innerScala_refFreq = this->mtof_tilde_01_innerScala_kbmRefFreq / rnbo_pow(2, p + oct * this->mtof_tilde_01_innerScala_sclOctaveMul);
        }
    }
}

void mtof_tilde_01_innerScala_reset() {
    this->mtof_tilde_01_innerScala_internal = true;
    this->mtof_tilde_01_innerScala_lastValid = false;
    this->mtof_tilde_01_innerScala_lastNote = 0;
    this->mtof_tilde_01_innerScala_lastFreq = 0;
    this->mtof_tilde_01_innerScala_sclEntryCount = 0;
    this->mtof_tilde_01_innerScala_sclOctaveMul = 1;
    this->mtof_tilde_01_innerScala_sclExpMul = {};
    this->mtof_tilde_01_innerScala_kbmValid = {0, 0, 0, 60, 69, 440};
    this->mtof_tilde_01_innerScala_kbmMid = 60;
    this->mtof_tilde_01_innerScala_kbmRefNum = 69;
    this->mtof_tilde_01_innerScala_kbmRefFreq = 440;
    this->mtof_tilde_01_innerScala_kbmSize = 0;
    this->mtof_tilde_01_innerScala_kbmMin = 0;
    this->mtof_tilde_01_innerScala_kbmMax = 0;
    this->mtof_tilde_01_innerScala_kbmOctaveDegree = 12;
    this->mtof_tilde_01_innerScala_kbmMapSize = 0;
    this->mtof_tilde_01_innerScala_refFreq = 261.63;
}

void mtof_tilde_01_init() {
    this->mtof_tilde_01_innerScala_update(this->mtof_tilde_01_scale, this->mtof_tilde_01_map);
}

void delaytilde_02_del_step() {
    this->delaytilde_02_del_reader++;

    if (this->delaytilde_02_del_reader >= (int)(this->delaytilde_02_del_buffer->getSize()))
        this->delaytilde_02_del_reader = 0;
}

number delaytilde_02_del_read(number size, Int interp) {
    if (interp == 0) {
        number r = (int)(this->delaytilde_02_del_buffer->getSize()) + this->delaytilde_02_del_reader - ((size > this->delaytilde_02_del__maxdelay ? this->delaytilde_02_del__maxdelay : (size < (this->delaytilde_02_del_reader != this->delaytilde_02_del_writer) ? this->delaytilde_02_del_reader != this->delaytilde_02_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        long index2 = (long)(index1 + 1);

        return this->linearinterp(frac, this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ), this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ));
    } else if (interp == 1) {
        number r = (int)(this->delaytilde_02_del_buffer->getSize()) + this->delaytilde_02_del_reader - ((size > this->delaytilde_02_del__maxdelay ? this->delaytilde_02_del__maxdelay : (size < (1 + this->delaytilde_02_del_reader != this->delaytilde_02_del_writer) ? 1 + this->delaytilde_02_del_reader != this->delaytilde_02_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);
        Index index3 = (Index)(index2 + 1);
        Index index4 = (Index)(index3 + 1);

        return this->cubicinterp(frac, this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ), this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ), this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index3 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ), this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index4 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ));
    } else if (interp == 2) {
        number r = (int)(this->delaytilde_02_del_buffer->getSize()) + this->delaytilde_02_del_reader - ((size > this->delaytilde_02_del__maxdelay ? this->delaytilde_02_del__maxdelay : (size < (1 + this->delaytilde_02_del_reader != this->delaytilde_02_del_writer) ? 1 + this->delaytilde_02_del_reader != this->delaytilde_02_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);
        Index index3 = (Index)(index2 + 1);
        Index index4 = (Index)(index3 + 1);

        return this->splineinterp(frac, this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ), this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ), this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index3 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ), this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index4 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ));
    } else if (interp == 3) {
        number r = (int)(this->delaytilde_02_del_buffer->getSize()) + this->delaytilde_02_del_reader - ((size > this->delaytilde_02_del__maxdelay ? this->delaytilde_02_del__maxdelay : (size < (this->delaytilde_02_del_reader != this->delaytilde_02_del_writer) ? this->delaytilde_02_del_reader != this->delaytilde_02_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);

        return this->cosineinterp(frac, this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ), this->delaytilde_02_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_02_del_wrap))
        ));
    }

    number r = (int)(this->delaytilde_02_del_buffer->getSize()) + this->delaytilde_02_del_reader - ((size > this->delaytilde_02_del__maxdelay ? this->delaytilde_02_del__maxdelay : (size < (this->delaytilde_02_del_reader != this->delaytilde_02_del_writer) ? this->delaytilde_02_del_reader != this->delaytilde_02_del_writer : size)));
    long index1 = (long)(rnbo_floor(r));

    return this->delaytilde_02_del_buffer->getSample(
        0,
        (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_02_del_wrap))
    );
}

void delaytilde_02_del_write(number v) {
    this->delaytilde_02_del_writer = this->delaytilde_02_del_reader;
    this->delaytilde_02_del_buffer[(Index)this->delaytilde_02_del_writer] = v;
}

number delaytilde_02_del_next(number v, int size) {
    number effectiveSize = (size == -1 ? this->delaytilde_02_del__maxdelay : size);
    number val = this->delaytilde_02_del_read(effectiveSize, 0);
    this->delaytilde_02_del_write(v);
    this->delaytilde_02_del_step();
    return val;
}

array<Index, 2> delaytilde_02_del_calcSizeInSamples() {
    number sizeInSamples = 0;
    Index allocatedSizeInSamples = 0;

    {
        sizeInSamples = this->delaytilde_02_del_evaluateSizeExpr(this->samplerate(), this->vectorsize());
        this->delaytilde_02_del_sizemode = 0;
    }

    sizeInSamples = rnbo_floor(sizeInSamples);
    sizeInSamples = this->maximum(sizeInSamples, 2);
    allocatedSizeInSamples = (Index)(sizeInSamples);
    allocatedSizeInSamples = nextpoweroftwo(allocatedSizeInSamples);
    return {sizeInSamples, allocatedSizeInSamples};
}

void delaytilde_02_del_init() {
    auto result = this->delaytilde_02_del_calcSizeInSamples();
    this->delaytilde_02_del__maxdelay = result[0];
    Index requestedSizeInSamples = (Index)(result[1]);
    this->delaytilde_02_del_buffer->requestSize(requestedSizeInSamples, 1);
    this->delaytilde_02_del_wrap = requestedSizeInSamples - 1;
}

void delaytilde_02_del_clear() {
    this->delaytilde_02_del_buffer->setZero();
}

void delaytilde_02_del_reset() {
    auto result = this->delaytilde_02_del_calcSizeInSamples();
    this->delaytilde_02_del__maxdelay = result[0];
    Index allocatedSizeInSamples = (Index)(result[1]);
    this->delaytilde_02_del_buffer->setSize(allocatedSizeInSamples);
    updateDataRef(this, this->delaytilde_02_del_buffer);
    this->delaytilde_02_del_wrap = this->delaytilde_02_del_buffer->getSize() - 1;
    this->delaytilde_02_del_clear();

    if (this->delaytilde_02_del_reader >= this->delaytilde_02_del__maxdelay || this->delaytilde_02_del_writer >= this->delaytilde_02_del__maxdelay) {
        this->delaytilde_02_del_reader = 0;
        this->delaytilde_02_del_writer = 0;
    }
}

void delaytilde_02_del_dspsetup() {
    this->delaytilde_02_del_reset();
}

number delaytilde_02_del_evaluateSizeExpr(number samplerate, number vectorsize) {
    RNBO_UNUSED(vectorsize);
    return samplerate;
}

number delaytilde_02_del_size() {
    return this->delaytilde_02_del__maxdelay;
}

void delaytilde_02_dspsetup(bool force) {
    if ((bool)(this->delaytilde_02_setupDone) && (bool)(!(bool)(force)))
        return;

    this->delaytilde_02_rampInSamples = (long)(this->mstosamps(50));
    this->delaytilde_02_lastDelay = -1;
    this->delaytilde_02_setupDone = true;
    this->delaytilde_02_del_dspsetup();
}

number ftom_tilde_01_innerFtoM_next(number frequency, number tuning) {
    if (frequency <= 0.0) {
        return -999;
    }

    if (frequency == this->ftom_tilde_01_innerFtoM_lastInValue && tuning == this->ftom_tilde_01_innerFtoM_lastTuning) {
        return this->ftom_tilde_01_innerFtoM_lastOutValue;
    }

    this->ftom_tilde_01_innerFtoM_lastInValue = frequency;
    this->ftom_tilde_01_innerFtoM_lastTuning = tuning;
    this->ftom_tilde_01_innerFtoM_lastOutValue = (frequency == 0 || tuning == 0 ? 0 : 69. + 17.31234050465299 * rnbo_log(frequency / tuning));
    return this->ftom_tilde_01_innerFtoM_lastOutValue;
}

void ftom_tilde_01_innerFtoM_reset() {
    this->ftom_tilde_01_innerFtoM_lastInValue = 0;
    this->ftom_tilde_01_innerFtoM_lastOutValue = 0;
    this->ftom_tilde_01_innerFtoM_lastTuning = 0;
}

void ftom_tilde_01_innerScala_mid(int v) {
    this->ftom_tilde_01_innerScala_kbmMid = v;
    this->ftom_tilde_01_innerScala_updateRefFreq();
}

void ftom_tilde_01_innerScala_ref(int v) {
    this->ftom_tilde_01_innerScala_kbmRefNum = v;
    this->ftom_tilde_01_innerScala_updateRefFreq();
}

void ftom_tilde_01_innerScala_base(number v) {
    this->ftom_tilde_01_innerScala_kbmRefFreq = v;
    this->ftom_tilde_01_innerScala_updateRefFreq();
}

void ftom_tilde_01_innerScala_init() {
    list sclValid = {
        12,
        100,
        0,
        200,
        0,
        300,
        0,
        400,
        0,
        500,
        0,
        600,
        0,
        700,
        0,
        800,
        0,
        900,
        0,
        1000,
        0,
        1100,
        0,
        2,
        1
    };

    this->ftom_tilde_01_innerScala_updateScale(sclValid);
}

void ftom_tilde_01_innerScala_update(list scale, list map) {
    if (scale->length > 0) {
        this->ftom_tilde_01_innerScala_updateScale(scale);
    }

    if (map->length > 0) {
        this->ftom_tilde_01_innerScala_updateMap(map);
    }
}

number ftom_tilde_01_innerScala_mtof(number note) {
    if ((bool)(this->ftom_tilde_01_innerScala_lastValid) && this->ftom_tilde_01_innerScala_lastNote == note) {
        return this->ftom_tilde_01_innerScala_lastFreq;
    }

    array<int, 2> degoct = this->ftom_tilde_01_innerScala_applyKBM(note);
    number out = 0;

    if (degoct[1] > 0) {
        out = this->ftom_tilde_01_innerScala_applySCL(degoct[0], fract(note), this->ftom_tilde_01_innerScala_refFreq);
    }

    this->ftom_tilde_01_innerScala_updateLast(note, out);
    return out;
}

number ftom_tilde_01_innerScala_ftom(number hz) {
    if (hz <= 0.0) {
        return 0.0;
    }

    if ((bool)(this->ftom_tilde_01_innerScala_lastValid) && this->ftom_tilde_01_innerScala_lastFreq == hz) {
        return this->ftom_tilde_01_innerScala_lastNote;
    }

    array<number, 2> df = this->ftom_tilde_01_innerScala_hztodeg(hz);
    int degree = (int)(df[0]);
    number frac = df[1];
    number out = 0;

    if (this->ftom_tilde_01_innerScala_kbmSize == 0) {
        out = this->ftom_tilde_01_innerScala_kbmMid + degree;
    } else {
        array<int, 2> octdeg = this->ftom_tilde_01_innerScala_octdegree(degree, this->ftom_tilde_01_innerScala_kbmOctaveDegree);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);
        Index entry = 0;

        for (Index i = 0; i < this->ftom_tilde_01_innerScala_kbmMapSize; i++) {
            if (index == this->ftom_tilde_01_innerScala_kbmValid[(Index)(i + this->ftom_tilde_01_innerScala_KBM_MAP_OFFSET)]) {
                entry = i;
                break;
            }
        }

        out = oct * this->ftom_tilde_01_innerScala_kbmSize + entry + this->ftom_tilde_01_innerScala_kbmMid;
    }

    out = out + frac;
    this->ftom_tilde_01_innerScala_updateLast(out, hz);
    return this->ftom_tilde_01_innerScala_lastNote;
}

int ftom_tilde_01_innerScala_updateScale(list scl) {
    if (scl->length > 1 && scl[0] * 2 + 1 == scl->length) {
        this->ftom_tilde_01_innerScala_lastValid = false;
        this->ftom_tilde_01_innerScala_sclExpMul = {};
        number last = 1;

        for (Index i = 1; i < scl->length; i += 2) {
            const number c = (const number)(scl[(Index)(i + 0)]);
            const number d = (const number)(scl[(Index)(i + 1)]);

            if (d <= 0) {
                last = c / (number)1200;
            } else {
                last = rnbo_log2(c / d);
            }

            this->ftom_tilde_01_innerScala_sclExpMul->push(last);
        }

        this->ftom_tilde_01_innerScala_sclOctaveMul = last;
        this->ftom_tilde_01_innerScala_sclEntryCount = (int)(this->ftom_tilde_01_innerScala_sclExpMul->length);
        this->ftom_tilde_01_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

int ftom_tilde_01_innerScala_updateMap(list kbm) {
    if (kbm->length == 1 && kbm[0] == 0.0) {
        kbm = {0.0, 0.0, 0.0, 60.0, 69.0, 440.0};
    }

    if (kbm->length >= 6 && kbm[0] >= 0.0) {
        this->ftom_tilde_01_innerScala_lastValid = false;
        Index size = (Index)(kbm[0]);
        int octave = 12;

        if (kbm->length > 6) {
            octave = (int)(kbm[6]);
        }

        if (size > 0 && kbm->length < this->ftom_tilde_01_innerScala_KBM_MAP_OFFSET) {
            return 0;
        }

        this->ftom_tilde_01_innerScala_kbmSize = (int)(size);
        this->ftom_tilde_01_innerScala_kbmMin = (int)(kbm[1]);
        this->ftom_tilde_01_innerScala_kbmMax = (int)(kbm[2]);
        this->ftom_tilde_01_innerScala_kbmMid = (int)(kbm[3]);
        this->ftom_tilde_01_innerScala_kbmRefNum = (int)(kbm[4]);
        this->ftom_tilde_01_innerScala_kbmRefFreq = kbm[5];
        this->ftom_tilde_01_innerScala_kbmOctaveDegree = octave;
        this->ftom_tilde_01_innerScala_kbmValid = kbm;
        this->ftom_tilde_01_innerScala_kbmMapSize = (kbm->length - this->ftom_tilde_01_innerScala_KBM_MAP_OFFSET > kbm->length ? kbm->length : (kbm->length - this->ftom_tilde_01_innerScala_KBM_MAP_OFFSET < 0 ? 0 : kbm->length - this->ftom_tilde_01_innerScala_KBM_MAP_OFFSET));
        this->ftom_tilde_01_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

void ftom_tilde_01_innerScala_updateLast(number note, number freq) {
    this->ftom_tilde_01_innerScala_lastValid = true;
    this->ftom_tilde_01_innerScala_lastNote = note;
    this->ftom_tilde_01_innerScala_lastFreq = freq;
}

array<number, 2> ftom_tilde_01_innerScala_hztodeg(number hz) {
    number hza = rnbo_abs(hz);

    number octave = rnbo_floor(
        rnbo_log2(hza / this->ftom_tilde_01_innerScala_refFreq) / this->ftom_tilde_01_innerScala_sclOctaveMul
    );

    int i = 0;
    number frac = 0;
    number n = 0;

    for (; i < this->ftom_tilde_01_innerScala_sclEntryCount; i++) {
        number c = this->ftom_tilde_01_innerScala_applySCLOctIndex(octave, i + 0, 0.0, this->ftom_tilde_01_innerScala_refFreq);
        n = this->ftom_tilde_01_innerScala_applySCLOctIndex(octave, i + 1, 0.0, this->ftom_tilde_01_innerScala_refFreq);

        if (c <= hza && hza < n) {
            if (c != hza) {
                frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
            }

            break;
        }
    }

    if (i == this->ftom_tilde_01_innerScala_sclEntryCount && n != hza) {
        number c = n;
        n = this->ftom_tilde_01_innerScala_applySCLOctIndex(octave + 1, 0, 0.0, this->ftom_tilde_01_innerScala_refFreq);
        frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
    }

    number deg = i + octave * this->ftom_tilde_01_innerScala_sclEntryCount;
    return {deg, frac};
}

array<int, 2> ftom_tilde_01_innerScala_octdegree(int degree, int count) {
    int octave = 0;
    int index = 0;

    if (degree < 0) {
        octave = -(1 + (-1 - degree) / count);
        index = -degree % count;

        if (index > 0) {
            index = count - index;
        }
    } else {
        octave = degree / count;
        index = degree % count;
    }

    return {octave, index};
}

array<int, 2> ftom_tilde_01_innerScala_applyKBM(number note) {
    if ((this->ftom_tilde_01_innerScala_kbmMin == this->ftom_tilde_01_innerScala_kbmMax && this->ftom_tilde_01_innerScala_kbmMax == 0) || (note >= this->ftom_tilde_01_innerScala_kbmMin && note <= this->ftom_tilde_01_innerScala_kbmMax)) {
        int degree = (int)(rnbo_floor(note - this->ftom_tilde_01_innerScala_kbmMid));

        if (this->ftom_tilde_01_innerScala_kbmSize == 0) {
            return {degree, 1};
        }

        array<int, 2> octdeg = this->ftom_tilde_01_innerScala_octdegree(degree, this->ftom_tilde_01_innerScala_kbmSize);
        int octave = (int)(octdeg[0]);
        Index index = (Index)(octdeg[1]);

        if (this->ftom_tilde_01_innerScala_kbmMapSize > index) {
            degree = (int)(this->ftom_tilde_01_innerScala_kbmValid[(Index)(this->ftom_tilde_01_innerScala_KBM_MAP_OFFSET + index)]);

            if (degree >= 0) {
                return {degree + octave * this->ftom_tilde_01_innerScala_kbmOctaveDegree, 1};
            }
        }
    }

    return {-1, 0};
}

number ftom_tilde_01_innerScala_applySCL(int degree, number frac, number refFreq) {
    array<int, 2> octdeg = this->ftom_tilde_01_innerScala_octdegree(degree, this->ftom_tilde_01_innerScala_sclEntryCount);
    return this->ftom_tilde_01_innerScala_applySCLOctIndex(octdeg[0], octdeg[1], frac, refFreq);
}

number ftom_tilde_01_innerScala_applySCLOctIndex(number octave, int index, number frac, number refFreq) {
    number p = 0;

    if (index > 0) {
        p = this->ftom_tilde_01_innerScala_sclExpMul[(Index)(index - 1)];
    }

    if (frac > 0) {
        p = this->linearinterp(frac, p, this->ftom_tilde_01_innerScala_sclExpMul[(Index)index]);
    } else if (frac < 0) {
        p = this->linearinterp(-frac, this->ftom_tilde_01_innerScala_sclExpMul[(Index)index], p);
    }

    return refFreq * rnbo_pow(2, p + octave * this->ftom_tilde_01_innerScala_sclOctaveMul);
}

void ftom_tilde_01_innerScala_updateRefFreq() {
    this->ftom_tilde_01_innerScala_lastValid = false;
    int refOffset = (int)(this->ftom_tilde_01_innerScala_kbmRefNum - this->ftom_tilde_01_innerScala_kbmMid);

    if (refOffset == 0) {
        this->ftom_tilde_01_innerScala_refFreq = this->ftom_tilde_01_innerScala_kbmRefFreq;
    } else {
        int base = (int)(this->ftom_tilde_01_innerScala_kbmSize);

        if (base < 1) {
            base = this->ftom_tilde_01_innerScala_sclEntryCount;
        }

        array<int, 2> octdeg = this->ftom_tilde_01_innerScala_octdegree(refOffset, base);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);

        if (base > 0) {
            oct = oct + rnbo_floor(index / base);
            index = index % base;
        }

        if (index >= 0 && index < this->ftom_tilde_01_innerScala_kbmSize) {
            if (index < this->ftom_tilde_01_innerScala_kbmMapSize) {
                index = (int)(this->ftom_tilde_01_innerScala_kbmValid[(Index)((Index)(index) + this->ftom_tilde_01_innerScala_KBM_MAP_OFFSET)]);
            } else {
                index = -1;
            }
        }

        if (index < 0 || index > this->ftom_tilde_01_innerScala_sclExpMul->length)
            {} else {
            number p = 0;

            if (index > 0) {
                p = this->ftom_tilde_01_innerScala_sclExpMul[(Index)(index - 1)];
            }

            this->ftom_tilde_01_innerScala_refFreq = this->ftom_tilde_01_innerScala_kbmRefFreq / rnbo_pow(2, p + oct * this->ftom_tilde_01_innerScala_sclOctaveMul);
        }
    }
}

void ftom_tilde_01_innerScala_reset() {
    this->ftom_tilde_01_innerScala_internal = true;
    this->ftom_tilde_01_innerScala_lastValid = false;
    this->ftom_tilde_01_innerScala_lastNote = 0;
    this->ftom_tilde_01_innerScala_lastFreq = 0;
    this->ftom_tilde_01_innerScala_sclEntryCount = 0;
    this->ftom_tilde_01_innerScala_sclOctaveMul = 1;
    this->ftom_tilde_01_innerScala_sclExpMul = {};
    this->ftom_tilde_01_innerScala_kbmValid = {0, 0, 0, 60, 69, 440};
    this->ftom_tilde_01_innerScala_kbmMid = 60;
    this->ftom_tilde_01_innerScala_kbmRefNum = 69;
    this->ftom_tilde_01_innerScala_kbmRefFreq = 440;
    this->ftom_tilde_01_innerScala_kbmSize = 0;
    this->ftom_tilde_01_innerScala_kbmMin = 0;
    this->ftom_tilde_01_innerScala_kbmMax = 0;
    this->ftom_tilde_01_innerScala_kbmOctaveDegree = 12;
    this->ftom_tilde_01_innerScala_kbmMapSize = 0;
    this->ftom_tilde_01_innerScala_refFreq = 261.63;
}

void ftom_tilde_01_init() {
    this->ftom_tilde_01_innerScala_update(this->ftom_tilde_01_scale, this->ftom_tilde_01_map);
}

number rampsmooth_tilde_01_d_next(number x) {
    number temp = (number)(x - this->rampsmooth_tilde_01_d_prev);
    this->rampsmooth_tilde_01_d_prev = x;
    return temp;
}

void rampsmooth_tilde_01_d_dspsetup() {
    this->rampsmooth_tilde_01_d_reset();
}

void rampsmooth_tilde_01_d_reset() {
    this->rampsmooth_tilde_01_d_prev = 0;
}

void rampsmooth_tilde_01_dspsetup(bool force) {
    if ((bool)(this->rampsmooth_tilde_01_setupDone) && (bool)(!(bool)(force)))
        return;

    this->rampsmooth_tilde_01_setupDone = true;
    this->rampsmooth_tilde_01_d_dspsetup();
}

void param_01_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_01_value;
}

void param_01_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_01_value_set(preset["value"]);
}

void delaytilde_03_del_step() {
    this->delaytilde_03_del_reader++;

    if (this->delaytilde_03_del_reader >= (int)(this->delaytilde_03_del_buffer->getSize()))
        this->delaytilde_03_del_reader = 0;
}

number delaytilde_03_del_read(number size, Int interp) {
    if (interp == 0) {
        number r = (int)(this->delaytilde_03_del_buffer->getSize()) + this->delaytilde_03_del_reader - ((size > this->delaytilde_03_del__maxdelay ? this->delaytilde_03_del__maxdelay : (size < (this->delaytilde_03_del_reader != this->delaytilde_03_del_writer) ? this->delaytilde_03_del_reader != this->delaytilde_03_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        long index2 = (long)(index1 + 1);

        return this->linearinterp(frac, this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ), this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ));
    } else if (interp == 1) {
        number r = (int)(this->delaytilde_03_del_buffer->getSize()) + this->delaytilde_03_del_reader - ((size > this->delaytilde_03_del__maxdelay ? this->delaytilde_03_del__maxdelay : (size < (1 + this->delaytilde_03_del_reader != this->delaytilde_03_del_writer) ? 1 + this->delaytilde_03_del_reader != this->delaytilde_03_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);
        Index index3 = (Index)(index2 + 1);
        Index index4 = (Index)(index3 + 1);

        return this->cubicinterp(frac, this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ), this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ), this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index3 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ), this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index4 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ));
    } else if (interp == 2) {
        number r = (int)(this->delaytilde_03_del_buffer->getSize()) + this->delaytilde_03_del_reader - ((size > this->delaytilde_03_del__maxdelay ? this->delaytilde_03_del__maxdelay : (size < (1 + this->delaytilde_03_del_reader != this->delaytilde_03_del_writer) ? 1 + this->delaytilde_03_del_reader != this->delaytilde_03_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);
        Index index3 = (Index)(index2 + 1);
        Index index4 = (Index)(index3 + 1);

        return this->splineinterp(frac, this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ), this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ), this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index3 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ), this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index4 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ));
    } else if (interp == 3) {
        number r = (int)(this->delaytilde_03_del_buffer->getSize()) + this->delaytilde_03_del_reader - ((size > this->delaytilde_03_del__maxdelay ? this->delaytilde_03_del__maxdelay : (size < (this->delaytilde_03_del_reader != this->delaytilde_03_del_writer) ? this->delaytilde_03_del_reader != this->delaytilde_03_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);

        return this->cosineinterp(frac, this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ), this->delaytilde_03_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_03_del_wrap))
        ));
    }

    number r = (int)(this->delaytilde_03_del_buffer->getSize()) + this->delaytilde_03_del_reader - ((size > this->delaytilde_03_del__maxdelay ? this->delaytilde_03_del__maxdelay : (size < (this->delaytilde_03_del_reader != this->delaytilde_03_del_writer) ? this->delaytilde_03_del_reader != this->delaytilde_03_del_writer : size)));
    long index1 = (long)(rnbo_floor(r));

    return this->delaytilde_03_del_buffer->getSample(
        0,
        (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_03_del_wrap))
    );
}

void delaytilde_03_del_write(number v) {
    this->delaytilde_03_del_writer = this->delaytilde_03_del_reader;
    this->delaytilde_03_del_buffer[(Index)this->delaytilde_03_del_writer] = v;
}

number delaytilde_03_del_next(number v, int size) {
    number effectiveSize = (size == -1 ? this->delaytilde_03_del__maxdelay : size);
    number val = this->delaytilde_03_del_read(effectiveSize, 0);
    this->delaytilde_03_del_write(v);
    this->delaytilde_03_del_step();
    return val;
}

array<Index, 2> delaytilde_03_del_calcSizeInSamples() {
    number sizeInSamples = 0;
    Index allocatedSizeInSamples = 0;

    {
        sizeInSamples = this->delaytilde_03_del_evaluateSizeExpr(this->samplerate(), this->vectorsize());
        this->delaytilde_03_del_sizemode = 0;
    }

    sizeInSamples = rnbo_floor(sizeInSamples);
    sizeInSamples = this->maximum(sizeInSamples, 2);
    allocatedSizeInSamples = (Index)(sizeInSamples);
    allocatedSizeInSamples = nextpoweroftwo(allocatedSizeInSamples);
    return {sizeInSamples, allocatedSizeInSamples};
}

void delaytilde_03_del_init() {
    auto result = this->delaytilde_03_del_calcSizeInSamples();
    this->delaytilde_03_del__maxdelay = result[0];
    Index requestedSizeInSamples = (Index)(result[1]);
    this->delaytilde_03_del_buffer->requestSize(requestedSizeInSamples, 1);
    this->delaytilde_03_del_wrap = requestedSizeInSamples - 1;
}

void delaytilde_03_del_clear() {
    this->delaytilde_03_del_buffer->setZero();
}

void delaytilde_03_del_reset() {
    auto result = this->delaytilde_03_del_calcSizeInSamples();
    this->delaytilde_03_del__maxdelay = result[0];
    Index allocatedSizeInSamples = (Index)(result[1]);
    this->delaytilde_03_del_buffer->setSize(allocatedSizeInSamples);
    updateDataRef(this, this->delaytilde_03_del_buffer);
    this->delaytilde_03_del_wrap = this->delaytilde_03_del_buffer->getSize() - 1;
    this->delaytilde_03_del_clear();

    if (this->delaytilde_03_del_reader >= this->delaytilde_03_del__maxdelay || this->delaytilde_03_del_writer >= this->delaytilde_03_del__maxdelay) {
        this->delaytilde_03_del_reader = 0;
        this->delaytilde_03_del_writer = 0;
    }
}

void delaytilde_03_del_dspsetup() {
    this->delaytilde_03_del_reset();
}

number delaytilde_03_del_evaluateSizeExpr(number samplerate, number vectorsize) {
    RNBO_UNUSED(vectorsize);
    return samplerate;
}

number delaytilde_03_del_size() {
    return this->delaytilde_03_del__maxdelay;
}

void delaytilde_03_dspsetup(bool force) {
    if ((bool)(this->delaytilde_03_setupDone) && (bool)(!(bool)(force)))
        return;

    this->delaytilde_03_rampInSamples = (long)(this->mstosamps(50));
    this->delaytilde_03_lastDelay = -1;
    this->delaytilde_03_setupDone = true;
    this->delaytilde_03_del_dspsetup();
}

void paramtilde_01_dspsetup(bool force) {
    if ((bool)(this->paramtilde_01_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_01_lastIndex = 0;
    this->paramtilde_01_setupDone = true;
}

void paramtilde_02_dspsetup(bool force) {
    if ((bool)(this->paramtilde_02_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_02_lastIndex = 0;
    this->paramtilde_02_setupDone = true;
}

number gen_01_history_2_getvalue() {
    return this->gen_01_history_2_value;
}

void gen_01_history_2_setvalue(number val) {
    this->gen_01_history_2_value = val;
}

void gen_01_history_2_reset() {
    this->gen_01_history_2_value = 0;
}

void gen_01_history_2_init() {
    this->gen_01_history_2_value = 0;
}

number gen_01_history_1_getvalue() {
    return this->gen_01_history_1_value;
}

void gen_01_history_1_setvalue(number val) {
    this->gen_01_history_1_value = val;
}

void gen_01_history_1_reset() {
    this->gen_01_history_1_value = 0;
}

void gen_01_history_1_init() {
    this->gen_01_history_1_value = 0;
}

number gen_01_change_0_next(number x) {
    number temp = x - this->gen_01_change_0_prev;
    this->gen_01_change_0_prev = x;
    return (temp > 0. ? 1. : (temp < 0. ? -1. : 0));
}

void gen_01_change_0_init() {
    this->gen_01_change_0_prev = 0;
}

void gen_01_change_0_reset() {
    this->gen_01_change_0_prev = 0;
}

template <typename T> void fftstream_tilde_01_fft_next(T& buffer, int fftsize) {
    if (this->fftstream_tilde_01_fft_lastsize != fftsize) {
        for (Index i = 0; i < 32; i++) {
            if ((BinOpInt)((UBinOpInt)1 << (UBinOpInt)i) == fftsize) {
                this->fftstream_tilde_01_fft_levels = i;
            }
        }

        for (Index i = 0; i < fftsize; i++) {
            this->fftstream_tilde_01_fft_costab->push(rnbo_cos(6.28318530717958647692 * i / fftsize));
            this->fftstream_tilde_01_fft_sintab->push(rnbo_sin(6.28318530717958647692 * i / fftsize));
        }

        this->fftstream_tilde_01_fft_lastsize = fftsize;
    }

    if (this->fftstream_tilde_01_fft_levels != -1) {
        for (Index i = 0; i < fftsize; i++) {
            Index x = (Index)(i);
            Index j = 0;

            for (Index k = 0; k < this->fftstream_tilde_01_fft_levels; k++) {
                j = (BinOpInt)((UBinOpInt)((UBinOpInt)j << (UBinOpInt)1) | (UBinOpInt)((UBinOpInt)x & (UBinOpInt)1));
                x = (BinOpInt)((UBinOpInt)x >> (UBinOpInt)1);
            }

            if (j > i) {
                number temp = buffer[(Index)(2 * i)];
                buffer[(Index)(2 * i)] = buffer[(Index)(2 * j)];
                buffer[(Index)(2 * j)] = temp;
                temp = buffer[(Index)(2 * i + 1)];
                buffer[(Index)(2 * i + 1)] = buffer[(Index)(2 * j + 1)];
                buffer[(Index)(2 * j + 1)] = temp;
            }
        }

        for (Index size = 2; size <= fftsize; size *= 2) {
            Index halfsize = (Index)(size / (number)2);
            Index tablestep = (Index)(fftsize / size);

            for (Index i = 0; i < fftsize; i += size) {
                Index k = 0;

                for (Index j = (Index)(i); j < i + halfsize; j++) {
                    Index l = (Index)(j + halfsize);
                    number real_l = buffer[(Index)(2 * l)];
                    number imag_l = buffer[(Index)(2 * l + 1)];
                    number tpre = real_l * this->fftstream_tilde_01_fft_costab[(Index)k] + imag_l * this->fftstream_tilde_01_fft_sintab[(Index)k];
                    number tpim = -real_l * this->fftstream_tilde_01_fft_sintab[(Index)k] + imag_l * this->fftstream_tilde_01_fft_costab[(Index)k];
                    number real_j = buffer[(Index)(2 * j)];
                    number imag_j = buffer[(Index)(2 * j + 1)];
                    buffer[(Index)(2 * l)] = real_j - tpre;
                    buffer[(Index)(2 * l + 1)] = imag_j - tpim;
                    buffer[(Index)(2 * j)] = real_j + tpre;
                    buffer[(Index)(2 * j + 1)] = imag_j + tpim;
                    k += tablestep;
                }
            }
        }
    }
}

void fftstream_tilde_01_fft_reset() {
    this->fftstream_tilde_01_fft_lastsize = 0;
    this->fftstream_tilde_01_fft_costab = {};
    this->fftstream_tilde_01_fft_sintab = {};
    this->fftstream_tilde_01_fft_levels = -1;
}

void fftstream_tilde_01_dspsetup(bool force) {
    if ((bool)(this->fftstream_tilde_01_setupDone) && (bool)(!(bool)(force)))
        return;

    for (int i = 0; i < 4096 * 2; i++) {
        this->fftstream_tilde_01_inWorkspace[(Index)i] = 0;
        this->fftstream_tilde_01_outWorkspace[(Index)i] = 0;
    }

    int safeframesize = (int)(4096);

    {
        safeframesize = nextpoweroftwo(4096);
    }

    int framepos = (int)(0 % safeframesize);

    if (framepos < 4096) {
        this->fftstream_tilde_01_datapos = framepos;
    } else {
        this->fftstream_tilde_01_datapos = 0;
    }

    this->fftstream_tilde_01_setupDone = true;
}

void delaytilde_04_del_step() {
    this->delaytilde_04_del_reader++;

    if (this->delaytilde_04_del_reader >= (int)(this->delaytilde_04_del_buffer->getSize()))
        this->delaytilde_04_del_reader = 0;
}

number delaytilde_04_del_read(number size, Int interp) {
    if (interp == 0) {
        number r = (int)(this->delaytilde_04_del_buffer->getSize()) + this->delaytilde_04_del_reader - ((size > this->delaytilde_04_del__maxdelay ? this->delaytilde_04_del__maxdelay : (size < (this->delaytilde_04_del_reader != this->delaytilde_04_del_writer) ? this->delaytilde_04_del_reader != this->delaytilde_04_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        long index2 = (long)(index1 + 1);

        return this->linearinterp(frac, this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ), this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ));
    } else if (interp == 1) {
        number r = (int)(this->delaytilde_04_del_buffer->getSize()) + this->delaytilde_04_del_reader - ((size > this->delaytilde_04_del__maxdelay ? this->delaytilde_04_del__maxdelay : (size < (1 + this->delaytilde_04_del_reader != this->delaytilde_04_del_writer) ? 1 + this->delaytilde_04_del_reader != this->delaytilde_04_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);
        Index index3 = (Index)(index2 + 1);
        Index index4 = (Index)(index3 + 1);

        return this->cubicinterp(frac, this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ), this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ), this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index3 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ), this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index4 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ));
    } else if (interp == 2) {
        number r = (int)(this->delaytilde_04_del_buffer->getSize()) + this->delaytilde_04_del_reader - ((size > this->delaytilde_04_del__maxdelay ? this->delaytilde_04_del__maxdelay : (size < (1 + this->delaytilde_04_del_reader != this->delaytilde_04_del_writer) ? 1 + this->delaytilde_04_del_reader != this->delaytilde_04_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);
        Index index3 = (Index)(index2 + 1);
        Index index4 = (Index)(index3 + 1);

        return this->splineinterp(frac, this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ), this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ), this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index3 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ), this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index4 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ));
    } else if (interp == 3) {
        number r = (int)(this->delaytilde_04_del_buffer->getSize()) + this->delaytilde_04_del_reader - ((size > this->delaytilde_04_del__maxdelay ? this->delaytilde_04_del__maxdelay : (size < (this->delaytilde_04_del_reader != this->delaytilde_04_del_writer) ? this->delaytilde_04_del_reader != this->delaytilde_04_del_writer : size)));
        long index1 = (long)(rnbo_floor(r));
        number frac = r - index1;
        Index index2 = (Index)(index1 + 1);

        return this->cosineinterp(frac, this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ), this->delaytilde_04_del_buffer->getSample(
            0,
            (Index)((BinOpInt)((UBinOpInt)index2 & (UBinOpInt)this->delaytilde_04_del_wrap))
        ));
    }

    number r = (int)(this->delaytilde_04_del_buffer->getSize()) + this->delaytilde_04_del_reader - ((size > this->delaytilde_04_del__maxdelay ? this->delaytilde_04_del__maxdelay : (size < (this->delaytilde_04_del_reader != this->delaytilde_04_del_writer) ? this->delaytilde_04_del_reader != this->delaytilde_04_del_writer : size)));
    long index1 = (long)(rnbo_floor(r));

    return this->delaytilde_04_del_buffer->getSample(
        0,
        (Index)((BinOpInt)((UBinOpInt)index1 & (UBinOpInt)this->delaytilde_04_del_wrap))
    );
}

void delaytilde_04_del_write(number v) {
    this->delaytilde_04_del_writer = this->delaytilde_04_del_reader;
    this->delaytilde_04_del_buffer[(Index)this->delaytilde_04_del_writer] = v;
}

number delaytilde_04_del_next(number v, int size) {
    number effectiveSize = (size == -1 ? this->delaytilde_04_del__maxdelay : size);
    number val = this->delaytilde_04_del_read(effectiveSize, 0);
    this->delaytilde_04_del_write(v);
    this->delaytilde_04_del_step();
    return val;
}

array<Index, 2> delaytilde_04_del_calcSizeInSamples() {
    number sizeInSamples = 0;
    Index allocatedSizeInSamples = 0;

    {
        sizeInSamples = this->delaytilde_04_del_evaluateSizeExpr(this->samplerate(), this->vectorsize());
        this->delaytilde_04_del_sizemode = 0;
    }

    sizeInSamples = rnbo_floor(sizeInSamples);
    sizeInSamples = this->maximum(sizeInSamples, 2);
    allocatedSizeInSamples = (Index)(sizeInSamples);
    allocatedSizeInSamples = nextpoweroftwo(allocatedSizeInSamples);
    return {sizeInSamples, allocatedSizeInSamples};
}

void delaytilde_04_del_init() {
    auto result = this->delaytilde_04_del_calcSizeInSamples();
    this->delaytilde_04_del__maxdelay = result[0];
    Index requestedSizeInSamples = (Index)(result[1]);
    this->delaytilde_04_del_buffer->requestSize(requestedSizeInSamples, 1);
    this->delaytilde_04_del_wrap = requestedSizeInSamples - 1;
}

void delaytilde_04_del_clear() {
    this->delaytilde_04_del_buffer->setZero();
}

void delaytilde_04_del_reset() {
    auto result = this->delaytilde_04_del_calcSizeInSamples();
    this->delaytilde_04_del__maxdelay = result[0];
    Index allocatedSizeInSamples = (Index)(result[1]);
    this->delaytilde_04_del_buffer->setSize(allocatedSizeInSamples);
    updateDataRef(this, this->delaytilde_04_del_buffer);
    this->delaytilde_04_del_wrap = this->delaytilde_04_del_buffer->getSize() - 1;
    this->delaytilde_04_del_clear();

    if (this->delaytilde_04_del_reader >= this->delaytilde_04_del__maxdelay || this->delaytilde_04_del_writer >= this->delaytilde_04_del__maxdelay) {
        this->delaytilde_04_del_reader = 0;
        this->delaytilde_04_del_writer = 0;
    }
}

void delaytilde_04_del_dspsetup() {
    this->delaytilde_04_del_reset();
}

number delaytilde_04_del_evaluateSizeExpr(number samplerate, number vectorsize) {
    RNBO_UNUSED(vectorsize);
    return samplerate;
}

number delaytilde_04_del_size() {
    return this->delaytilde_04_del__maxdelay;
}

void delaytilde_04_dspsetup(bool force) {
    if ((bool)(this->delaytilde_04_setupDone) && (bool)(!(bool)(force)))
        return;

    this->delaytilde_04_rampInSamples = (long)(this->mstosamps(50));
    this->delaytilde_04_lastDelay = -1;
    this->delaytilde_04_setupDone = true;
    this->delaytilde_04_del_dspsetup();
}

void samplerate_01_onSampleRateChanged(number samplerate) {
    this->samplerate_01_samplerate_set(samplerate);
}

void param_02_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_02_value;
}

void param_02_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_02_value_set(preset["value"]);
}

number ftom_01_innerFtoM_next(number frequency, number tuning) {
    if (frequency <= 0.0) {
        return -999;
    }

    if (frequency == this->ftom_01_innerFtoM_lastInValue && tuning == this->ftom_01_innerFtoM_lastTuning) {
        return this->ftom_01_innerFtoM_lastOutValue;
    }

    this->ftom_01_innerFtoM_lastInValue = frequency;
    this->ftom_01_innerFtoM_lastTuning = tuning;
    this->ftom_01_innerFtoM_lastOutValue = (frequency == 0 || tuning == 0 ? 0 : 69. + 17.31234050465299 * rnbo_log(frequency / tuning));
    return this->ftom_01_innerFtoM_lastOutValue;
}

void ftom_01_innerFtoM_reset() {
    this->ftom_01_innerFtoM_lastInValue = 0;
    this->ftom_01_innerFtoM_lastOutValue = 0;
    this->ftom_01_innerFtoM_lastTuning = 0;
}

void ftom_01_innerScala_mid(int v) {
    this->ftom_01_innerScala_kbmMid = v;
    this->ftom_01_innerScala_updateRefFreq();
}

void ftom_01_innerScala_ref(int v) {
    this->ftom_01_innerScala_kbmRefNum = v;
    this->ftom_01_innerScala_updateRefFreq();
}

void ftom_01_innerScala_base(number v) {
    this->ftom_01_innerScala_kbmRefFreq = v;
    this->ftom_01_innerScala_updateRefFreq();
}

void ftom_01_innerScala_init() {
    list sclValid = {
        12,
        100,
        0,
        200,
        0,
        300,
        0,
        400,
        0,
        500,
        0,
        600,
        0,
        700,
        0,
        800,
        0,
        900,
        0,
        1000,
        0,
        1100,
        0,
        2,
        1
    };

    this->ftom_01_innerScala_updateScale(sclValid);
}

void ftom_01_innerScala_update(list scale, list map) {
    if (scale->length > 0) {
        this->ftom_01_innerScala_updateScale(scale);
    }

    if (map->length > 0) {
        this->ftom_01_innerScala_updateMap(map);
    }
}

number ftom_01_innerScala_mtof(number note) {
    if ((bool)(this->ftom_01_innerScala_lastValid) && this->ftom_01_innerScala_lastNote == note) {
        return this->ftom_01_innerScala_lastFreq;
    }

    array<int, 2> degoct = this->ftom_01_innerScala_applyKBM(note);
    number out = 0;

    if (degoct[1] > 0) {
        out = this->ftom_01_innerScala_applySCL(degoct[0], fract(note), this->ftom_01_innerScala_refFreq);
    }

    this->ftom_01_innerScala_updateLast(note, out);
    return out;
}

number ftom_01_innerScala_ftom(number hz) {
    if (hz <= 0.0) {
        return 0.0;
    }

    if ((bool)(this->ftom_01_innerScala_lastValid) && this->ftom_01_innerScala_lastFreq == hz) {
        return this->ftom_01_innerScala_lastNote;
    }

    array<number, 2> df = this->ftom_01_innerScala_hztodeg(hz);
    int degree = (int)(df[0]);
    number frac = df[1];
    number out = 0;

    if (this->ftom_01_innerScala_kbmSize == 0) {
        out = this->ftom_01_innerScala_kbmMid + degree;
    } else {
        array<int, 2> octdeg = this->ftom_01_innerScala_octdegree(degree, this->ftom_01_innerScala_kbmOctaveDegree);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);
        Index entry = 0;

        for (Index i = 0; i < this->ftom_01_innerScala_kbmMapSize; i++) {
            if (index == this->ftom_01_innerScala_kbmValid[(Index)(i + this->ftom_01_innerScala_KBM_MAP_OFFSET)]) {
                entry = i;
                break;
            }
        }

        out = oct * this->ftom_01_innerScala_kbmSize + entry + this->ftom_01_innerScala_kbmMid;
    }

    out = out + frac;
    this->ftom_01_innerScala_updateLast(out, hz);
    return this->ftom_01_innerScala_lastNote;
}

int ftom_01_innerScala_updateScale(list scl) {
    if (scl->length > 1 && scl[0] * 2 + 1 == scl->length) {
        this->ftom_01_innerScala_lastValid = false;
        this->ftom_01_innerScala_sclExpMul = {};
        number last = 1;

        for (Index i = 1; i < scl->length; i += 2) {
            const number c = (const number)(scl[(Index)(i + 0)]);
            const number d = (const number)(scl[(Index)(i + 1)]);

            if (d <= 0) {
                last = c / (number)1200;
            } else {
                last = rnbo_log2(c / d);
            }

            this->ftom_01_innerScala_sclExpMul->push(last);
        }

        this->ftom_01_innerScala_sclOctaveMul = last;
        this->ftom_01_innerScala_sclEntryCount = (int)(this->ftom_01_innerScala_sclExpMul->length);
        this->ftom_01_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

int ftom_01_innerScala_updateMap(list kbm) {
    if (kbm->length == 1 && kbm[0] == 0.0) {
        kbm = {0.0, 0.0, 0.0, 60.0, 69.0, 440.0};
    }

    if (kbm->length >= 6 && kbm[0] >= 0.0) {
        this->ftom_01_innerScala_lastValid = false;
        Index size = (Index)(kbm[0]);
        int octave = 12;

        if (kbm->length > 6) {
            octave = (int)(kbm[6]);
        }

        if (size > 0 && kbm->length < this->ftom_01_innerScala_KBM_MAP_OFFSET) {
            return 0;
        }

        this->ftom_01_innerScala_kbmSize = (int)(size);
        this->ftom_01_innerScala_kbmMin = (int)(kbm[1]);
        this->ftom_01_innerScala_kbmMax = (int)(kbm[2]);
        this->ftom_01_innerScala_kbmMid = (int)(kbm[3]);
        this->ftom_01_innerScala_kbmRefNum = (int)(kbm[4]);
        this->ftom_01_innerScala_kbmRefFreq = kbm[5];
        this->ftom_01_innerScala_kbmOctaveDegree = octave;
        this->ftom_01_innerScala_kbmValid = kbm;
        this->ftom_01_innerScala_kbmMapSize = (kbm->length - this->ftom_01_innerScala_KBM_MAP_OFFSET > kbm->length ? kbm->length : (kbm->length - this->ftom_01_innerScala_KBM_MAP_OFFSET < 0 ? 0 : kbm->length - this->ftom_01_innerScala_KBM_MAP_OFFSET));
        this->ftom_01_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

void ftom_01_innerScala_updateLast(number note, number freq) {
    this->ftom_01_innerScala_lastValid = true;
    this->ftom_01_innerScala_lastNote = note;
    this->ftom_01_innerScala_lastFreq = freq;
}

array<number, 2> ftom_01_innerScala_hztodeg(number hz) {
    number hza = rnbo_abs(hz);

    number octave = rnbo_floor(
        rnbo_log2(hza / this->ftom_01_innerScala_refFreq) / this->ftom_01_innerScala_sclOctaveMul
    );

    int i = 0;
    number frac = 0;
    number n = 0;

    for (; i < this->ftom_01_innerScala_sclEntryCount; i++) {
        number c = this->ftom_01_innerScala_applySCLOctIndex(octave, i + 0, 0.0, this->ftom_01_innerScala_refFreq);
        n = this->ftom_01_innerScala_applySCLOctIndex(octave, i + 1, 0.0, this->ftom_01_innerScala_refFreq);

        if (c <= hza && hza < n) {
            if (c != hza) {
                frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
            }

            break;
        }
    }

    if (i == this->ftom_01_innerScala_sclEntryCount && n != hza) {
        number c = n;
        n = this->ftom_01_innerScala_applySCLOctIndex(octave + 1, 0, 0.0, this->ftom_01_innerScala_refFreq);
        frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
    }

    number deg = i + octave * this->ftom_01_innerScala_sclEntryCount;
    return {deg, frac};
}

array<int, 2> ftom_01_innerScala_octdegree(int degree, int count) {
    int octave = 0;
    int index = 0;

    if (degree < 0) {
        octave = -(1 + (-1 - degree) / count);
        index = -degree % count;

        if (index > 0) {
            index = count - index;
        }
    } else {
        octave = degree / count;
        index = degree % count;
    }

    return {octave, index};
}

array<int, 2> ftom_01_innerScala_applyKBM(number note) {
    if ((this->ftom_01_innerScala_kbmMin == this->ftom_01_innerScala_kbmMax && this->ftom_01_innerScala_kbmMax == 0) || (note >= this->ftom_01_innerScala_kbmMin && note <= this->ftom_01_innerScala_kbmMax)) {
        int degree = (int)(rnbo_floor(note - this->ftom_01_innerScala_kbmMid));

        if (this->ftom_01_innerScala_kbmSize == 0) {
            return {degree, 1};
        }

        array<int, 2> octdeg = this->ftom_01_innerScala_octdegree(degree, this->ftom_01_innerScala_kbmSize);
        int octave = (int)(octdeg[0]);
        Index index = (Index)(octdeg[1]);

        if (this->ftom_01_innerScala_kbmMapSize > index) {
            degree = (int)(this->ftom_01_innerScala_kbmValid[(Index)(this->ftom_01_innerScala_KBM_MAP_OFFSET + index)]);

            if (degree >= 0) {
                return {degree + octave * this->ftom_01_innerScala_kbmOctaveDegree, 1};
            }
        }
    }

    return {-1, 0};
}

number ftom_01_innerScala_applySCL(int degree, number frac, number refFreq) {
    array<int, 2> octdeg = this->ftom_01_innerScala_octdegree(degree, this->ftom_01_innerScala_sclEntryCount);
    return this->ftom_01_innerScala_applySCLOctIndex(octdeg[0], octdeg[1], frac, refFreq);
}

number ftom_01_innerScala_applySCLOctIndex(number octave, int index, number frac, number refFreq) {
    number p = 0;

    if (index > 0) {
        p = this->ftom_01_innerScala_sclExpMul[(Index)(index - 1)];
    }

    if (frac > 0) {
        p = this->linearinterp(frac, p, this->ftom_01_innerScala_sclExpMul[(Index)index]);
    } else if (frac < 0) {
        p = this->linearinterp(-frac, this->ftom_01_innerScala_sclExpMul[(Index)index], p);
    }

    return refFreq * rnbo_pow(2, p + octave * this->ftom_01_innerScala_sclOctaveMul);
}

void ftom_01_innerScala_updateRefFreq() {
    this->ftom_01_innerScala_lastValid = false;
    int refOffset = (int)(this->ftom_01_innerScala_kbmRefNum - this->ftom_01_innerScala_kbmMid);

    if (refOffset == 0) {
        this->ftom_01_innerScala_refFreq = this->ftom_01_innerScala_kbmRefFreq;
    } else {
        int base = (int)(this->ftom_01_innerScala_kbmSize);

        if (base < 1) {
            base = this->ftom_01_innerScala_sclEntryCount;
        }

        array<int, 2> octdeg = this->ftom_01_innerScala_octdegree(refOffset, base);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);

        if (base > 0) {
            oct = oct + rnbo_floor(index / base);
            index = index % base;
        }

        if (index >= 0 && index < this->ftom_01_innerScala_kbmSize) {
            if (index < this->ftom_01_innerScala_kbmMapSize) {
                index = (int)(this->ftom_01_innerScala_kbmValid[(Index)((Index)(index) + this->ftom_01_innerScala_KBM_MAP_OFFSET)]);
            } else {
                index = -1;
            }
        }

        if (index < 0 || index > this->ftom_01_innerScala_sclExpMul->length)
            {} else {
            number p = 0;

            if (index > 0) {
                p = this->ftom_01_innerScala_sclExpMul[(Index)(index - 1)];
            }

            this->ftom_01_innerScala_refFreq = this->ftom_01_innerScala_kbmRefFreq / rnbo_pow(2, p + oct * this->ftom_01_innerScala_sclOctaveMul);
        }
    }
}

void ftom_01_innerScala_reset() {
    this->ftom_01_innerScala_internal = true;
    this->ftom_01_innerScala_lastValid = false;
    this->ftom_01_innerScala_lastNote = 0;
    this->ftom_01_innerScala_lastFreq = 0;
    this->ftom_01_innerScala_sclEntryCount = 0;
    this->ftom_01_innerScala_sclOctaveMul = 1;
    this->ftom_01_innerScala_sclExpMul = {};
    this->ftom_01_innerScala_kbmValid = {0, 0, 0, 60, 69, 440};
    this->ftom_01_innerScala_kbmMid = 60;
    this->ftom_01_innerScala_kbmRefNum = 69;
    this->ftom_01_innerScala_kbmRefFreq = 440;
    this->ftom_01_innerScala_kbmSize = 0;
    this->ftom_01_innerScala_kbmMin = 0;
    this->ftom_01_innerScala_kbmMax = 0;
    this->ftom_01_innerScala_kbmOctaveDegree = 12;
    this->ftom_01_innerScala_kbmMapSize = 0;
    this->ftom_01_innerScala_refFreq = 261.63;
}

void ftom_01_init() {
    this->ftom_01_innerScala_update(this->ftom_01_scale, this->ftom_01_map);
}

void ip_03_init() {
    this->ip_03_lastValue = this->ip_03_value;
}

void ip_03_fillSigBuf() {
    if ((bool)(this->ip_03_sigbuf)) {
        SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

        if (k >= (SampleIndex)(this->vs))
            k = (SampleIndex)(this->vs) - 1;

        for (SampleIndex i = (SampleIndex)(this->ip_03_lastIndex); i < k; i++) {
            if (this->ip_03_resetCount > 0) {
                this->ip_03_sigbuf[(Index)i] = 1;
                this->ip_03_resetCount--;
            } else {
                this->ip_03_sigbuf[(Index)i] = this->ip_03_lastValue;
            }
        }

        this->ip_03_lastIndex = k;
    }
}

void ip_03_dspsetup(bool force) {
    if ((bool)(this->ip_03_setupDone) && (bool)(!(bool)(force)))
        return;

    this->ip_03_lastIndex = 0;
    this->ip_03_setupDone = true;
}

number mtof_01_innerMtoF_next(number midivalue, number tuning) {
    if (midivalue == this->mtof_01_innerMtoF_lastInValue && tuning == this->mtof_01_innerMtoF_lastTuning)
        return this->mtof_01_innerMtoF_lastOutValue;

    this->mtof_01_innerMtoF_lastInValue = midivalue;
    this->mtof_01_innerMtoF_lastTuning = tuning;
    number result = 0;

    {
        result = rnbo_exp(.057762265 * (midivalue - 69.0));
    }

    this->mtof_01_innerMtoF_lastOutValue = tuning * result;
    return this->mtof_01_innerMtoF_lastOutValue;
}

void mtof_01_innerMtoF_reset() {
    this->mtof_01_innerMtoF_lastInValue = 0;
    this->mtof_01_innerMtoF_lastOutValue = 0;
    this->mtof_01_innerMtoF_lastTuning = 0;
}

void mtof_01_innerScala_mid(int v) {
    this->mtof_01_innerScala_kbmMid = v;
    this->mtof_01_innerScala_updateRefFreq();
}

void mtof_01_innerScala_ref(int v) {
    this->mtof_01_innerScala_kbmRefNum = v;
    this->mtof_01_innerScala_updateRefFreq();
}

void mtof_01_innerScala_base(number v) {
    this->mtof_01_innerScala_kbmRefFreq = v;
    this->mtof_01_innerScala_updateRefFreq();
}

void mtof_01_innerScala_init() {
    list sclValid = {
        12,
        100,
        0,
        200,
        0,
        300,
        0,
        400,
        0,
        500,
        0,
        600,
        0,
        700,
        0,
        800,
        0,
        900,
        0,
        1000,
        0,
        1100,
        0,
        2,
        1
    };

    this->mtof_01_innerScala_updateScale(sclValid);
}

void mtof_01_innerScala_update(list scale, list map) {
    if (scale->length > 0) {
        this->mtof_01_innerScala_updateScale(scale);
    }

    if (map->length > 0) {
        this->mtof_01_innerScala_updateMap(map);
    }
}

number mtof_01_innerScala_mtof(number note) {
    if ((bool)(this->mtof_01_innerScala_lastValid) && this->mtof_01_innerScala_lastNote == note) {
        return this->mtof_01_innerScala_lastFreq;
    }

    array<int, 2> degoct = this->mtof_01_innerScala_applyKBM(note);
    number out = 0;

    if (degoct[1] > 0) {
        out = this->mtof_01_innerScala_applySCL(degoct[0], fract(note), this->mtof_01_innerScala_refFreq);
    }

    this->mtof_01_innerScala_updateLast(note, out);
    return out;
}

number mtof_01_innerScala_ftom(number hz) {
    if (hz <= 0.0) {
        return 0.0;
    }

    if ((bool)(this->mtof_01_innerScala_lastValid) && this->mtof_01_innerScala_lastFreq == hz) {
        return this->mtof_01_innerScala_lastNote;
    }

    array<number, 2> df = this->mtof_01_innerScala_hztodeg(hz);
    int degree = (int)(df[0]);
    number frac = df[1];
    number out = 0;

    if (this->mtof_01_innerScala_kbmSize == 0) {
        out = this->mtof_01_innerScala_kbmMid + degree;
    } else {
        array<int, 2> octdeg = this->mtof_01_innerScala_octdegree(degree, this->mtof_01_innerScala_kbmOctaveDegree);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);
        Index entry = 0;

        for (Index i = 0; i < this->mtof_01_innerScala_kbmMapSize; i++) {
            if (index == this->mtof_01_innerScala_kbmValid[(Index)(i + this->mtof_01_innerScala_KBM_MAP_OFFSET)]) {
                entry = i;
                break;
            }
        }

        out = oct * this->mtof_01_innerScala_kbmSize + entry + this->mtof_01_innerScala_kbmMid;
    }

    out = out + frac;
    this->mtof_01_innerScala_updateLast(out, hz);
    return this->mtof_01_innerScala_lastNote;
}

int mtof_01_innerScala_updateScale(list scl) {
    if (scl->length > 1 && scl[0] * 2 + 1 == scl->length) {
        this->mtof_01_innerScala_lastValid = false;
        this->mtof_01_innerScala_sclExpMul = {};
        number last = 1;

        for (Index i = 1; i < scl->length; i += 2) {
            const number c = (const number)(scl[(Index)(i + 0)]);
            const number d = (const number)(scl[(Index)(i + 1)]);

            if (d <= 0) {
                last = c / (number)1200;
            } else {
                last = rnbo_log2(c / d);
            }

            this->mtof_01_innerScala_sclExpMul->push(last);
        }

        this->mtof_01_innerScala_sclOctaveMul = last;
        this->mtof_01_innerScala_sclEntryCount = (int)(this->mtof_01_innerScala_sclExpMul->length);
        this->mtof_01_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

int mtof_01_innerScala_updateMap(list kbm) {
    if (kbm->length == 1 && kbm[0] == 0.0) {
        kbm = {0.0, 0.0, 0.0, 60.0, 69.0, 440.0};
    }

    if (kbm->length >= 6 && kbm[0] >= 0.0) {
        this->mtof_01_innerScala_lastValid = false;
        Index size = (Index)(kbm[0]);
        int octave = 12;

        if (kbm->length > 6) {
            octave = (int)(kbm[6]);
        }

        if (size > 0 && kbm->length < this->mtof_01_innerScala_KBM_MAP_OFFSET) {
            return 0;
        }

        this->mtof_01_innerScala_kbmSize = (int)(size);
        this->mtof_01_innerScala_kbmMin = (int)(kbm[1]);
        this->mtof_01_innerScala_kbmMax = (int)(kbm[2]);
        this->mtof_01_innerScala_kbmMid = (int)(kbm[3]);
        this->mtof_01_innerScala_kbmRefNum = (int)(kbm[4]);
        this->mtof_01_innerScala_kbmRefFreq = kbm[5];
        this->mtof_01_innerScala_kbmOctaveDegree = octave;
        this->mtof_01_innerScala_kbmValid = kbm;
        this->mtof_01_innerScala_kbmMapSize = (kbm->length - this->mtof_01_innerScala_KBM_MAP_OFFSET > kbm->length ? kbm->length : (kbm->length - this->mtof_01_innerScala_KBM_MAP_OFFSET < 0 ? 0 : kbm->length - this->mtof_01_innerScala_KBM_MAP_OFFSET));
        this->mtof_01_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

void mtof_01_innerScala_updateLast(number note, number freq) {
    this->mtof_01_innerScala_lastValid = true;
    this->mtof_01_innerScala_lastNote = note;
    this->mtof_01_innerScala_lastFreq = freq;
}

array<number, 2> mtof_01_innerScala_hztodeg(number hz) {
    number hza = rnbo_abs(hz);

    number octave = rnbo_floor(
        rnbo_log2(hza / this->mtof_01_innerScala_refFreq) / this->mtof_01_innerScala_sclOctaveMul
    );

    int i = 0;
    number frac = 0;
    number n = 0;

    for (; i < this->mtof_01_innerScala_sclEntryCount; i++) {
        number c = this->mtof_01_innerScala_applySCLOctIndex(octave, i + 0, 0.0, this->mtof_01_innerScala_refFreq);
        n = this->mtof_01_innerScala_applySCLOctIndex(octave, i + 1, 0.0, this->mtof_01_innerScala_refFreq);

        if (c <= hza && hza < n) {
            if (c != hza) {
                frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
            }

            break;
        }
    }

    if (i == this->mtof_01_innerScala_sclEntryCount && n != hza) {
        number c = n;
        n = this->mtof_01_innerScala_applySCLOctIndex(octave + 1, 0, 0.0, this->mtof_01_innerScala_refFreq);
        frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
    }

    number deg = i + octave * this->mtof_01_innerScala_sclEntryCount;

    {
        deg = rnbo_fround((deg + frac) * 1 / (number)1) * 1;
        frac = 0.0;
    }

    return {deg, frac};
}

array<int, 2> mtof_01_innerScala_octdegree(int degree, int count) {
    int octave = 0;
    int index = 0;

    if (degree < 0) {
        octave = -(1 + (-1 - degree) / count);
        index = -degree % count;

        if (index > 0) {
            index = count - index;
        }
    } else {
        octave = degree / count;
        index = degree % count;
    }

    return {octave, index};
}

array<int, 2> mtof_01_innerScala_applyKBM(number note) {
    if ((this->mtof_01_innerScala_kbmMin == this->mtof_01_innerScala_kbmMax && this->mtof_01_innerScala_kbmMax == 0) || (note >= this->mtof_01_innerScala_kbmMin && note <= this->mtof_01_innerScala_kbmMax)) {
        int degree = (int)(rnbo_floor(note - this->mtof_01_innerScala_kbmMid));

        if (this->mtof_01_innerScala_kbmSize == 0) {
            return {degree, 1};
        }

        array<int, 2> octdeg = this->mtof_01_innerScala_octdegree(degree, this->mtof_01_innerScala_kbmSize);
        int octave = (int)(octdeg[0]);
        Index index = (Index)(octdeg[1]);

        if (this->mtof_01_innerScala_kbmMapSize > index) {
            degree = (int)(this->mtof_01_innerScala_kbmValid[(Index)(this->mtof_01_innerScala_KBM_MAP_OFFSET + index)]);

            if (degree >= 0) {
                return {degree + octave * this->mtof_01_innerScala_kbmOctaveDegree, 1};
            }
        }
    }

    return {-1, 0};
}

number mtof_01_innerScala_applySCL(int degree, number frac, number refFreq) {
    array<int, 2> octdeg = this->mtof_01_innerScala_octdegree(degree, this->mtof_01_innerScala_sclEntryCount);
    return this->mtof_01_innerScala_applySCLOctIndex(octdeg[0], octdeg[1], frac, refFreq);
}

number mtof_01_innerScala_applySCLOctIndex(number octave, int index, number frac, number refFreq) {
    number p = 0;

    if (index > 0) {
        p = this->mtof_01_innerScala_sclExpMul[(Index)(index - 1)];
    }

    if (frac > 0) {
        p = this->linearinterp(frac, p, this->mtof_01_innerScala_sclExpMul[(Index)index]);
    } else if (frac < 0) {
        p = this->linearinterp(-frac, this->mtof_01_innerScala_sclExpMul[(Index)index], p);
    }

    return refFreq * rnbo_pow(2, p + octave * this->mtof_01_innerScala_sclOctaveMul);
}

void mtof_01_innerScala_updateRefFreq() {
    this->mtof_01_innerScala_lastValid = false;
    int refOffset = (int)(this->mtof_01_innerScala_kbmRefNum - this->mtof_01_innerScala_kbmMid);

    if (refOffset == 0) {
        this->mtof_01_innerScala_refFreq = this->mtof_01_innerScala_kbmRefFreq;
    } else {
        int base = (int)(this->mtof_01_innerScala_kbmSize);

        if (base < 1) {
            base = this->mtof_01_innerScala_sclEntryCount;
        }

        array<int, 2> octdeg = this->mtof_01_innerScala_octdegree(refOffset, base);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);

        if (base > 0) {
            oct = oct + rnbo_floor(index / base);
            index = index % base;
        }

        if (index >= 0 && index < this->mtof_01_innerScala_kbmSize) {
            if (index < this->mtof_01_innerScala_kbmMapSize) {
                index = (int)(this->mtof_01_innerScala_kbmValid[(Index)((Index)(index) + this->mtof_01_innerScala_KBM_MAP_OFFSET)]);
            } else {
                index = -1;
            }
        }

        if (index < 0 || index > this->mtof_01_innerScala_sclExpMul->length)
            {} else {
            number p = 0;

            if (index > 0) {
                p = this->mtof_01_innerScala_sclExpMul[(Index)(index - 1)];
            }

            this->mtof_01_innerScala_refFreq = this->mtof_01_innerScala_kbmRefFreq / rnbo_pow(2, p + oct * this->mtof_01_innerScala_sclOctaveMul);
        }
    }
}

void mtof_01_innerScala_reset() {
    this->mtof_01_innerScala_internal = true;
    this->mtof_01_innerScala_lastValid = false;
    this->mtof_01_innerScala_lastNote = 0;
    this->mtof_01_innerScala_lastFreq = 0;
    this->mtof_01_innerScala_sclEntryCount = 0;
    this->mtof_01_innerScala_sclOctaveMul = 1;
    this->mtof_01_innerScala_sclExpMul = {};
    this->mtof_01_innerScala_kbmValid = {0, 0, 0, 60, 69, 440};
    this->mtof_01_innerScala_kbmMid = 60;
    this->mtof_01_innerScala_kbmRefNum = 69;
    this->mtof_01_innerScala_kbmRefFreq = 440;
    this->mtof_01_innerScala_kbmSize = 0;
    this->mtof_01_innerScala_kbmMin = 0;
    this->mtof_01_innerScala_kbmMax = 0;
    this->mtof_01_innerScala_kbmOctaveDegree = 12;
    this->mtof_01_innerScala_kbmMapSize = 0;
    this->mtof_01_innerScala_refFreq = 261.63;
}

void mtof_01_init() {
    this->mtof_01_innerScala_update(this->mtof_01_scale, this->mtof_01_map);
}

number ftom_02_innerFtoM_next(number frequency, number tuning) {
    if (frequency <= 0.0) {
        return -999;
    }

    if (frequency == this->ftom_02_innerFtoM_lastInValue && tuning == this->ftom_02_innerFtoM_lastTuning) {
        return this->ftom_02_innerFtoM_lastOutValue;
    }

    this->ftom_02_innerFtoM_lastInValue = frequency;
    this->ftom_02_innerFtoM_lastTuning = tuning;
    this->ftom_02_innerFtoM_lastOutValue = (frequency == 0 || tuning == 0 ? 0 : 69. + 17.31234050465299 * rnbo_log(frequency / tuning));
    return this->ftom_02_innerFtoM_lastOutValue;
}

void ftom_02_innerFtoM_reset() {
    this->ftom_02_innerFtoM_lastInValue = 0;
    this->ftom_02_innerFtoM_lastOutValue = 0;
    this->ftom_02_innerFtoM_lastTuning = 0;
}

void ftom_02_innerScala_mid(int v) {
    this->ftom_02_innerScala_kbmMid = v;
    this->ftom_02_innerScala_updateRefFreq();
}

void ftom_02_innerScala_ref(int v) {
    this->ftom_02_innerScala_kbmRefNum = v;
    this->ftom_02_innerScala_updateRefFreq();
}

void ftom_02_innerScala_base(number v) {
    this->ftom_02_innerScala_kbmRefFreq = v;
    this->ftom_02_innerScala_updateRefFreq();
}

void ftom_02_innerScala_init() {
    list sclValid = {
        12,
        100,
        0,
        200,
        0,
        300,
        0,
        400,
        0,
        500,
        0,
        600,
        0,
        700,
        0,
        800,
        0,
        900,
        0,
        1000,
        0,
        1100,
        0,
        2,
        1
    };

    this->ftom_02_innerScala_updateScale(sclValid);
}

void ftom_02_innerScala_update(list scale, list map) {
    if (scale->length > 0) {
        this->ftom_02_innerScala_updateScale(scale);
    }

    if (map->length > 0) {
        this->ftom_02_innerScala_updateMap(map);
    }
}

number ftom_02_innerScala_mtof(number note) {
    if ((bool)(this->ftom_02_innerScala_lastValid) && this->ftom_02_innerScala_lastNote == note) {
        return this->ftom_02_innerScala_lastFreq;
    }

    array<int, 2> degoct = this->ftom_02_innerScala_applyKBM(note);
    number out = 0;

    if (degoct[1] > 0) {
        out = this->ftom_02_innerScala_applySCL(degoct[0], fract(note), this->ftom_02_innerScala_refFreq);
    }

    this->ftom_02_innerScala_updateLast(note, out);
    return out;
}

number ftom_02_innerScala_ftom(number hz) {
    if (hz <= 0.0) {
        return 0.0;
    }

    if ((bool)(this->ftom_02_innerScala_lastValid) && this->ftom_02_innerScala_lastFreq == hz) {
        return this->ftom_02_innerScala_lastNote;
    }

    array<number, 2> df = this->ftom_02_innerScala_hztodeg(hz);
    int degree = (int)(df[0]);
    number frac = df[1];
    number out = 0;

    if (this->ftom_02_innerScala_kbmSize == 0) {
        out = this->ftom_02_innerScala_kbmMid + degree;
    } else {
        array<int, 2> octdeg = this->ftom_02_innerScala_octdegree(degree, this->ftom_02_innerScala_kbmOctaveDegree);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);
        Index entry = 0;

        for (Index i = 0; i < this->ftom_02_innerScala_kbmMapSize; i++) {
            if (index == this->ftom_02_innerScala_kbmValid[(Index)(i + this->ftom_02_innerScala_KBM_MAP_OFFSET)]) {
                entry = i;
                break;
            }
        }

        out = oct * this->ftom_02_innerScala_kbmSize + entry + this->ftom_02_innerScala_kbmMid;
    }

    out = out + frac;
    this->ftom_02_innerScala_updateLast(out, hz);
    return this->ftom_02_innerScala_lastNote;
}

int ftom_02_innerScala_updateScale(list scl) {
    if (scl->length > 1 && scl[0] * 2 + 1 == scl->length) {
        this->ftom_02_innerScala_lastValid = false;
        this->ftom_02_innerScala_sclExpMul = {};
        number last = 1;

        for (Index i = 1; i < scl->length; i += 2) {
            const number c = (const number)(scl[(Index)(i + 0)]);
            const number d = (const number)(scl[(Index)(i + 1)]);

            if (d <= 0) {
                last = c / (number)1200;
            } else {
                last = rnbo_log2(c / d);
            }

            this->ftom_02_innerScala_sclExpMul->push(last);
        }

        this->ftom_02_innerScala_sclOctaveMul = last;
        this->ftom_02_innerScala_sclEntryCount = (int)(this->ftom_02_innerScala_sclExpMul->length);
        this->ftom_02_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

int ftom_02_innerScala_updateMap(list kbm) {
    if (kbm->length == 1 && kbm[0] == 0.0) {
        kbm = {0.0, 0.0, 0.0, 60.0, 69.0, 440.0};
    }

    if (kbm->length >= 6 && kbm[0] >= 0.0) {
        this->ftom_02_innerScala_lastValid = false;
        Index size = (Index)(kbm[0]);
        int octave = 12;

        if (kbm->length > 6) {
            octave = (int)(kbm[6]);
        }

        if (size > 0 && kbm->length < this->ftom_02_innerScala_KBM_MAP_OFFSET) {
            return 0;
        }

        this->ftom_02_innerScala_kbmSize = (int)(size);
        this->ftom_02_innerScala_kbmMin = (int)(kbm[1]);
        this->ftom_02_innerScala_kbmMax = (int)(kbm[2]);
        this->ftom_02_innerScala_kbmMid = (int)(kbm[3]);
        this->ftom_02_innerScala_kbmRefNum = (int)(kbm[4]);
        this->ftom_02_innerScala_kbmRefFreq = kbm[5];
        this->ftom_02_innerScala_kbmOctaveDegree = octave;
        this->ftom_02_innerScala_kbmValid = kbm;
        this->ftom_02_innerScala_kbmMapSize = (kbm->length - this->ftom_02_innerScala_KBM_MAP_OFFSET > kbm->length ? kbm->length : (kbm->length - this->ftom_02_innerScala_KBM_MAP_OFFSET < 0 ? 0 : kbm->length - this->ftom_02_innerScala_KBM_MAP_OFFSET));
        this->ftom_02_innerScala_updateRefFreq();
        return 1;
    }

    return 0;
}

void ftom_02_innerScala_updateLast(number note, number freq) {
    this->ftom_02_innerScala_lastValid = true;
    this->ftom_02_innerScala_lastNote = note;
    this->ftom_02_innerScala_lastFreq = freq;
}

array<number, 2> ftom_02_innerScala_hztodeg(number hz) {
    number hza = rnbo_abs(hz);

    number octave = rnbo_floor(
        rnbo_log2(hza / this->ftom_02_innerScala_refFreq) / this->ftom_02_innerScala_sclOctaveMul
    );

    int i = 0;
    number frac = 0;
    number n = 0;

    for (; i < this->ftom_02_innerScala_sclEntryCount; i++) {
        number c = this->ftom_02_innerScala_applySCLOctIndex(octave, i + 0, 0.0, this->ftom_02_innerScala_refFreq);
        n = this->ftom_02_innerScala_applySCLOctIndex(octave, i + 1, 0.0, this->ftom_02_innerScala_refFreq);

        if (c <= hza && hza < n) {
            if (c != hza) {
                frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
            }

            break;
        }
    }

    if (i == this->ftom_02_innerScala_sclEntryCount && n != hza) {
        number c = n;
        n = this->ftom_02_innerScala_applySCLOctIndex(octave + 1, 0, 0.0, this->ftom_02_innerScala_refFreq);
        frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
    }

    number deg = i + octave * this->ftom_02_innerScala_sclEntryCount;
    return {deg, frac};
}

array<int, 2> ftom_02_innerScala_octdegree(int degree, int count) {
    int octave = 0;
    int index = 0;

    if (degree < 0) {
        octave = -(1 + (-1 - degree) / count);
        index = -degree % count;

        if (index > 0) {
            index = count - index;
        }
    } else {
        octave = degree / count;
        index = degree % count;
    }

    return {octave, index};
}

array<int, 2> ftom_02_innerScala_applyKBM(number note) {
    if ((this->ftom_02_innerScala_kbmMin == this->ftom_02_innerScala_kbmMax && this->ftom_02_innerScala_kbmMax == 0) || (note >= this->ftom_02_innerScala_kbmMin && note <= this->ftom_02_innerScala_kbmMax)) {
        int degree = (int)(rnbo_floor(note - this->ftom_02_innerScala_kbmMid));

        if (this->ftom_02_innerScala_kbmSize == 0) {
            return {degree, 1};
        }

        array<int, 2> octdeg = this->ftom_02_innerScala_octdegree(degree, this->ftom_02_innerScala_kbmSize);
        int octave = (int)(octdeg[0]);
        Index index = (Index)(octdeg[1]);

        if (this->ftom_02_innerScala_kbmMapSize > index) {
            degree = (int)(this->ftom_02_innerScala_kbmValid[(Index)(this->ftom_02_innerScala_KBM_MAP_OFFSET + index)]);

            if (degree >= 0) {
                return {degree + octave * this->ftom_02_innerScala_kbmOctaveDegree, 1};
            }
        }
    }

    return {-1, 0};
}

number ftom_02_innerScala_applySCL(int degree, number frac, number refFreq) {
    array<int, 2> octdeg = this->ftom_02_innerScala_octdegree(degree, this->ftom_02_innerScala_sclEntryCount);
    return this->ftom_02_innerScala_applySCLOctIndex(octdeg[0], octdeg[1], frac, refFreq);
}

number ftom_02_innerScala_applySCLOctIndex(number octave, int index, number frac, number refFreq) {
    number p = 0;

    if (index > 0) {
        p = this->ftom_02_innerScala_sclExpMul[(Index)(index - 1)];
    }

    if (frac > 0) {
        p = this->linearinterp(frac, p, this->ftom_02_innerScala_sclExpMul[(Index)index]);
    } else if (frac < 0) {
        p = this->linearinterp(-frac, this->ftom_02_innerScala_sclExpMul[(Index)index], p);
    }

    return refFreq * rnbo_pow(2, p + octave * this->ftom_02_innerScala_sclOctaveMul);
}

void ftom_02_innerScala_updateRefFreq() {
    this->ftom_02_innerScala_lastValid = false;
    int refOffset = (int)(this->ftom_02_innerScala_kbmRefNum - this->ftom_02_innerScala_kbmMid);

    if (refOffset == 0) {
        this->ftom_02_innerScala_refFreq = this->ftom_02_innerScala_kbmRefFreq;
    } else {
        int base = (int)(this->ftom_02_innerScala_kbmSize);

        if (base < 1) {
            base = this->ftom_02_innerScala_sclEntryCount;
        }

        array<int, 2> octdeg = this->ftom_02_innerScala_octdegree(refOffset, base);
        number oct = (number)(octdeg[0]);
        int index = (int)(octdeg[1]);

        if (base > 0) {
            oct = oct + rnbo_floor(index / base);
            index = index % base;
        }

        if (index >= 0 && index < this->ftom_02_innerScala_kbmSize) {
            if (index < this->ftom_02_innerScala_kbmMapSize) {
                index = (int)(this->ftom_02_innerScala_kbmValid[(Index)((Index)(index) + this->ftom_02_innerScala_KBM_MAP_OFFSET)]);
            } else {
                index = -1;
            }
        }

        if (index < 0 || index > this->ftom_02_innerScala_sclExpMul->length)
            {} else {
            number p = 0;

            if (index > 0) {
                p = this->ftom_02_innerScala_sclExpMul[(Index)(index - 1)];
            }

            this->ftom_02_innerScala_refFreq = this->ftom_02_innerScala_kbmRefFreq / rnbo_pow(2, p + oct * this->ftom_02_innerScala_sclOctaveMul);
        }
    }
}

void ftom_02_innerScala_reset() {
    this->ftom_02_innerScala_internal = true;
    this->ftom_02_innerScala_lastValid = false;
    this->ftom_02_innerScala_lastNote = 0;
    this->ftom_02_innerScala_lastFreq = 0;
    this->ftom_02_innerScala_sclEntryCount = 0;
    this->ftom_02_innerScala_sclOctaveMul = 1;
    this->ftom_02_innerScala_sclExpMul = {};
    this->ftom_02_innerScala_kbmValid = {0, 0, 0, 60, 69, 440};
    this->ftom_02_innerScala_kbmMid = 60;
    this->ftom_02_innerScala_kbmRefNum = 69;
    this->ftom_02_innerScala_kbmRefFreq = 440;
    this->ftom_02_innerScala_kbmSize = 0;
    this->ftom_02_innerScala_kbmMin = 0;
    this->ftom_02_innerScala_kbmMax = 0;
    this->ftom_02_innerScala_kbmOctaveDegree = 12;
    this->ftom_02_innerScala_kbmMapSize = 0;
    this->ftom_02_innerScala_refFreq = 261.63;
}

void ftom_02_init() {
    this->ftom_02_innerScala_update(this->ftom_02_scale, this->ftom_02_map);
}

void param_03_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_03_value;
}

void param_03_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_03_value_set(preset["value"]);
}

void param_04_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_04_value;
}

void param_04_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_04_value_set(preset["value"]);
}

void param_05_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_05_value;
}

void param_05_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_05_value_set(preset["value"]);
}

void param_06_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_06_value;
}

void param_06_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_06_value_set(preset["value"]);
}

void param_07_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_07_value;
}

void param_07_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_07_value_set(preset["value"]);
}

void ip_04_init() {
    this->ip_04_lastValue = this->ip_04_value;
}

void ip_04_fillSigBuf() {
    if ((bool)(this->ip_04_sigbuf)) {
        SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

        if (k >= (SampleIndex)(this->vs))
            k = (SampleIndex)(this->vs) - 1;

        for (SampleIndex i = (SampleIndex)(this->ip_04_lastIndex); i < k; i++) {
            if (this->ip_04_resetCount > 0) {
                this->ip_04_sigbuf[(Index)i] = 1;
                this->ip_04_resetCount--;
            } else {
                this->ip_04_sigbuf[(Index)i] = this->ip_04_lastValue;
            }
        }

        this->ip_04_lastIndex = k;
    }
}

void ip_04_dspsetup(bool force) {
    if ((bool)(this->ip_04_setupDone) && (bool)(!(bool)(force)))
        return;

    this->ip_04_lastIndex = 0;
    this->ip_04_setupDone = true;
}

void param_08_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_08_value;
}

void param_08_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_08_value_set(preset["value"]);
}

number globaltransport_getTempoAtSample(SampleIndex sampleOffset) {
    RNBO_UNUSED(sampleOffset);
    return (this->vs > 0 ? this->globaltransport_tempo[(Index)sampleOffset] : this->globaltransport_lastTempo);
}

number globaltransport_getTempo() {
    return this->globaltransport_getTempoAtSample(this->sampleOffsetIntoNextAudioBuffer);
}

number globaltransport_getStateAtSample(SampleIndex sampleOffset) {
    RNBO_UNUSED(sampleOffset);
    return (this->vs > 0 ? this->globaltransport_state[(Index)sampleOffset] : this->globaltransport_lastState);
}

number globaltransport_getState() {
    return this->globaltransport_getStateAtSample(this->sampleOffsetIntoNextAudioBuffer);
}

number globaltransport_getBeatTimeAtMsTime(MillisecondTime time) {
    number i = 2;

    while (i < this->globaltransport_beatTimeChanges->length && this->globaltransport_beatTimeChanges[(Index)(i + 1)] <= time) {
        i += 2;
    }

    i -= 2;
    number beatTimeBase = this->globaltransport_beatTimeChanges[(Index)i];

    if (this->globaltransport_getState() == 0)
        return beatTimeBase;

    number beatTimeBaseMsTime = this->globaltransport_beatTimeChanges[(Index)(i + 1)];
    number diff = time - beatTimeBaseMsTime;
    return beatTimeBase + this->mstobeats(diff);
}

bool globaltransport_setTempo(number tempo, bool notify) {
    if ((bool)(notify)) {
        this->processTempoEvent(this->currenttime(), tempo);
        this->globaltransport_notify = true;
    } else if (this->globaltransport_getTempo() != tempo) {
        auto ct = this->currenttime();
        this->globaltransport_beatTimeChanges->push(this->globaltransport_getBeatTimeAtMsTime(ct));
        this->globaltransport_beatTimeChanges->push(ct);

        fillSignal(
            this->globaltransport_tempo,
            this->vs,
            tempo,
            (Index)(this->sampleOffsetIntoNextAudioBuffer)
        );

        this->globaltransport_lastTempo = tempo;
        this->globaltransport_tempoNeedsReset = true;
        return true;
    }

    return false;
}

number globaltransport_getBeatTime() {
    return this->globaltransport_getBeatTimeAtMsTime(this->currenttime());
}

bool globaltransport_setState(number state, bool notify) {
    if ((bool)(notify)) {
        this->processTransportEvent(this->currenttime(), TransportState(state));
        this->globaltransport_notify = true;
    } else if (this->globaltransport_getState() != state) {
        fillSignal(
            this->globaltransport_state,
            this->vs,
            state,
            (Index)(this->sampleOffsetIntoNextAudioBuffer)
        );

        this->globaltransport_lastState = TransportState(state);
        this->globaltransport_stateNeedsReset = true;

        if (state == 0) {
            this->globaltransport_beatTimeChanges->push(this->globaltransport_getBeatTime());
            this->globaltransport_beatTimeChanges->push(this->currenttime());
        }

        return true;
    }

    return false;
}

bool globaltransport_setBeatTime(number beattime, bool notify) {
    if ((bool)(notify)) {
        this->processBeatTimeEvent(this->currenttime(), beattime);
        this->globaltransport_notify = true;
        return false;
    } else {
        bool beatTimeHasChanged = false;
        float oldBeatTime = (float)(this->globaltransport_getBeatTime());
        float newBeatTime = (float)(beattime);

        if (oldBeatTime != newBeatTime) {
            beatTimeHasChanged = true;
        }

        this->globaltransport_beatTimeChanges->push(beattime);
        this->globaltransport_beatTimeChanges->push(this->currenttime());
        return beatTimeHasChanged;
    }
}

number globaltransport_getBeatTimeAtSample(SampleIndex sampleOffset) {
    auto msOffset = this->sampstoms(sampleOffset);
    return this->globaltransport_getBeatTimeAtMsTime(this->currenttime() + msOffset);
}

array<number, 2> globaltransport_getTimeSignatureAtMsTime(MillisecondTime time) {
    number i = 3;

    while (i < this->globaltransport_timeSignatureChanges->length && this->globaltransport_timeSignatureChanges[(Index)(i + 2)] <= time) {
        i += 3;
    }

    i -= 3;

    return {
        this->globaltransport_timeSignatureChanges[(Index)i],
        this->globaltransport_timeSignatureChanges[(Index)(i + 1)]
    };
}

array<number, 2> globaltransport_getTimeSignature() {
    return this->globaltransport_getTimeSignatureAtMsTime(this->currenttime());
}

array<number, 2> globaltransport_getTimeSignatureAtSample(SampleIndex sampleOffset) {
    auto msOffset = this->sampstoms(sampleOffset);
    return this->globaltransport_getTimeSignatureAtMsTime(this->currenttime() + msOffset);
}

bool globaltransport_setTimeSignature(number numerator, number denominator, bool notify) {
    if ((bool)(notify)) {
        this->processTimeSignatureEvent(this->currenttime(), (int)(numerator), (int)(denominator));
        this->globaltransport_notify = true;
    } else {
        array<number, 2> currentSig = this->globaltransport_getTimeSignature();

        if (currentSig[0] != numerator || currentSig[1] != denominator) {
            this->globaltransport_timeSignatureChanges->push(numerator);
            this->globaltransport_timeSignatureChanges->push(denominator);
            this->globaltransport_timeSignatureChanges->push(this->currenttime());
            return true;
        }
    }

    return false;
}

void globaltransport_advance() {
    if ((bool)(this->globaltransport_tempoNeedsReset)) {
        fillSignal(this->globaltransport_tempo, this->vs, this->globaltransport_lastTempo);
        this->globaltransport_tempoNeedsReset = false;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendTempoEvent(this->globaltransport_lastTempo);
        }
    }

    if ((bool)(this->globaltransport_stateNeedsReset)) {
        fillSignal(this->globaltransport_state, this->vs, this->globaltransport_lastState);
        this->globaltransport_stateNeedsReset = false;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendTransportEvent(TransportState(this->globaltransport_lastState));
        }
    }

    if (this->globaltransport_beatTimeChanges->length > 2) {
        this->globaltransport_beatTimeChanges[0] = this->globaltransport_beatTimeChanges[(Index)(this->globaltransport_beatTimeChanges->length - 2)];
        this->globaltransport_beatTimeChanges[1] = this->globaltransport_beatTimeChanges[(Index)(this->globaltransport_beatTimeChanges->length - 1)];
        this->globaltransport_beatTimeChanges->length = 2;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendBeatTimeEvent(this->globaltransport_beatTimeChanges[0]);
        }
    }

    if (this->globaltransport_timeSignatureChanges->length > 3) {
        this->globaltransport_timeSignatureChanges[0] = this->globaltransport_timeSignatureChanges[(Index)(this->globaltransport_timeSignatureChanges->length - 3)];
        this->globaltransport_timeSignatureChanges[1] = this->globaltransport_timeSignatureChanges[(Index)(this->globaltransport_timeSignatureChanges->length - 2)];
        this->globaltransport_timeSignatureChanges[2] = this->globaltransport_timeSignatureChanges[(Index)(this->globaltransport_timeSignatureChanges->length - 1)];
        this->globaltransport_timeSignatureChanges->length = 3;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendTimeSignatureEvent(
                (int)(this->globaltransport_timeSignatureChanges[0]),
                (int)(this->globaltransport_timeSignatureChanges[1])
            );
        }
    }

    this->globaltransport_notify = false;
}

void globaltransport_dspsetup(bool force) {
    if ((bool)(this->globaltransport_setupDone) && (bool)(!(bool)(force)))
        return;

    fillSignal(this->globaltransport_tempo, this->vs, this->globaltransport_lastTempo);
    this->globaltransport_tempoNeedsReset = false;
    fillSignal(this->globaltransport_state, this->vs, this->globaltransport_lastState);
    this->globaltransport_stateNeedsReset = false;
    this->globaltransport_setupDone = true;
}

bool stackprotect_check() {
    this->stackprotect_count++;

    if (this->stackprotect_count > 128) {
        console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
        return true;
    }

    return false;
}

void updateTime(MillisecondTime time) {
    this->_currentTime = time;
    this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));

    if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;

    if (this->sampleOffsetIntoNextAudioBuffer < 0)
        this->sampleOffsetIntoNextAudioBuffer = 0;
}

void assign_defaults()
{
    dspexpr_01_in1 = 0;
    dspexpr_01_in2 = 1;
    poltocar_tilde_01_radius = 0;
    poltocar_tilde_01_angle = 0;
    cartopol_tilde_01_x = 0;
    cartopol_tilde_01_y = 0;
    ip_01_value = 0;
    ip_01_impulse = 0;
    dspexpr_02_in1 = 0;
    dspexpr_02_in2 = 1;
    dspexpr_03_in1 = 0;
    dspexpr_03_in2 = 1;
    dspexpr_03_in3 = 2;
    selector_01_onoff = 1;
    dspexpr_04_in1 = 0;
    dspexpr_04_in2 = 0;
    selector_02_onoff = 1;
    ip_02_value = 1;
    ip_02_impulse = 0;
    selector_03_onoff = 1;
    delaytilde_01_delay = 0;
    selector_04_onoff = 1;
    mtof_tilde_01_midivalue = 0;
    mtof_tilde_01_base = 440;
    dspexpr_05_in1 = 0;
    dspexpr_05_in2 = 0;
    dspexpr_06_in1 = 0;
    dspexpr_06_in2 = 0;
    selector_05_onoff = 1;
    delaytilde_02_delay = 0;
    dspexpr_07_in1 = 0;
    dspexpr_07_in2 = 1;
    dspexpr_07_in3 = 20000;
    selector_06_onoff = 1;
    ftom_tilde_01_frequency = 0;
    ftom_tilde_01_base = 440;
    rampsmooth_tilde_01_x = 0;
    rampsmooth_tilde_01_up = 10000;
    rampsmooth_tilde_01_down = 10000;
    selector_07_onoff = 1;
    selector_08_onoff = 1;
    param_01_value = 0;
    delaytilde_03_delay = 0;
    dspexpr_08_in1 = 0;
    dspexpr_09_in1 = 0;
    paramtilde_01_value = 0;
    paramtilde_01_value_setter(paramtilde_01_value);
    paramtilde_02_value = 0;
    paramtilde_02_value_setter(paramtilde_02_value);
    selector_09_onoff = 1;
    dspexpr_10_in1 = 0;
    dspexpr_10_in2 = 0;
    gen_01_in1 = 0;
    gen_01_in2 = 0;
    gen_01_in3 = 0;
    fftstream_tilde_01_realIn = 0;
    fftstream_tilde_01_imagIn = 0;
    delaytilde_04_delay = 0;
    expr_01_in1 = 0;
    expr_01_in2 = 4096;
    expr_01_out1 = 0;
    expr_02_in1 = 0;
    expr_02_in2 = 100;
    expr_02_out1 = 0;
    param_02_value = 100;
    expr_03_in1 = 0;
    expr_03_in2 = 1;
    expr_03_in3 = 20000;
    expr_03_out1 = 0;
    gate_01_onoff = 0;
    gate_01_out1_number = 0;
    gate_02_onoff = 0;
    gate_02_out1_number = 0;
    gate_03_onoff = 0;
    gate_03_out1_number = 0;
    expr_04_in1 = 0;
    expr_04_in2 = 1;
    expr_04_out1 = 0;
    ftom_01_base = 440;
    ip_03_value = 0;
    ip_03_impulse = 0;
    expr_05_in1 = 0;
    expr_05_in2 = 0;
    expr_05_out1 = 0;
    mtof_01_base = 440;
    expr_06_in1 = 0;
    expr_06_in2 = 1;
    expr_06_in3 = 20000;
    expr_06_out1 = 0;
    ftom_02_base = 440;
    expr_07_in1 = 0;
    expr_07_in2 = 0;
    expr_07_out1 = 0;
    switchobj_01_onoff = 1;
    param_03_value = 0;
    switchobj_02_onoff = 1;
    switchobj_03_onoff = 1;
    param_04_value = 0;
    param_05_value = 0;
    expr_08_in1 = 0;
    expr_08_in2 = 0;
    expr_08_out1 = 0;
    param_06_value = 12;
    snapshot_01_interval = 1;
    snapshot_01_out = 0;
    snapshot_02_interval = 1;
    snapshot_02_out = 0;
    snapshot_03_interval = 1;
    snapshot_03_out = 0;
    expr_09_in1 = 0;
    expr_09_out1 = 0;
    param_07_value = 0;
    ip_04_value = 1;
    ip_04_impulse = 0;
    param_08_value = 1;
    expr_10_in1 = 0;
    expr_10_in2 = 1;
    expr_10_out1 = 0;
    loadmess_01_message = { 0 };
    _currentTime = 0;
    audioProcessSampleCount = 0;
    sampleOffsetIntoNextAudioBuffer = 0;
    zeroBuffer = nullptr;
    dummyBuffer = nullptr;
    signals[0] = nullptr;
    signals[1] = nullptr;
    signals[2] = nullptr;
    signals[3] = nullptr;
    signals[4] = nullptr;
    signals[5] = nullptr;
    signals[6] = nullptr;
    signals[7] = nullptr;
    signals[8] = nullptr;
    signals[9] = nullptr;
    didAllocateSignals = 0;
    vs = 0;
    maxvs = 0;
    sr = 44100;
    invsr = 0.00002267573696;
    ip_01_lastIndex = 0;
    ip_01_lastValue = 0;
    ip_01_resetCount = 0;
    ip_01_sigbuf = nullptr;
    ip_01_setupDone = false;
    ip_02_lastIndex = 0;
    ip_02_lastValue = 0;
    ip_02_resetCount = 0;
    ip_02_sigbuf = nullptr;
    ip_02_setupDone = false;
    delaytilde_01_lastDelay = -1;
    delaytilde_01_crossfadeDelay = 0;
    delaytilde_01_ramp = 0;
    delaytilde_01_rampInSamples = 0;
    delaytilde_01_del__maxdelay = 0;
    delaytilde_01_del_sizemode = 0;
    delaytilde_01_del_wrap = 0;
    delaytilde_01_del_reader = 0;
    delaytilde_01_del_writer = 0;
    delaytilde_01_setupDone = false;
    mtof_tilde_01_innerMtoF_lastInValue = 0;
    mtof_tilde_01_innerMtoF_lastOutValue = 0;
    mtof_tilde_01_innerMtoF_lastTuning = 0;
    mtof_tilde_01_innerScala_internal = true;
    mtof_tilde_01_innerScala_lastValid = false;
    mtof_tilde_01_innerScala_lastNote = 0;
    mtof_tilde_01_innerScala_lastFreq = 0;
    mtof_tilde_01_innerScala_sclEntryCount = 0;
    mtof_tilde_01_innerScala_sclOctaveMul = 1;
    mtof_tilde_01_innerScala_kbmValid = { 0, 0, 0, 60, 69, 440 };
    mtof_tilde_01_innerScala_kbmMid = 60;
    mtof_tilde_01_innerScala_kbmRefNum = 69;
    mtof_tilde_01_innerScala_kbmRefFreq = 440;
    mtof_tilde_01_innerScala_kbmSize = 0;
    mtof_tilde_01_innerScala_kbmMin = 0;
    mtof_tilde_01_innerScala_kbmMax = 0;
    mtof_tilde_01_innerScala_kbmOctaveDegree = 12;
    mtof_tilde_01_innerScala_kbmMapSize = 0;
    mtof_tilde_01_innerScala_refFreq = 261.63;
    delaytilde_02_lastDelay = -1;
    delaytilde_02_crossfadeDelay = 0;
    delaytilde_02_ramp = 0;
    delaytilde_02_rampInSamples = 0;
    delaytilde_02_del__maxdelay = 0;
    delaytilde_02_del_sizemode = 0;
    delaytilde_02_del_wrap = 0;
    delaytilde_02_del_reader = 0;
    delaytilde_02_del_writer = 0;
    delaytilde_02_setupDone = false;
    ftom_tilde_01_innerFtoM_lastInValue = 0;
    ftom_tilde_01_innerFtoM_lastOutValue = 0;
    ftom_tilde_01_innerFtoM_lastTuning = 0;
    ftom_tilde_01_innerScala_internal = true;
    ftom_tilde_01_innerScala_lastValid = false;
    ftom_tilde_01_innerScala_lastNote = 0;
    ftom_tilde_01_innerScala_lastFreq = 0;
    ftom_tilde_01_innerScala_sclEntryCount = 0;
    ftom_tilde_01_innerScala_sclOctaveMul = 1;
    ftom_tilde_01_innerScala_kbmValid = { 0, 0, 0, 60, 69, 440 };
    ftom_tilde_01_innerScala_kbmMid = 60;
    ftom_tilde_01_innerScala_kbmRefNum = 69;
    ftom_tilde_01_innerScala_kbmRefFreq = 440;
    ftom_tilde_01_innerScala_kbmSize = 0;
    ftom_tilde_01_innerScala_kbmMin = 0;
    ftom_tilde_01_innerScala_kbmMax = 0;
    ftom_tilde_01_innerScala_kbmOctaveDegree = 12;
    ftom_tilde_01_innerScala_kbmMapSize = 0;
    ftom_tilde_01_innerScala_refFreq = 261.63;
    rampsmooth_tilde_01_prev = 0;
    rampsmooth_tilde_01_index = 0;
    rampsmooth_tilde_01_increment = 0;
    rampsmooth_tilde_01_d_prev = 0;
    rampsmooth_tilde_01_setupDone = false;
    param_01_lastValue = 0;
    delaytilde_03_lastDelay = -1;
    delaytilde_03_crossfadeDelay = 0;
    delaytilde_03_ramp = 0;
    delaytilde_03_rampInSamples = 0;
    delaytilde_03_del__maxdelay = 0;
    delaytilde_03_del_sizemode = 0;
    delaytilde_03_del_wrap = 0;
    delaytilde_03_del_reader = 0;
    delaytilde_03_del_writer = 0;
    delaytilde_03_setupDone = false;
    paramtilde_01_lastIndex = 0;
    paramtilde_01_sigbuf = nullptr;
    paramtilde_01_setupDone = false;
    paramtilde_02_lastIndex = 0;
    paramtilde_02_sigbuf = nullptr;
    paramtilde_02_setupDone = false;
    gen_01_history_2_value = 0;
    gen_01_history_1_value = 0;
    gen_01_change_0_prev = 0;
    fftstream_tilde_01_datapos = 0;
    fftstream_tilde_01_fft_lastsize = 0;
    fftstream_tilde_01_fft_levels = -1;
    fftstream_tilde_01_setupDone = false;
    delaytilde_04_lastDelay = -1;
    delaytilde_04_crossfadeDelay = 0;
    delaytilde_04_ramp = 0;
    delaytilde_04_rampInSamples = 0;
    delaytilde_04_del__maxdelay = 0;
    delaytilde_04_del_sizemode = 0;
    delaytilde_04_del_wrap = 0;
    delaytilde_04_del_reader = 0;
    delaytilde_04_del_writer = 0;
    delaytilde_04_setupDone = false;
    param_02_lastValue = 0;
    ftom_01_innerFtoM_lastInValue = 0;
    ftom_01_innerFtoM_lastOutValue = 0;
    ftom_01_innerFtoM_lastTuning = 0;
    ftom_01_innerScala_internal = true;
    ftom_01_innerScala_lastValid = false;
    ftom_01_innerScala_lastNote = 0;
    ftom_01_innerScala_lastFreq = 0;
    ftom_01_innerScala_sclEntryCount = 0;
    ftom_01_innerScala_sclOctaveMul = 1;
    ftom_01_innerScala_kbmValid = { 0, 0, 0, 60, 69, 440 };
    ftom_01_innerScala_kbmMid = 60;
    ftom_01_innerScala_kbmRefNum = 69;
    ftom_01_innerScala_kbmRefFreq = 440;
    ftom_01_innerScala_kbmSize = 0;
    ftom_01_innerScala_kbmMin = 0;
    ftom_01_innerScala_kbmMax = 0;
    ftom_01_innerScala_kbmOctaveDegree = 12;
    ftom_01_innerScala_kbmMapSize = 0;
    ftom_01_innerScala_refFreq = 261.63;
    ip_03_lastIndex = 0;
    ip_03_lastValue = 0;
    ip_03_resetCount = 0;
    ip_03_sigbuf = nullptr;
    ip_03_setupDone = false;
    mtof_01_innerMtoF_lastInValue = 0;
    mtof_01_innerMtoF_lastOutValue = 0;
    mtof_01_innerMtoF_lastTuning = 0;
    mtof_01_innerScala_internal = true;
    mtof_01_innerScala_lastValid = false;
    mtof_01_innerScala_lastNote = 0;
    mtof_01_innerScala_lastFreq = 0;
    mtof_01_innerScala_sclEntryCount = 0;
    mtof_01_innerScala_sclOctaveMul = 1;
    mtof_01_innerScala_kbmValid = { 0, 0, 0, 60, 69, 440 };
    mtof_01_innerScala_kbmMid = 60;
    mtof_01_innerScala_kbmRefNum = 69;
    mtof_01_innerScala_kbmRefFreq = 440;
    mtof_01_innerScala_kbmSize = 0;
    mtof_01_innerScala_kbmMin = 0;
    mtof_01_innerScala_kbmMax = 0;
    mtof_01_innerScala_kbmOctaveDegree = 12;
    mtof_01_innerScala_kbmMapSize = 0;
    mtof_01_innerScala_refFreq = 261.63;
    ftom_02_innerFtoM_lastInValue = 0;
    ftom_02_innerFtoM_lastOutValue = 0;
    ftom_02_innerFtoM_lastTuning = 0;
    ftom_02_innerScala_internal = true;
    ftom_02_innerScala_lastValid = false;
    ftom_02_innerScala_lastNote = 0;
    ftom_02_innerScala_lastFreq = 0;
    ftom_02_innerScala_sclEntryCount = 0;
    ftom_02_innerScala_sclOctaveMul = 1;
    ftom_02_innerScala_kbmValid = { 0, 0, 0, 60, 69, 440 };
    ftom_02_innerScala_kbmMid = 60;
    ftom_02_innerScala_kbmRefNum = 69;
    ftom_02_innerScala_kbmRefFreq = 440;
    ftom_02_innerScala_kbmSize = 0;
    ftom_02_innerScala_kbmMin = 0;
    ftom_02_innerScala_kbmMax = 0;
    ftom_02_innerScala_kbmOctaveDegree = 12;
    ftom_02_innerScala_kbmMapSize = 0;
    ftom_02_innerScala_refFreq = 261.63;
    param_03_lastValue = 0;
    param_04_lastValue = 0;
    param_05_lastValue = 0;
    param_06_lastValue = 0;
    snapshot_01_calc = 0;
    snapshot_01_nextTime = 0;
    snapshot_01_count = 0;
    snapshot_01_lastValue = 0;
    snapshot_02_calc = 0;
    snapshot_02_nextTime = 0;
    snapshot_02_count = 0;
    snapshot_02_lastValue = 0;
    snapshot_03_calc = 0;
    snapshot_03_nextTime = 0;
    snapshot_03_count = 0;
    snapshot_03_lastValue = 0;
    param_07_lastValue = 0;
    ip_04_lastIndex = 0;
    ip_04_lastValue = 0;
    ip_04_resetCount = 0;
    ip_04_sigbuf = nullptr;
    ip_04_setupDone = false;
    param_08_lastValue = 0;
    globaltransport_tempo = nullptr;
    globaltransport_tempoNeedsReset = false;
    globaltransport_lastTempo = 120;
    globaltransport_state = nullptr;
    globaltransport_stateNeedsReset = false;
    globaltransport_lastState = 0;
    globaltransport_beatTimeChanges = { 0, 0 };
    globaltransport_timeSignatureChanges = { 4, 4, 0 };
    globaltransport_notify = false;
    globaltransport_setupDone = false;
    stackprotect_count = 0;
    _voiceIndex = 0;
    _noteNumber = 0;
    isMuted = 1;
}

// member variables

    number dspexpr_01_in1;
    number dspexpr_01_in2;
    number poltocar_tilde_01_radius;
    number poltocar_tilde_01_angle;
    number cartopol_tilde_01_x;
    number cartopol_tilde_01_y;
    number ip_01_value;
    number ip_01_impulse;
    number dspexpr_02_in1;
    number dspexpr_02_in2;
    number dspexpr_03_in1;
    number dspexpr_03_in2;
    number dspexpr_03_in3;
    number selector_01_onoff;
    number dspexpr_04_in1;
    number dspexpr_04_in2;
    number selector_02_onoff;
    number ip_02_value;
    number ip_02_impulse;
    number selector_03_onoff;
    number delaytilde_01_delay;
    number selector_04_onoff;
    number mtof_tilde_01_midivalue;
    list mtof_tilde_01_scale;
    list mtof_tilde_01_map;
    number mtof_tilde_01_base;
    number dspexpr_05_in1;
    number dspexpr_05_in2;
    number dspexpr_06_in1;
    number dspexpr_06_in2;
    number selector_05_onoff;
    number delaytilde_02_delay;
    number dspexpr_07_in1;
    number dspexpr_07_in2;
    number dspexpr_07_in3;
    number selector_06_onoff;
    number ftom_tilde_01_frequency;
    list ftom_tilde_01_scale;
    list ftom_tilde_01_map;
    number ftom_tilde_01_base;
    number rampsmooth_tilde_01_x;
    number rampsmooth_tilde_01_up;
    number rampsmooth_tilde_01_down;
    number selector_07_onoff;
    number selector_08_onoff;
    number param_01_value;
    number delaytilde_03_delay;
    number dspexpr_08_in1;
    number dspexpr_09_in1;
    number paramtilde_01_value;
    number paramtilde_02_value;
    number selector_09_onoff;
    number dspexpr_10_in1;
    number dspexpr_10_in2;
    number gen_01_in1;
    number gen_01_in2;
    number gen_01_in3;
    number fftstream_tilde_01_realIn;
    number fftstream_tilde_01_imagIn;
    number delaytilde_04_delay;
    number expr_01_in1;
    number expr_01_in2;
    number expr_01_out1;
    number expr_02_in1;
    number expr_02_in2;
    number expr_02_out1;
    number param_02_value;
    number expr_03_in1;
    number expr_03_in2;
    number expr_03_in3;
    number expr_03_out1;
    number gate_01_onoff;
    number gate_01_out1_number;
    list gate_01_out1_list;
    number gate_02_onoff;
    number gate_02_out1_number;
    list gate_02_out1_list;
    number gate_03_onoff;
    number gate_03_out1_number;
    list gate_03_out1_list;
    number expr_04_in1;
    number expr_04_in2;
    number expr_04_out1;
    list ftom_01_frequency;
    list ftom_01_scale;
    list ftom_01_map;
    number ftom_01_base;
    number ip_03_value;
    number ip_03_impulse;
    number expr_05_in1;
    number expr_05_in2;
    number expr_05_out1;
    list mtof_01_midivalue;
    list mtof_01_scale;
    list mtof_01_map;
    number mtof_01_base;
    number expr_06_in1;
    number expr_06_in2;
    number expr_06_in3;
    number expr_06_out1;
    list ftom_02_frequency;
    list ftom_02_scale;
    list ftom_02_map;
    number ftom_02_base;
    number expr_07_in1;
    number expr_07_in2;
    number expr_07_out1;
    number switchobj_01_onoff;
    number param_03_value;
    number switchobj_02_onoff;
    number switchobj_03_onoff;
    number param_04_value;
    number param_05_value;
    number expr_08_in1;
    number expr_08_in2;
    number expr_08_out1;
    number param_06_value;
    number snapshot_01_interval;
    number snapshot_01_out;
    number snapshot_02_interval;
    number snapshot_02_out;
    number snapshot_03_interval;
    number snapshot_03_out;
    number expr_09_in1;
    number expr_09_out1;
    number param_07_value;
    number ip_04_value;
    number ip_04_impulse;
    number param_08_value;
    number expr_10_in1;
    number expr_10_in2;
    number expr_10_out1;
    list loadmess_01_message;
    MillisecondTime _currentTime;
    SampleIndex audioProcessSampleCount;
    SampleIndex sampleOffsetIntoNextAudioBuffer;
    signal zeroBuffer;
    signal dummyBuffer;
    SampleValue * signals[10];
    bool didAllocateSignals;
    Index vs;
    Index maxvs;
    number sr;
    number invsr;
    SampleIndex ip_01_lastIndex;
    number ip_01_lastValue;
    SampleIndex ip_01_resetCount;
    signal ip_01_sigbuf;
    bool ip_01_setupDone;
    SampleIndex ip_02_lastIndex;
    number ip_02_lastValue;
    SampleIndex ip_02_resetCount;
    signal ip_02_sigbuf;
    bool ip_02_setupDone;
    number delaytilde_01_lastDelay;
    number delaytilde_01_crossfadeDelay;
    number delaytilde_01_ramp;
    long delaytilde_01_rampInSamples;
    Float64BufferRef delaytilde_01_del_buffer;
    Index delaytilde_01_del__maxdelay;
    Int delaytilde_01_del_sizemode;
    Index delaytilde_01_del_wrap;
    Int delaytilde_01_del_reader;
    Int delaytilde_01_del_writer;
    bool delaytilde_01_setupDone;
    number mtof_tilde_01_innerMtoF_lastInValue;
    number mtof_tilde_01_innerMtoF_lastOutValue;
    number mtof_tilde_01_innerMtoF_lastTuning;
    Float64BufferRef mtof_tilde_01_innerMtoF_buffer;
    bool mtof_tilde_01_innerScala_internal;
    const Index mtof_tilde_01_innerScala_KBM_MAP_OFFSET = 7;
    bool mtof_tilde_01_innerScala_lastValid;
    number mtof_tilde_01_innerScala_lastNote;
    number mtof_tilde_01_innerScala_lastFreq;
    int mtof_tilde_01_innerScala_sclEntryCount;
    number mtof_tilde_01_innerScala_sclOctaveMul;
    list mtof_tilde_01_innerScala_sclExpMul;
    list mtof_tilde_01_innerScala_kbmValid;
    int mtof_tilde_01_innerScala_kbmMid;
    int mtof_tilde_01_innerScala_kbmRefNum;
    number mtof_tilde_01_innerScala_kbmRefFreq;
    int mtof_tilde_01_innerScala_kbmSize;
    int mtof_tilde_01_innerScala_kbmMin;
    int mtof_tilde_01_innerScala_kbmMax;
    int mtof_tilde_01_innerScala_kbmOctaveDegree;
    Index mtof_tilde_01_innerScala_kbmMapSize;
    number mtof_tilde_01_innerScala_refFreq;
    number delaytilde_02_lastDelay;
    number delaytilde_02_crossfadeDelay;
    number delaytilde_02_ramp;
    long delaytilde_02_rampInSamples;
    Float64BufferRef delaytilde_02_del_buffer;
    Index delaytilde_02_del__maxdelay;
    Int delaytilde_02_del_sizemode;
    Index delaytilde_02_del_wrap;
    Int delaytilde_02_del_reader;
    Int delaytilde_02_del_writer;
    bool delaytilde_02_setupDone;
    number ftom_tilde_01_innerFtoM_lastInValue;
    number ftom_tilde_01_innerFtoM_lastOutValue;
    number ftom_tilde_01_innerFtoM_lastTuning;
    bool ftom_tilde_01_innerScala_internal;
    const Index ftom_tilde_01_innerScala_KBM_MAP_OFFSET = 7;
    bool ftom_tilde_01_innerScala_lastValid;
    number ftom_tilde_01_innerScala_lastNote;
    number ftom_tilde_01_innerScala_lastFreq;
    int ftom_tilde_01_innerScala_sclEntryCount;
    number ftom_tilde_01_innerScala_sclOctaveMul;
    list ftom_tilde_01_innerScala_sclExpMul;
    list ftom_tilde_01_innerScala_kbmValid;
    int ftom_tilde_01_innerScala_kbmMid;
    int ftom_tilde_01_innerScala_kbmRefNum;
    number ftom_tilde_01_innerScala_kbmRefFreq;
    int ftom_tilde_01_innerScala_kbmSize;
    int ftom_tilde_01_innerScala_kbmMin;
    int ftom_tilde_01_innerScala_kbmMax;
    int ftom_tilde_01_innerScala_kbmOctaveDegree;
    Index ftom_tilde_01_innerScala_kbmMapSize;
    number ftom_tilde_01_innerScala_refFreq;
    number rampsmooth_tilde_01_prev;
    number rampsmooth_tilde_01_index;
    number rampsmooth_tilde_01_increment;
    number rampsmooth_tilde_01_d_prev;
    bool rampsmooth_tilde_01_setupDone;
    number param_01_lastValue;
    number delaytilde_03_lastDelay;
    number delaytilde_03_crossfadeDelay;
    number delaytilde_03_ramp;
    long delaytilde_03_rampInSamples;
    Float64BufferRef delaytilde_03_del_buffer;
    Index delaytilde_03_del__maxdelay;
    Int delaytilde_03_del_sizemode;
    Index delaytilde_03_del_wrap;
    Int delaytilde_03_del_reader;
    Int delaytilde_03_del_writer;
    bool delaytilde_03_setupDone;
    SampleIndex paramtilde_01_lastIndex;
    signal paramtilde_01_sigbuf;
    bool paramtilde_01_setupDone;
    SampleIndex paramtilde_02_lastIndex;
    signal paramtilde_02_sigbuf;
    bool paramtilde_02_setupDone;
    number gen_01_history_2_value;
    number gen_01_history_1_value;
    number gen_01_change_0_prev;
    SampleValue fftstream_tilde_01_inWorkspace[8192] = { };
    SampleValue fftstream_tilde_01_outWorkspace[8192] = { };
    Float32BufferRef fftstream_tilde_01_win_buf;
    SampleIndex fftstream_tilde_01_datapos;
    int fftstream_tilde_01_fft_lastsize;
    list fftstream_tilde_01_fft_costab;
    list fftstream_tilde_01_fft_sintab;
    int fftstream_tilde_01_fft_levels;
    bool fftstream_tilde_01_setupDone;
    number delaytilde_04_lastDelay;
    number delaytilde_04_crossfadeDelay;
    number delaytilde_04_ramp;
    long delaytilde_04_rampInSamples;
    Float64BufferRef delaytilde_04_del_buffer;
    Index delaytilde_04_del__maxdelay;
    Int delaytilde_04_del_sizemode;
    Index delaytilde_04_del_wrap;
    Int delaytilde_04_del_reader;
    Int delaytilde_04_del_writer;
    bool delaytilde_04_setupDone;
    number param_02_lastValue;
    number ftom_01_innerFtoM_lastInValue;
    number ftom_01_innerFtoM_lastOutValue;
    number ftom_01_innerFtoM_lastTuning;
    bool ftom_01_innerScala_internal;
    const Index ftom_01_innerScala_KBM_MAP_OFFSET = 7;
    bool ftom_01_innerScala_lastValid;
    number ftom_01_innerScala_lastNote;
    number ftom_01_innerScala_lastFreq;
    int ftom_01_innerScala_sclEntryCount;
    number ftom_01_innerScala_sclOctaveMul;
    list ftom_01_innerScala_sclExpMul;
    list ftom_01_innerScala_kbmValid;
    int ftom_01_innerScala_kbmMid;
    int ftom_01_innerScala_kbmRefNum;
    number ftom_01_innerScala_kbmRefFreq;
    int ftom_01_innerScala_kbmSize;
    int ftom_01_innerScala_kbmMin;
    int ftom_01_innerScala_kbmMax;
    int ftom_01_innerScala_kbmOctaveDegree;
    Index ftom_01_innerScala_kbmMapSize;
    number ftom_01_innerScala_refFreq;
    SampleIndex ip_03_lastIndex;
    number ip_03_lastValue;
    SampleIndex ip_03_resetCount;
    signal ip_03_sigbuf;
    bool ip_03_setupDone;
    number mtof_01_innerMtoF_lastInValue;
    number mtof_01_innerMtoF_lastOutValue;
    number mtof_01_innerMtoF_lastTuning;
    Float64BufferRef mtof_01_innerMtoF_buffer;
    bool mtof_01_innerScala_internal;
    const Index mtof_01_innerScala_KBM_MAP_OFFSET = 7;
    bool mtof_01_innerScala_lastValid;
    number mtof_01_innerScala_lastNote;
    number mtof_01_innerScala_lastFreq;
    int mtof_01_innerScala_sclEntryCount;
    number mtof_01_innerScala_sclOctaveMul;
    list mtof_01_innerScala_sclExpMul;
    list mtof_01_innerScala_kbmValid;
    int mtof_01_innerScala_kbmMid;
    int mtof_01_innerScala_kbmRefNum;
    number mtof_01_innerScala_kbmRefFreq;
    int mtof_01_innerScala_kbmSize;
    int mtof_01_innerScala_kbmMin;
    int mtof_01_innerScala_kbmMax;
    int mtof_01_innerScala_kbmOctaveDegree;
    Index mtof_01_innerScala_kbmMapSize;
    number mtof_01_innerScala_refFreq;
    number ftom_02_innerFtoM_lastInValue;
    number ftom_02_innerFtoM_lastOutValue;
    number ftom_02_innerFtoM_lastTuning;
    bool ftom_02_innerScala_internal;
    const Index ftom_02_innerScala_KBM_MAP_OFFSET = 7;
    bool ftom_02_innerScala_lastValid;
    number ftom_02_innerScala_lastNote;
    number ftom_02_innerScala_lastFreq;
    int ftom_02_innerScala_sclEntryCount;
    number ftom_02_innerScala_sclOctaveMul;
    list ftom_02_innerScala_sclExpMul;
    list ftom_02_innerScala_kbmValid;
    int ftom_02_innerScala_kbmMid;
    int ftom_02_innerScala_kbmRefNum;
    number ftom_02_innerScala_kbmRefFreq;
    int ftom_02_innerScala_kbmSize;
    int ftom_02_innerScala_kbmMin;
    int ftom_02_innerScala_kbmMax;
    int ftom_02_innerScala_kbmOctaveDegree;
    Index ftom_02_innerScala_kbmMapSize;
    number ftom_02_innerScala_refFreq;
    number param_03_lastValue;
    number param_04_lastValue;
    number param_05_lastValue;
    number param_06_lastValue;
    number snapshot_01_calc;
    number snapshot_01_nextTime;
    SampleIndex snapshot_01_count;
    number snapshot_01_lastValue;
    number snapshot_02_calc;
    number snapshot_02_nextTime;
    SampleIndex snapshot_02_count;
    number snapshot_02_lastValue;
    number snapshot_03_calc;
    number snapshot_03_nextTime;
    SampleIndex snapshot_03_count;
    number snapshot_03_lastValue;
    number param_07_lastValue;
    SampleIndex ip_04_lastIndex;
    number ip_04_lastValue;
    SampleIndex ip_04_resetCount;
    signal ip_04_sigbuf;
    bool ip_04_setupDone;
    number param_08_lastValue;
    signal globaltransport_tempo;
    bool globaltransport_tempoNeedsReset;
    number globaltransport_lastTempo;
    signal globaltransport_state;
    bool globaltransport_stateNeedsReset;
    number globaltransport_lastState;
    list globaltransport_beatTimeChanges;
    list globaltransport_timeSignatureChanges;
    bool globaltransport_notify;
    bool globaltransport_setupDone;
    number stackprotect_count;
    DataRef delaytilde_01_del_bufferobj;
    DataRef RNBODefaultMtofLookupTable256;
    DataRef delaytilde_02_del_bufferobj;
    DataRef delaytilde_03_del_bufferobj;
    DataRef RNBODefaultFftWindow;
    DataRef delaytilde_04_del_bufferobj;
    Index _voiceIndex;
    Int _noteNumber;
    Index isMuted;
    indexlist paramInitIndices;
    indexlist paramInitOrder;

};

PatcherInterface* creaternbomatic()
{
    return new rnbomatic();
}

#ifndef RNBO_NO_PATCHERFACTORY

extern "C" PatcherFactoryFunctionPtr GetPatcherFactoryFunction(PlatformInterface* platformInterface)
#else

extern "C" PatcherFactoryFunctionPtr rnbomaticFactoryFunction(PlatformInterface* platformInterface)
#endif

{
    Platform::set(platformInterface);
    return creaternbomatic;
}

} // end RNBO namespace

