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

class RNBOSubpatcher_149 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_149()
    {
    }
    
    ~RNBOSubpatcher_149()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
        getEngine()->flushClockEvents(this, -1468824490, false);
    }
    
    inline number linearinterp(number frac, number x, number y) {
        return x + (y - x) * frac;
    }
    
    number samplerate() {
        return this->sr;
    }
    
    number wrap(number x, number low, number high) {
        number lo;
        number hi;
    
        if (low == high)
            return low;
    
        if (low > high) {
            hi = low;
            lo = high;
        } else {
            lo = low;
            hi = high;
        }
    
        number range = hi - lo;
    
        if (x >= lo && x < hi)
            return x;
    
        if (range <= 0.000000001)
            return lo;
    
        long numWraps = (long)(rnbo_trunc((x - lo) / range));
        numWraps = numWraps - ((x < lo ? 1 : 0));
        number result = x - range * numWraps;
    
        if (result >= hi)
            return result - range;
        else
            return result;
    }
    
    list append(const list& a, const list& b) {
        return a->concat(b);
    }
    
    int notenumber() {
        return this->_noteNumber;
    }
    
    Index voice() {
        return this->_voiceIndex;
    }
    
    inline number safesqrt(number num) {
        return (num > 0.0 ? rnbo_sqrt(num) : 0.0);
    }
    
    Index getNumMidiInputPorts() const {
        return 1;
    }
    
    void processMidiEvent(MillisecondTime time, int port, ConstByteArray data, Index length) {
        this->updateTime(time);
        this->midiin_01_midihandler(data[0] & 240, (data[0] & 15) + 1, port, data, length);
    }
    
    Index getNumMidiOutputPorts() const {
        return 1;
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
        const SampleValue * target_A = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
        const SampleValue * target_duty = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
        const SampleValue * target_r = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
        const SampleValue * target_D = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
        const SampleValue * target_S = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
        const SampleValue * target_R = (numInputs >= 6 && inputs[5] ? inputs[5] : this->zeroBuffer);
        const SampleValue * target_x = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
        const SampleValue * target_dx = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
        const SampleValue * target_dy = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
        const SampleValue * target_p1 = (numInputs >= 10 && inputs[9] ? inputs[9] : this->zeroBuffer);
        const SampleValue * target_y1 = (numInputs >= 11 && inputs[10] ? inputs[10] : this->zeroBuffer);
        const SampleValue * target_e1 = (numInputs >= 12 && inputs[11] ? inputs[11] : this->zeroBuffer);
        const SampleValue * target_p2 = (numInputs >= 13 && inputs[12] ? inputs[12] : this->zeroBuffer);
        const SampleValue * target_y2 = (numInputs >= 14 && inputs[13] ? inputs[13] : this->zeroBuffer);
        const SampleValue * target_e2 = (numInputs >= 15 && inputs[14] ? inputs[14] : this->zeroBuffer);
        const SampleValue * target_p3 = (numInputs >= 16 && inputs[15] ? inputs[15] : this->zeroBuffer);
        const SampleValue * target_y3 = (numInputs >= 17 && inputs[16] ? inputs[16] : this->zeroBuffer);
        const SampleValue * target_e3 = (numInputs >= 18 && inputs[17] ? inputs[17] : this->zeroBuffer);
        const SampleValue * target_p4 = (numInputs >= 19 && inputs[18] ? inputs[18] : this->zeroBuffer);
        const SampleValue * target_y4 = (numInputs >= 20 && inputs[19] ? inputs[19] : this->zeroBuffer);
        const SampleValue * target_e4 = (numInputs >= 21 && inputs[20] ? inputs[20] : this->zeroBuffer);
        SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
        SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
    
        if (this->getIsMuted())
            return;
    
        this->mtof_tilde_01_perform(this->mtof_tilde_01_midivalue, this->signals[0], n);
        this->phasor_01_perform(this->signals[0], this->signals[1], n);
        this->ip_01_perform(this->signals[0], n);
        this->dspexpr_06_perform(this->signals[2], n);
        this->stackprotect_perform(n);
        this->signalreceive_01_perform(target_A, this->signals[3], n);
        this->signalreceive_02_perform(target_duty, this->signals[4], n);
        this->triangle_tilde_01_perform(this->signals[1], this->signals[4], this->signals[5], n);
        this->dspexpr_03_perform(this->signals[5], this->signals[2], this->signals[4], n);
        this->signalreceive_03_perform(target_r, this->signals[2], n);
        this->signalreceive_04_perform(target_D, this->signals[5], n);
        this->signalreceive_05_perform(target_S, this->signals[1], n);
        this->signalreceive_06_perform(target_R, this->signals[6], n);
    
        this->adsr_01_perform(
            this->signals[3],
            this->signals[5],
            this->signals[1],
            this->signals[6],
            this->signals[0],
            this->signals[7],
            n
        );
    
        this->signalreceive_07_perform(target_x, this->signals[6], n);
        this->signalreceive_08_perform(target_dx, this->signals[1], n);
        this->dspexpr_08_perform(this->signals[4], this->signals[1], this->signals[5], n);
        this->dspexpr_10_perform(this->signals[5], this->signals[1], n);
        this->dspexpr_09_perform(this->signals[1], this->dspexpr_09_in2, this->signals[5], n);
        this->dspexpr_07_perform(this->signals[5], this->signals[6], this->signals[1], n);
        this->signalreceive_09_perform(target_dy, this->signals[6], n);
        this->dspexpr_11_perform(this->signals[4], this->signals[6], this->signals[5], n);
        this->signalreceive_10_perform(target_p1, this->signals[6], n);
        this->dspexpr_12_perform(this->signals[5], this->signals[6], this->signals[4], n);
        this->dspexpr_16_perform(this->signals[4], this->signals[6], n);
        this->signalreceive_11_perform(target_y1, this->signals[4], n);
        this->signalreceive_12_perform(target_e1, this->signals[3], n);
        this->dspexpr_13_perform(this->signals[6], this->signals[3], this->signals[0], n);
        this->dspexpr_15_perform(this->signals[0], this->signals[4], this->signals[3], n);
        this->signalreceive_13_perform(target_p2, this->signals[4], n);
        this->dspexpr_19_perform(this->signals[5], this->signals[4], this->signals[0], n);
        this->dspexpr_20_perform(this->signals[0], this->signals[4], n);
        this->signalreceive_14_perform(target_y2, this->signals[0], n);
        this->signalreceive_15_perform(target_e2, this->signals[6], n);
        this->dspexpr_18_perform(this->signals[4], this->signals[6], this->signals[8], n);
        this->dspexpr_21_perform(this->signals[8], this->signals[0], this->signals[6], n);
        this->signalreceive_16_perform(target_p3, this->signals[0], n);
        this->dspexpr_24_perform(this->signals[5], this->signals[0], this->signals[8], n);
        this->dspexpr_25_perform(this->signals[8], this->signals[0], n);
        this->signalreceive_17_perform(target_y3, this->signals[8], n);
        this->signalreceive_18_perform(target_e3, this->signals[4], n);
        this->dspexpr_23_perform(this->signals[0], this->signals[4], this->signals[9], n);
        this->dspexpr_26_perform(this->signals[9], this->signals[8], this->signals[4], n);
        this->signalreceive_19_perform(target_p4, this->signals[8], n);
        this->dspexpr_29_perform(this->signals[5], this->signals[8], this->signals[9], n);
        this->dspexpr_30_perform(this->signals[9], this->signals[8], n);
        this->signalreceive_20_perform(target_y4, this->signals[9], n);
        this->signalreceive_21_perform(target_e4, this->signals[5], n);
        this->dspexpr_28_perform(this->signals[8], this->signals[5], this->signals[0], n);
        this->dspexpr_31_perform(this->signals[0], this->signals[9], this->signals[5], n);
        this->dspexpr_27_perform(this->signals[4], this->signals[5], this->signals[9], n);
        this->dspexpr_22_perform(this->signals[6], this->signals[9], this->signals[5], n);
        this->dspexpr_17_perform(this->signals[3], this->signals[5], this->signals[9], n);
        this->dspexpr_14_perform(this->signals[9], this->dspexpr_14_in2, this->signals[5], n);
        this->cartopol_tilde_01_perform(this->signals[1], this->signals[5], this->signals[9], this->signals[3], n);
    
        this->dspexpr_01_perform(
            this->signals[9],
            this->dspexpr_01_in2,
            this->dspexpr_01_in3,
            this->signals[5],
            n
        );
    
        this->dspexpr_05_perform(this->signals[3], this->signals[2], this->signals[9], n);
        this->poltocar_tilde_01_perform(this->signals[5], this->signals[9], this->signals[2], this->signals[3], n);
        this->dspexpr_02_perform(this->signals[2], this->signals[7], this->signals[9], n);
        this->signaladder_01_perform(this->signals[9], out1, out1, n);
        this->dspexpr_04_perform(this->signals[3], this->signals[7], this->signals[9], n);
        this->signaladder_02_perform(this->signals[9], out2, out2, n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            Index i;
    
            for (i = 0; i < 10; i++) {
                this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
            }
    
            this->phasor_01_sigbuf = resizeSignal(this->phasor_01_sigbuf, this->maxvs, maxBlockSize);
            this->adsr_01_triggerBuf = resizeSignal(this->adsr_01_triggerBuf, this->maxvs, maxBlockSize);
            this->adsr_01_triggerValueBuf = resizeSignal(this->adsr_01_triggerValueBuf, this->maxvs, maxBlockSize);
            this->ip_01_sigbuf = resizeSignal(this->ip_01_sigbuf, this->maxvs, maxBlockSize);
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
    
        this->phasor_01_dspsetup(forceDSPSetup);
        this->ip_01_dspsetup(forceDSPSetup);
        this->adsr_01_dspsetup(forceDSPSetup);
    
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
    
    void setVoiceIndex(Index index)  {
        this->_voiceIndex = index;
    }
    
    void setNoteNumber(Int noteNumber)  {
        this->_noteNumber = noteNumber;
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
    
    void getPreset(PatcherStateInterface& ) {}
    
    void processTempoEvent(MillisecondTime , Tempo ) {}
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double ) {}
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex , ParameterValue , MillisecondTime ) {}
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterValue getPolyParameterValue(PatcherInterface** voices, ParameterIndex index)  {
        switch (index) {
        default:
            {
            return voices[0]->getParameterValue(index);
            }
        }
    }
    
    void setPolyParameterValue(
        PatcherInterface** voices,
        ParameterIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        switch (index) {
        default:
            {
            for (Index i = 0; i < 32; i++)
                voices[i]->setParameterValue(index, value, time);
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 21;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 0;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex , ParameterInfo * ) const {}
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        if (this->_voiceIndex == 1)
            this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void sendPolyParameter(ParameterIndex index, Index voiceIndex, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset + voiceIndex - 1, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
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
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime time, ClockId index, bool hasValue, ParameterValue value) {
        RNBO_UNUSED(value);
        RNBO_UNUSED(hasValue);
        this->updateTime(time);
    
        switch (index) {
        case -1468824490:
            {
            this->adsr_01_mute_bang();
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
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex index, MillisecondTime time) {
        this->updateTime(time);
    
        if (index == 0) {
            this->mtof_tilde_01_innerMtoF_buffer = new Float64Buffer(this->getPatcher()->RNBODefaultMtofLookupTable256);
        }
    }
    
    void initialize() {
        this->assign_defaults();
        this->setState();
        this->mtof_tilde_01_innerMtoF_buffer = new Float64Buffer(this->getPatcher()->RNBODefaultMtofLookupTable256);
    }
    
    protected:
    
    void adsr_01_mute_bang() {
        this->trigger_03_input_bang_bang();
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
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 2;
    }
    
    void initializeObjects() {
        this->mtof_tilde_01_innerScala_init();
        this->mtof_tilde_01_init();
        this->ip_01_init();
    }
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {}
    
    void allocateDataRefs() {
        this->mtof_tilde_01_innerMtoF_buffer->requestSize(65536, 1);
        this->mtof_tilde_01_innerMtoF_buffer->setSampleRate(this->sr);
        this->mtof_tilde_01_innerMtoF_buffer = this->mtof_tilde_01_innerMtoF_buffer->allocateIfNeeded();
    }
    
    void sendMidiEvent(number port, number b1, number b2, number b3) {
        this->midiouthelper_sendMidi(b1);
        this->midiouthelper_sendMidi(b2);
        this->midiouthelper_sendMidi(b3);
    }
    
    void sendMidiEventList(number port, const list& data) {
        for (Index i = 0; i < data->length; i++) {
            this->midiouthelper_sendMidi(data[i]);
        }
    }
    
    void expr_03_in2_set(number v) {
        this->expr_03_in2 = v;
    }
    
    void trigger_04_out2_set(number v) {
        this->expr_03_in2_set(v);
    }
    
    void expr_01_in2_set(number v) {
        this->expr_01_in2 = v;
    }
    
    void expr_03_out1_set(number v) {
        this->expr_03_out1 = v;
        this->expr_01_in2_set(this->expr_03_out1);
    }
    
    void expr_03_in1_set(number in1) {
        this->expr_03_in1 = in1;
        this->expr_03_out1_set(this->expr_03_in1 * this->expr_03_in2);//#map:Heart/*_obj-200:1
    }
    
    void trigger_02_out2_set(number v) {
        this->expr_03_in1_set(v);
    }
    
    void join_01_in1_set(const list& v) {
        this->join_01_in1 = jsCreateListCopy(v);
    }
    
    void voice_01_noteNumber_set(number v) {
        {
            list converted = {v};
            this->join_01_in1_set(converted);
        }
    }
    
    void eventoutlet_01_in1_list_set(const list& v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out3_list_set((list)v);
    }
    
    void join_01_out_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void join_01_in0_set(const list& v) {
        this->join_01_in0 = jsCreateListCopy(v);
        list l = list();
        l = this->join_01_in0;
        l = this->append(l, this->join_01_in1);
        l = this->append(l, this->join_01_in2);
        l = this->append(l, this->join_01_in3);
        l = this->append(l, this->join_01_in4);
    
        if (l->length > 0)
            this->join_01_out_set(l);
    }
    
    void voice_01_voicenumber_set(number v) {
        {
            list converted = {v};
            this->join_01_in0_set(converted);
        }
    }
    
    void voice_01_voicebang_bang() {
        this->voice_01_noteNumber_set(this->notenumber());
        this->voice_01_voicenumber_set(this->voice());
    }
    
    void trigger_01_out2_bang() {
        this->voice_01_voicebang_bang();
    }
    
    void mtof_tilde_01_midivalue_set(number v) {
        this->mtof_tilde_01_midivalue = v;
    }
    
    void trigger_01_out1_set(number v) {
        this->mtof_tilde_01_midivalue_set(v);
    }
    
    void trigger_01_input_number_set(number v) {
        this->trigger_01_out2_bang();
        this->trigger_01_out1_set(v);
    }
    
    void expr_01_out1_set(number v) {
        this->expr_01_out1 = v;
        this->trigger_01_input_number_set(this->expr_01_out1);
    }
    
    void expr_01_in1_set(number in1) {
        this->expr_01_in1 = in1;
        this->expr_01_out1_set(this->expr_01_in1 + this->expr_01_in2);//#map:Heart/+_obj-52:1
    }
    
    void floatnum_01_out_set(number v) {
        this->expr_01_in1_set(v);
    }
    
    void floatnum_01_input_bang_bang() {
        this->floatnum_01_out_set(this->floatnum_01_stored);
    }
    
    void trigger_02_out1_bang() {
        this->floatnum_01_input_bang_bang();
    }
    
    void trigger_02_input_number_set(number v) {
        this->trigger_02_out2_set(v);
        this->trigger_02_out1_bang();
    }
    
    void floatnum_02_out_set(number v) {
        this->trigger_02_input_number_set(v);
    }
    
    void floatnum_02_input_bang_bang() {
        this->floatnum_02_out_set(this->floatnum_02_stored);
    }
    
    void trigger_04_out1_bang() {
        this->floatnum_02_input_bang_bang();
    }
    
    void trigger_04_input_number_set(number v) {
        this->trigger_04_out2_set(v);
        this->trigger_04_out1_bang();
    }
    
    void receive_01_output_number_set(number v) {
        this->receive_01_output_number = v;
        this->trigger_04_input_number_set(v);
    }
    
    void join_01_in3_set(const list& v) {
        this->join_01_in3 = jsCreateListCopy(v);
    }
    
    void voice_01_mutestatus_set(number v) {
        {
            list converted = {v};
            this->join_01_in3_set(converted);
        }
    }
    
    void voice_01_mutein_list_set(const list& v) {
        if (v[0] == this->voice() || v[0] == 0) {
            this->voice_01_mutestatus_set(v[1]);
        }
    }
    
    void join_01_in4_set(const list& v) {
        this->join_01_in4 = jsCreateListCopy(v);
    }
    
    void voice_01_activevoices_set(number v) {
        {
            list converted = {v};
            this->join_01_in4_set(converted);
        }
    }
    
    void midiformat_01_channel_set(number v) {
        this->midiformat_01_channel_setter(v);
        v = this->midiformat_01_channel;
    }
    
    void midiparse_01_channel_set(number v) {
        this->midiformat_01_channel_set(v);
    }
    
    void join_01_in2_set(const list& v) {
        this->join_01_in2 = jsCreateListCopy(v);
    }
    
    void ip_01_value_set(number v) {
        this->ip_01_value = v;
        this->ip_01_fillSigBuf();
        this->ip_01_lastValue = v;
    }
    
    void expr_02_out1_set(number v) {
        this->expr_02_out1 = v;
        this->ip_01_value_set(this->expr_02_out1);
    }
    
    void expr_02_in1_set(number in1) {
        this->expr_02_in1 = in1;
    
        this->expr_02_out1_set(
            (this->expr_02_in2 == 0 ? 0 : (this->expr_02_in2 == 0. ? 0. : this->expr_02_in1 / this->expr_02_in2))
        );//#map:Heart//_obj-93:1
    }
    
    void unpack_01_out2_set(number v) {
        this->unpack_01_out2 = v;
    
        {
            list converted = {v};
            this->join_01_in2_set(converted);
        }
    
        this->expr_02_in1_set(v);
    }
    
    void floatnum_01_input_number_set(number v) {
        this->floatnum_01_input_number = v;
        this->floatnum_01_stored = v;
        this->floatnum_01_out_set(v);
    }
    
    void unpack_01_out1_set(number v) {
        this->unpack_01_out1 = v;
        this->floatnum_01_input_number_set(v);
    }
    
    void unpack_01_input_list_set(const list& v) {
        if (v->length > 1)
            this->unpack_01_out2_set(rnbo_trunc(v[1]));
    
        if (v->length > 0)
            this->unpack_01_out1_set(rnbo_trunc(v[0]));
    }
    
    void midiparse_01_noteonoroff_set(const list& v) {
        this->unpack_01_input_list_set(v);
    }
    
    void midiout_01_midiin_set(number v) {
        int vi = (int)(v);
    
        if (vi == 0xF6 || (vi >= MIDI_Clock && vi <= MIDI_Reset && vi != 0xF9 && vi != 0xFD)) {
            this->sendMidiEvent(this->midiout_01_port, vi, 0, 0);
            return;
        }
    
        this->midiout_01_currentStatus = parseMidi(this->midiout_01_currentStatus, vi, this->midiout_01_status);
        bool clearSysex = true;
    
        switch ((int)this->midiout_01_currentStatus) {
        case MIDI_StatusByteReceived:
            {
            this->midiout_01_status = v;
            this->midiout_01_byte1 = -1;
            break;
            }
        case MIDI_SecondByteReceived:
            {
            this->midiout_01_byte1 = v;
            break;
            }
        case MIDI_ProgramChange:
        case MIDI_ChannelPressure:
        case MIDI_QuarterFrame:
        case MIDI_SongSel:
            {
            this->midiout_01_byte1 = v;
            this->sendMidiEvent(this->midiout_01_port, this->midiout_01_status, this->midiout_01_byte1, 0);
            break;
            }
        case MIDI_NoteOff:
        case MIDI_NoteOn:
        case MIDI_Aftertouch:
        case MIDI_CC:
        case MIDI_PitchBend:
        case MIDI_SongPos:
        case MIDI_Generic:
            {
            this->sendMidiEvent(this->midiout_01_port, this->midiout_01_status, this->midiout_01_byte1, v);
            break;
            }
        case MIDI_Sysex_Started:
            {
            this->midiout_01_sysex->push(vi);
            clearSysex = false;
            break;
            }
        case MIDI_Sysex_Complete:
            {
            this->midiout_01_sysex->push(vi);
            this->sendMidiEventList(this->midiout_01_port, this->midiout_01_sysex);
            break;
            }
        case MIDI_InvalidByte:
            {
            break;
            }
        default:
            {
            break;
            }
        }
    
        if ((bool)(clearSysex) && this->midiout_01_sysex->length > 0) {
            this->midiout_01_sysex = {};
        }
    }
    
    void midiformat_01_midimessage_set(number v) {
        this->midiout_01_midiin_set(v);
    }
    
    void midiformat_01_polypressure_set(const list& v) {
        if (v->length > 1) {
            this->midiformat_01_send3byte(
                this->midiformat_01_innerFormat_polypressure(v[0], v[1], this->midiformat_01_channel)
            );
        }
    }
    
    void midiparse_01_polypressure_set(const list& v) {
        this->midiformat_01_polypressure_set(v);
    }
    
    void midiformat_01_controlchange_set(const list& v) {
        if (v->length > 1) {
            this->midiformat_01_send3byte(
                this->midiformat_01_innerFormat_controlchange(v[0], v[1], this->midiformat_01_channel)
            );
        }
    }
    
    void midiparse_01_controlchange_set(const list& v) {
        this->midiformat_01_controlchange_set(v);
    }
    
    void midiformat_01_programchange_set(number v) {
        this->midiformat_01_send2byte(
            this->midiformat_01_innerFormat_programchange(v, this->midiformat_01_channel)
        );
    }
    
    void midiparse_01_programchange_set(number v) {
        this->midiformat_01_programchange_set(v);
    }
    
    void midiformat_01_aftertouch_set(number v) {
        this->midiformat_01_send2byte(this->midiformat_01_innerFormat_aftertouch(v, this->midiformat_01_channel));
    }
    
    void midiparse_01_aftertouch_set(number v) {
        this->midiformat_01_aftertouch_set(v);
    }
    
    void floatnum_02_input_number_set(number v) {
        this->floatnum_02_input_number = v;
        this->floatnum_02_stored = v;
        this->floatnum_02_out_set(v);
    }
    
    void midiparse_01_pitchbend_set(number v) {
        this->floatnum_02_input_number_set(v);
    }
    
    void midiparse_01_midiin_set(number midivalue) {
        list result = this->midiparse_01_parser_next(midivalue);
    
        switch ((int)result[0]) {
        case 0:
            {
            this->midiparse_01_channel_set(result[3]);
            this->midiparse_01_noteonoroff_set({result[1], result[2]});
            break;
            }
        case 1:
            {
            this->midiparse_01_channel_set(result[3]);
            this->midiparse_01_polypressure_set({result[1], result[2]});
            break;
            }
        case 2:
            {
            this->midiparse_01_channel_set(result[3]);
            this->midiparse_01_controlchange_set({result[1], result[2]});
            break;
            }
        case 3:
            {
            this->midiparse_01_channel_set(result[2]);
            this->midiparse_01_programchange_set(result[1]);
            break;
            }
        case 4:
            {
            this->midiparse_01_channel_set(result[2]);
            this->midiparse_01_aftertouch_set(result[1]);
            break;
            }
        case 5:
            {
            this->midiparse_01_channel_set(result[2]);
            this->midiparse_01_pitchbend_set(result[1]);
            break;
            }
        }
    }
    
    void midiin_01_midiout_set(number v) {
        this->midiparse_01_midiin_set(v);
    }
    
    void midiin_01_midihandler(int status, int channel, int port, ConstByteArray data, Index length) {
        RNBO_UNUSED(port);
        RNBO_UNUSED(channel);
        RNBO_UNUSED(status);
        Index i;
    
        for (i = 0; i < length; i++) {
            this->midiin_01_midiout_set(data[i]);
        }
    }
    
    void midiouthelper_midiout_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_midiout_set(v);
    }
    
    void mtof_tilde_01_perform(number midivalue, SampleValue * out, Index n) {
        auto __mtof_tilde_01_base = this->mtof_tilde_01_base;
    
        for (Index i = 0; i < n; i++) {
            out[(Index)i] = this->mtof_tilde_01_innerMtoF_next(midivalue, __mtof_tilde_01_base);
        }
    }
    
    void phasor_01_perform(const Sample * freq, SampleValue * out, Index n) {
        auto __phasor_01_sigbuf = this->phasor_01_sigbuf;
    
        for (Index i = 0; i < n; i++) {
            out[(Index)i] = this->phasor_01_ph_next(freq[(Index)i], -1);
            __phasor_01_sigbuf[(Index)i] = -1;
        }
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
    
    void dspexpr_06_perform(SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = 6.283185307179586;//#map:_###_obj_###_:1
        }
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    void signalreceive_01_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_02_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void triangle_tilde_01_perform(const Sample * phase, const Sample * duty, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            number p1 = duty[(Index)i];
            auto wrappedPhase = this->wrap(phase[(Index)i], 0., 1.);
            p1 = (p1 > 1. ? 1. : (p1 < 0. ? 0. : p1));
    
            if (wrappedPhase < p1) {
                out1[(Index)i] = wrappedPhase / p1;
                continue;
            } else {
                out1[(Index)i] = (p1 == 1. ? wrappedPhase : 1. - (wrappedPhase - p1) / (1. - p1));
                continue;
            }
        }
    }
    
    void dspexpr_03_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_03_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_04_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_05_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_06_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void voice_01_muteout_set(const list& v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_mute_set(v);
    }
    
    void voice_01_mute_bang_bang() {
        this->voice_01_muteout_set({this->voice(), 1});
    }
    
    void trigger_03_out2_bang() {
        this->voice_01_mute_bang_bang();
    }
    
    void trigger_03_out1_bang() {
        this->voice_01_voicebang_bang();
    }
    
    void trigger_03_input_bang_bang() {
        this->trigger_03_out2_bang();
        this->trigger_03_out1_bang();
    }
    
    void adsr_01_perform(
        const Sample * attack,
        const Sample * decay,
        const Sample * sustain,
        const Sample * release,
        const SampleValue * trigger_signal,
        SampleValue * out,
        Index n
    ) {
        auto __adsr_01_trigger_number = this->adsr_01_trigger_number;
        auto __adsr_01_triggerValueBuf = this->adsr_01_triggerValueBuf;
        auto __adsr_01_time = this->adsr_01_time;
        auto __adsr_01_amplitude = this->adsr_01_amplitude;
        auto __adsr_01_outval = this->adsr_01_outval;
        auto __adsr_01_startingpoint = this->adsr_01_startingpoint;
        auto __adsr_01_phase = this->adsr_01_phase;
        auto __adsr_01_legato = this->adsr_01_legato;
        auto __adsr_01_triggerBuf = this->adsr_01_triggerBuf;
        auto __adsr_01_lastTriggerVal = this->adsr_01_lastTriggerVal;
        auto __adsr_01_mspersamp = this->adsr_01_mspersamp;
        bool bangMute = false;
    
        for (Index i = 0; i < n; i++) {
            number clampedattack = (attack[(Index)i] > __adsr_01_mspersamp ? attack[(Index)i] : __adsr_01_mspersamp);
            number clampeddecay = (decay[(Index)i] > __adsr_01_mspersamp ? decay[(Index)i] : __adsr_01_mspersamp);
            number clampedrelease = (release[(Index)i] > __adsr_01_mspersamp ? release[(Index)i] : __adsr_01_mspersamp);
            number currentTriggerVal = trigger_signal[(Index)i];
    
            if ((__adsr_01_lastTriggerVal == 0.0 && currentTriggerVal != 0.0) || __adsr_01_triggerBuf[(Index)i] == 1) {
                if ((bool)(__adsr_01_legato)) {
                    if (__adsr_01_phase != 0) {
                        __adsr_01_startingpoint = __adsr_01_outval;
                    } else {
                        __adsr_01_startingpoint = 0;
                    }
                } else {
                    __adsr_01_startingpoint = 0;
                }
    
                __adsr_01_amplitude = currentTriggerVal;
                __adsr_01_phase = 1;
                __adsr_01_time = 0.0;
                bangMute = false;
            } else if (__adsr_01_lastTriggerVal != 0.0 && currentTriggerVal == 0.0) {
                if (__adsr_01_phase != 4 && __adsr_01_phase != 0) {
                    __adsr_01_phase = 4;
                    __adsr_01_amplitude = __adsr_01_outval;
                    __adsr_01_time = 0.0;
                }
            }
    
            __adsr_01_time += __adsr_01_mspersamp;
    
            if (__adsr_01_phase == 0) {
                __adsr_01_outval = 0;
            } else if (__adsr_01_phase == 1) {
                if (__adsr_01_time > clampedattack) {
                    __adsr_01_time -= clampedattack;
                    __adsr_01_phase = 2;
                    __adsr_01_outval = __adsr_01_amplitude;
                } else {
                    __adsr_01_outval = (__adsr_01_amplitude - __adsr_01_startingpoint) * __adsr_01_time / clampedattack + __adsr_01_startingpoint;
                }
            } else if (__adsr_01_phase == 2) {
                if (__adsr_01_time > clampeddecay) {
                    __adsr_01_time -= clampeddecay;
                    __adsr_01_phase = 3;
                    __adsr_01_outval = __adsr_01_amplitude * sustain[(Index)i];
                } else {
                    __adsr_01_outval = __adsr_01_amplitude * sustain[(Index)i] + (__adsr_01_amplitude - __adsr_01_amplitude * sustain[(Index)i]) * (1. - __adsr_01_time / clampeddecay);
                }
            } else if (__adsr_01_phase == 3) {
                __adsr_01_outval = __adsr_01_amplitude * sustain[(Index)i];
            } else if (__adsr_01_phase == 4) {
                if (__adsr_01_time > clampedrelease) {
                    __adsr_01_time = 0;
                    __adsr_01_phase = 0;
                    __adsr_01_outval = 0;
                    __adsr_01_amplitude = 0;
                    bangMute = true;
                } else {
                    __adsr_01_outval = __adsr_01_amplitude * (1.0 - __adsr_01_time / clampedrelease);
                }
            }
    
            out[(Index)i] = __adsr_01_outval;
            __adsr_01_triggerBuf[(Index)i] = 0;
            __adsr_01_triggerValueBuf[(Index)i] = __adsr_01_trigger_number;
            __adsr_01_lastTriggerVal = currentTriggerVal;
        }
    
        if ((bool)(bangMute)) {
            this->getEngine()->scheduleClockEventWithValue(
                this,
                -1468824490,
                this->sampsToMs((SampleIndex)(this->vs)) + this->_currentTime,
                0
            );;
        }
    
        this->adsr_01_lastTriggerVal = __adsr_01_lastTriggerVal;
        this->adsr_01_phase = __adsr_01_phase;
        this->adsr_01_startingpoint = __adsr_01_startingpoint;
        this->adsr_01_outval = __adsr_01_outval;
        this->adsr_01_amplitude = __adsr_01_amplitude;
        this->adsr_01_time = __adsr_01_time;
    }
    
    void signalreceive_07_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_08_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_08_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] + in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_10_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_sin(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_09_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = fixnan(rnbo_pow(in1[(Index)i], 3));//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_07_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_09_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_11_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] + in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_10_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_12_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_16_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_cos(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_11_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_12_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_13_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = fixnan(rnbo_pow(in1[(Index)i], in2[(Index)i]));//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_15_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_13_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_19_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_20_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_cos(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_14_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_15_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_18_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = fixnan(rnbo_pow(in1[(Index)i], in2[(Index)i]));//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_21_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_16_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_24_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_25_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_cos(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_17_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_18_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_23_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = fixnan(rnbo_pow(in1[(Index)i], in2[(Index)i]));//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_26_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_19_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_29_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_30_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_cos(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_20_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_21_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_28_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = fixnan(rnbo_pow(in1[(Index)i], in2[(Index)i]));//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_31_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_27_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] + in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_22_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] + in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_17_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] + in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_14_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] / (number)16;//#map:_###_obj_###_:1
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
    
    void dspexpr_01_perform(const Sample * in1, number in2, number in3, SampleValue * out1, Index n) {
        RNBO_UNUSED(in3);
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = (in1[(Index)i] > 2 ? 2 : (in1[(Index)i] < -2 ? -2 : in1[(Index)i]));//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_05_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
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
    
    void dspexpr_02_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void signaladder_01_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        SampleValue * out,
        Index n
    ) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out[(Index)i] = in1[(Index)i] + in2[(Index)i];
        }
    }
    
    void dspexpr_04_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void signaladder_02_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        SampleValue * out,
        Index n
    ) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out[(Index)i] = in1[(Index)i] + in2[(Index)i];
        }
    }
    
    void midiformat_01_channel_setter(number v) {
        this->midiformat_01_channel = (v > 16 ? 16 : (v < 1 ? 1 : v));
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
    
    number phasor_01_ph_next(number freq, number reset) {
        RNBO_UNUSED(reset);
        number pincr = freq * this->phasor_01_ph_conv;
    
        if (this->phasor_01_ph_currentPhase < 0.)
            this->phasor_01_ph_currentPhase = 1. + this->phasor_01_ph_currentPhase;
    
        if (this->phasor_01_ph_currentPhase > 1.)
            this->phasor_01_ph_currentPhase = this->phasor_01_ph_currentPhase - 1.;
    
        number tmp = this->phasor_01_ph_currentPhase;
        this->phasor_01_ph_currentPhase += pincr;
        return tmp;
    }
    
    void phasor_01_ph_reset() {
        this->phasor_01_ph_currentPhase = 0;
    }
    
    void phasor_01_ph_dspsetup() {
        this->phasor_01_ph_conv = (number)1 / this->sr;
    }
    
    void phasor_01_dspsetup(bool force) {
        if ((bool)(this->phasor_01_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->phasor_01_conv = (number)1 / this->samplerate();
        this->phasor_01_setupDone = true;
        this->phasor_01_ph_dspsetup();
    }
    
    list midiparse_01_parser_next(number midiin) {
        int midivalue = (int)(rnbo_trunc(midiin));
        list result = list(-1);
        number resetByte1 = false;
    
        if (midivalue > 127) {
            this->midiparse_01_parser_status = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0xFF);
            this->midiparse_01_parser_byte1 = -1;
        } else {
            switch ((int)((UBinOpInt)this->midiparse_01_parser_status & (UBinOpInt)0xF0)) {
            case 0xB0:
                {
                if (this->midiparse_01_parser_byte1 == -1) {
                    this->midiparse_01_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
                } else {
                    result = {
                        2,
                        this->midiparse_01_parser_byte1,
                        (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                        (BinOpInt)((UBinOpInt)(1 + this->midiparse_01_parser_status) & (UBinOpInt)0x0F)
                    };
    
                    resetByte1 = true;
                }
    
                break;
                }
            case 0xA0:
                {
                if (this->midiparse_01_parser_byte1 == -1) {
                    this->midiparse_01_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
                } else {
                    result = {
                        1,
                        this->midiparse_01_parser_byte1,
                        (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                        (BinOpInt)((UBinOpInt)(1 + this->midiparse_01_parser_status) & (UBinOpInt)0x0F)
                    };
    
                    resetByte1 = true;
                }
    
                break;
                }
            case 0xE0:
                {
                if (this->midiparse_01_parser_byte1 == -1) {
                    this->midiparse_01_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
                } else {
                    number pitchbend;
    
                    {
                        number val = this->midiparse_01_parser_byte1 + ((BinOpInt)(((UBinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F)) << (UBinOpInt)7));
    
                        {
                            val -= 0x2000;
                            pitchbend = val / (number)8192;
                        }
                    }
    
                    result = {
                        5,
                        pitchbend,
                        (BinOpInt)((UBinOpInt)(1 + this->midiparse_01_parser_status) & (UBinOpInt)0x0F)
                    };
    
                    resetByte1 = true;
                }
    
                break;
                }
            case 0xD0:
                {
                result = {
                    4,
                    (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                    (BinOpInt)((UBinOpInt)(1 + this->midiparse_01_parser_status) & (UBinOpInt)0x0F)
                };
    
                break;
                }
            case 0x90:
                {
                if (this->midiparse_01_parser_byte1 == -1) {
                    this->midiparse_01_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
                } else {
                    result = {
                        0,
                        this->midiparse_01_parser_byte1,
                        (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                        (BinOpInt)((UBinOpInt)(1 + this->midiparse_01_parser_status) & (UBinOpInt)0x0F)
                    };
    
                    resetByte1 = true;
                }
    
                break;
                }
            case 0xC0:
                {
                result = {
                    3,
                    (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                    (BinOpInt)((UBinOpInt)(1 + this->midiparse_01_parser_status) & (UBinOpInt)0x0F)
                };
    
                break;
                }
            case 0x80:
                {
                if (this->midiparse_01_parser_byte1 == -1) {
                    this->midiparse_01_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
                } else {
                    result = {
                        0,
                        this->midiparse_01_parser_byte1,
                        0,
                        (BinOpInt)((UBinOpInt)(1 + this->midiparse_01_parser_status) & (UBinOpInt)0x0F)
                    };
    
                    resetByte1 = true;
                }
    
                break;
                }
            default:
                {
                result = {-1};
                }
            }
        }
    
        if (result->length > 1) {
            result->push(this->midiparse_01_parser_status);
            result->push(this->midiparse_01_parser_byte1);
            result->push(midivalue);
        }
    
        if ((bool)(resetByte1)) {
            this->midiparse_01_parser_byte1 = -1;
        }
    
        return result;
    }
    
    void midiparse_01_parser_reset() {
        this->midiparse_01_parser_status = -1;
        this->midiparse_01_parser_byte1 = -1;
    }
    
    void adsr_01_dspsetup(bool force) {
        if ((bool)(this->adsr_01_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->adsr_01_mspersamp = (number)1000 / this->sr;
        this->adsr_01_setupDone = true;
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
    
    number midiformat_01_innerFormat_cclamp(number v) {
        return (v - 1 > 15 ? 15 : (v - 1 < 0 ? 0 : v - 1));
    }
    
    number midiformat_01_innerFormat_mclamp(number v) {
        return (v > 127 ? 127 : (v < 0 ? 0 : v));
    }
    
    array<number, 3> midiformat_01_innerFormat_chan3bytemsg(int status, number chan, number v0, number v1) {
        return {
            status + this->midiformat_01_innerFormat_cclamp(chan),
            this->midiformat_01_innerFormat_mclamp(v0),
            this->midiformat_01_innerFormat_mclamp(v1)
        };
    }
    
    array<number, 2> midiformat_01_innerFormat_chan2bytemsg(int status, number chan, number v) {
        return {
            status + this->midiformat_01_innerFormat_cclamp(chan),
            this->midiformat_01_innerFormat_mclamp(v)
        };
    }
    
    list midiformat_01_innerFormat_next(list data) {
        if (data->length > 1) {
            switch ((int)data[0]) {
            case 0:
                {
                if (data->length > 3) {
                    array<number, 3> o = this->midiformat_01_innerFormat_note(data[1], data[2], data[3]);
                    return {o[0], o[1], o[2]};
                }
    
                break;
                }
            case 1:
                {
                if (data->length > 3) {
                    array<number, 3> o = this->midiformat_01_innerFormat_polypressure(data[1], data[2], data[3]);
                    return {o[0], o[1], o[2]};
                }
    
                break;
                }
            case 2:
                {
                if (data->length > 3) {
                    array<number, 3> o = this->midiformat_01_innerFormat_controlchange(data[1], data[2], data[3]);
                    return {o[0], o[1], o[2]};
                }
    
                break;
                }
            case 3:
                {
                if (data->length > 2) {
                    array<number, 2> o = this->midiformat_01_innerFormat_programchange(data[1], data[2]);
                    return {o[0], o[1]};
                }
    
                break;
                }
            case 4:
                {
                if (data->length > 2) {
                    array<number, 2> o = this->midiformat_01_innerFormat_aftertouch(data[1], data[2]);
                    return {o[0], o[1]};
                }
    
                break;
                }
            case 5:
                {
                if (data->length > 2) {
                    array<number, 3> o = this->midiformat_01_innerFormat_pitchbend(data[1], data[2]);
                    return {o[0], o[1], o[2]};
                }
    
                break;
                }
            default:
                {
                break;
                }
            }
        }
    
        return {};
    }
    
    array<number, 3> midiformat_01_innerFormat_note(number pitch, number velocity, number channel) {
        return this->midiformat_01_innerFormat_chan3bytemsg(0x90, channel, pitch, velocity);
    }
    
    array<number, 3> midiformat_01_innerFormat_noterelease(number pitch, number velocity, number channel) {
        return this->midiformat_01_innerFormat_chan3bytemsg(0x80, channel, pitch, velocity);
    }
    
    array<number, 3> midiformat_01_innerFormat_pitchbend(number v, number channel) {
        const int stat = (const int)(0xE0 + this->midiformat_01_innerFormat_cclamp(channel));
        int i;
    
        {
            {
                v = (v > 1 ? 1 : (v < -1 ? -1 : v));
    
                if (v < 0) {
                    i = 8192 * v + 8192 + 0.5;
                } else {
                    i = 8191 * v + 8192 + 0.5;
                }
            }
        }
    
        return this->midiformat_01_innerFormat_chan3bytemsg(
            0xE0,
            channel,
            (BinOpInt)((UBinOpInt)i & (UBinOpInt)0x7F),
            (BinOpInt)((UBinOpInt)((UBinOpInt)i >> (UBinOpInt)7) & (UBinOpInt)0x7F)
        );
    }
    
    array<number, 3> midiformat_01_innerFormat_polypressure(number pressure, number pitch, number channel) {
        return this->midiformat_01_innerFormat_chan3bytemsg(0xA0, channel, pressure, pitch);
    }
    
    array<number, 3> midiformat_01_innerFormat_controlchange(number num, number value, number channel) {
        return this->midiformat_01_innerFormat_chan3bytemsg(0xB0, channel, num, value);
    }
    
    array<number, 2> midiformat_01_innerFormat_programchange(number num, number channel) {
        return this->midiformat_01_innerFormat_chan2bytemsg(0xC0, channel, num);
    }
    
    array<number, 2> midiformat_01_innerFormat_aftertouch(number value, number channel) {
        return this->midiformat_01_innerFormat_chan2bytemsg(0xD0, channel, value);
    }
    
    void midiformat_01_innerFormat_reset() {}
    
    void midiformat_01_send3byte(array<number, 3> bytes) {
        this->midiformat_01_midimessage_set(bytes[0]);
        this->midiformat_01_midimessage_set(bytes[1]);
        this->midiformat_01_midimessage_set(bytes[2]);
    }
    
    void midiformat_01_send2byte(array<number, 2> bytes) {
        this->midiformat_01_midimessage_set(bytes[0]);
        this->midiformat_01_midimessage_set(bytes[1]);
    }
    
    void midiouthelper_sendMidi(number v) {
        this->midiouthelper_midiout_set(v);
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
        dspexpr_01_in2 = -2;
        dspexpr_01_in3 = 2;
        midiin_01_port = 0;
        dspexpr_02_in1 = 0;
        dspexpr_02_in2 = 0;
        poltocar_tilde_01_radius = 0;
        poltocar_tilde_01_angle = 0;
        floatnum_01_input_number = 0;
        floatnum_01_value = 0;
        mtof_tilde_01_midivalue = 0;
        mtof_tilde_01_base = 440;
        expr_01_in1 = 0;
        expr_01_in2 = 0;
        expr_01_out1 = 0;
        phasor_01_freq = 0;
        unpack_01_out1 = 0;
        unpack_01_out2 = 0;
        triangle_tilde_01_phase = 0;
        triangle_tilde_01_duty = 1;
        dspexpr_03_in1 = 0;
        dspexpr_03_in2 = 0;
        adsr_01_trigger_number = 0;
        adsr_01_attack = 10;
        adsr_01_decay = 10;
        adsr_01_sustain = 1;
        adsr_01_release = 10;
        adsr_01_legato = 0;
        ip_01_value = 0;
        ip_01_impulse = 0;
        expr_02_in1 = 0;
        expr_02_in2 = 127;
        expr_02_out1 = 0;
        dspexpr_04_in1 = 0;
        dspexpr_04_in2 = 0;
        dspexpr_05_in1 = 0;
        dspexpr_05_in2 = 0;
        join_01_in0 = { 0 };
        join_01_in1 = { 0 };
        join_01_in2 = { 0 };
        join_01_in3 = { 0 };
        join_01_in4 = { 0 };
        voice_01_mute_number = 0;
        floatnum_02_input_number = 0;
        floatnum_02_value = 0;
        expr_03_in1 = 0;
        expr_03_in2 = 2;
        expr_03_out1 = 0;
        receive_01_output_number = 0;
        midiformat_01_channel = 0;
        midiformat_01_channel_setter(midiformat_01_channel);
        midiformat_01_pitchbend = 64;
        dspexpr_07_in1 = 0;
        dspexpr_07_in2 = 1;
        dspexpr_08_in1 = 0;
        dspexpr_08_in2 = 0;
        dspexpr_09_in1 = 0;
        dspexpr_09_in2 = 3;
        dspexpr_10_in1 = 0;
        cartopol_tilde_01_x = 0;
        cartopol_tilde_01_y = 0;
        midiout_01_port = 0;
        dspexpr_11_in1 = 0;
        dspexpr_11_in2 = 0;
        dspexpr_12_in1 = 0;
        dspexpr_12_in2 = 1;
        dspexpr_13_in1 = 0;
        dspexpr_13_in2 = 1;
        dspexpr_14_in1 = 0;
        dspexpr_14_in2 = 16;
        dspexpr_15_in1 = 0;
        dspexpr_15_in2 = 13;
        dspexpr_16_in1 = 0;
        dspexpr_17_in1 = 0;
        dspexpr_17_in2 = 0;
        dspexpr_18_in1 = 0;
        dspexpr_18_in2 = 1;
        dspexpr_19_in1 = 0;
        dspexpr_19_in2 = 2;
        dspexpr_20_in1 = 0;
        dspexpr_21_in1 = 0;
        dspexpr_21_in2 = -5;
        dspexpr_22_in1 = 0;
        dspexpr_22_in2 = 0;
        dspexpr_23_in1 = 0;
        dspexpr_23_in2 = 1;
        dspexpr_24_in1 = 0;
        dspexpr_24_in2 = 3;
        dspexpr_25_in1 = 0;
        dspexpr_26_in1 = 0;
        dspexpr_26_in2 = -2;
        dspexpr_27_in1 = 0;
        dspexpr_27_in2 = 0;
        dspexpr_28_in1 = 0;
        dspexpr_28_in2 = 1;
        dspexpr_29_in1 = 0;
        dspexpr_29_in2 = 4;
        dspexpr_30_in1 = 0;
        dspexpr_31_in1 = 0;
        dspexpr_31_in2 = -1;
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
        floatnum_01_stored = 0;
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
        phasor_01_sigbuf = nullptr;
        phasor_01_lastLockedPhase = 0;
        phasor_01_conv = 0;
        phasor_01_ph_currentPhase = 0;
        phasor_01_ph_conv = 0;
        phasor_01_setupDone = false;
        midiparse_01_parser_status = -1;
        midiparse_01_parser_byte1 = -1;
        adsr_01_phase = 3;
        adsr_01_mspersamp = 0;
        adsr_01_time = 0;
        adsr_01_lastTriggerVal = 0;
        adsr_01_amplitude = 0;
        adsr_01_outval = 0;
        adsr_01_startingpoint = 0;
        adsr_01_triggerBuf = nullptr;
        adsr_01_triggerValueBuf = nullptr;
        adsr_01_setupDone = false;
        ip_01_lastIndex = 0;
        ip_01_lastValue = 0;
        ip_01_resetCount = 0;
        ip_01_sigbuf = nullptr;
        ip_01_setupDone = false;
        floatnum_02_stored = 0;
        midiout_01_currentStatus = -1;
        midiout_01_status = -1;
        midiout_01_byte1 = -1;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        number dspexpr_01_in1;
        number dspexpr_01_in2;
        number dspexpr_01_in3;
        number midiin_01_port;
        number dspexpr_02_in1;
        number dspexpr_02_in2;
        number poltocar_tilde_01_radius;
        number poltocar_tilde_01_angle;
        number floatnum_01_input_number;
        number floatnum_01_value;
        number mtof_tilde_01_midivalue;
        list mtof_tilde_01_scale;
        list mtof_tilde_01_map;
        number mtof_tilde_01_base;
        number expr_01_in1;
        number expr_01_in2;
        number expr_01_out1;
        number phasor_01_freq;
        number unpack_01_out1;
        number unpack_01_out2;
        number triangle_tilde_01_phase;
        number triangle_tilde_01_duty;
        number dspexpr_03_in1;
        number dspexpr_03_in2;
        number adsr_01_trigger_number;
        number adsr_01_attack;
        number adsr_01_decay;
        number adsr_01_sustain;
        number adsr_01_release;
        number adsr_01_legato;
        number ip_01_value;
        number ip_01_impulse;
        number expr_02_in1;
        number expr_02_in2;
        number expr_02_out1;
        number dspexpr_04_in1;
        number dspexpr_04_in2;
        number dspexpr_05_in1;
        number dspexpr_05_in2;
        list join_01_in0;
        list join_01_in1;
        list join_01_in2;
        list join_01_in3;
        list join_01_in4;
        number voice_01_mute_number;
        number floatnum_02_input_number;
        number floatnum_02_value;
        number expr_03_in1;
        number expr_03_in2;
        number expr_03_out1;
        number receive_01_output_number;
        list receive_01_output_list;
        number midiformat_01_channel;
        number midiformat_01_pitchbend;
        number dspexpr_07_in1;
        number dspexpr_07_in2;
        number dspexpr_08_in1;
        number dspexpr_08_in2;
        number dspexpr_09_in1;
        number dspexpr_09_in2;
        number dspexpr_10_in1;
        number cartopol_tilde_01_x;
        number cartopol_tilde_01_y;
        number midiout_01_port;
        number dspexpr_11_in1;
        number dspexpr_11_in2;
        number dspexpr_12_in1;
        number dspexpr_12_in2;
        number dspexpr_13_in1;
        number dspexpr_13_in2;
        number dspexpr_14_in1;
        number dspexpr_14_in2;
        number dspexpr_15_in1;
        number dspexpr_15_in2;
        number dspexpr_16_in1;
        number dspexpr_17_in1;
        number dspexpr_17_in2;
        number dspexpr_18_in1;
        number dspexpr_18_in2;
        number dspexpr_19_in1;
        number dspexpr_19_in2;
        number dspexpr_20_in1;
        number dspexpr_21_in1;
        number dspexpr_21_in2;
        number dspexpr_22_in1;
        number dspexpr_22_in2;
        number dspexpr_23_in1;
        number dspexpr_23_in2;
        number dspexpr_24_in1;
        number dspexpr_24_in2;
        number dspexpr_25_in1;
        number dspexpr_26_in1;
        number dspexpr_26_in2;
        number dspexpr_27_in1;
        number dspexpr_27_in2;
        number dspexpr_28_in1;
        number dspexpr_28_in2;
        number dspexpr_29_in1;
        number dspexpr_29_in2;
        number dspexpr_30_in1;
        number dspexpr_31_in1;
        number dspexpr_31_in2;
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
        number floatnum_01_stored;
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
        signal phasor_01_sigbuf;
        number phasor_01_lastLockedPhase;
        number phasor_01_conv;
        number phasor_01_ph_currentPhase;
        number phasor_01_ph_conv;
        bool phasor_01_setupDone;
        int midiparse_01_parser_status;
        int midiparse_01_parser_byte1;
        Int adsr_01_phase;
        number adsr_01_mspersamp;
        number adsr_01_time;
        number adsr_01_lastTriggerVal;
        number adsr_01_amplitude;
        number adsr_01_outval;
        number adsr_01_startingpoint;
        signal adsr_01_triggerBuf;
        signal adsr_01_triggerValueBuf;
        bool adsr_01_setupDone;
        SampleIndex ip_01_lastIndex;
        number ip_01_lastValue;
        SampleIndex ip_01_resetCount;
        signal ip_01_sigbuf;
        bool ip_01_setupDone;
        number floatnum_02_stored;
        int midiout_01_currentStatus;
        int midiout_01_status;
        int midiout_01_byte1;
        list midiout_01_sysex;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

rnbomatic()
{
}

~rnbomatic()
{
    for (int i = 0; i < 32; i++) {
        delete p_01[i];
    }
}

rnbomatic* getTopLevelPatcher() {
    return this;
}

void cancelClockEvents()
{
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
    return 1;
}

void processMidiEvent(MillisecondTime time, int port, ConstByteArray data, Index length) {
    this->updateTime(time);
    this->midiin_02_midihandler(data[0] & 240, (data[0] & 15) + 1, port, data, length);
}

Index getNumMidiOutputPorts() const {
    return 1;
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
    const SampleValue * Rotation = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
    const SampleValue * Gain = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
    const SampleValue * Release = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
    const SampleValue * Sustain = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
    const SampleValue * Decay = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
    const SampleValue * Attack = (numInputs >= 6 && inputs[5] ? inputs[5] : this->zeroBuffer);
    const SampleValue * Ramp = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
    const SampleValue * X = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
    const SampleValue * Yp4 = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
    const SampleValue * Yp3 = (numInputs >= 10 && inputs[9] ? inputs[9] : this->zeroBuffer);
    const SampleValue * Yp2 = (numInputs >= 11 && inputs[10] ? inputs[10] : this->zeroBuffer);
    const SampleValue * Yp1 = (numInputs >= 12 && inputs[11] ? inputs[11] : this->zeroBuffer);
    const SampleValue * DeltaY = (numInputs >= 13 && inputs[12] ? inputs[12] : this->zeroBuffer);
    const SampleValue * DeltaX = (numInputs >= 14 && inputs[13] ? inputs[13] : this->zeroBuffer);
    const SampleValue * Ye4 = (numInputs >= 15 && inputs[14] ? inputs[14] : this->zeroBuffer);
    const SampleValue * Ye3 = (numInputs >= 16 && inputs[15] ? inputs[15] : this->zeroBuffer);
    const SampleValue * Ye2 = (numInputs >= 17 && inputs[16] ? inputs[16] : this->zeroBuffer);
    const SampleValue * Ye1 = (numInputs >= 18 && inputs[17] ? inputs[17] : this->zeroBuffer);
    const SampleValue * Y4 = (numInputs >= 19 && inputs[18] ? inputs[18] : this->zeroBuffer);
    const SampleValue * Y3 = (numInputs >= 20 && inputs[19] ? inputs[19] : this->zeroBuffer);
    const SampleValue * Y2 = (numInputs >= 21 && inputs[20] ? inputs[20] : this->zeroBuffer);
    const SampleValue * Y1 = (numInputs >= 22 && inputs[21] ? inputs[21] : this->zeroBuffer);
    SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
    SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
    this->paramtilde_01_perform(Rotation, this->signals[0], n);
    this->dspexpr_32_perform(this->signals[0], this->signals[1], n);
    this->signalsend_03_perform(this->signals[1], this->signals[0], n);
    this->paramtilde_02_perform(Gain, this->signals[1], n);
    this->dspexpr_33_perform(this->signals[1], this->signals[2], n);
    this->paramtilde_03_perform(Release, this->signals[1], n);
    this->signalsend_06_perform(this->signals[1], this->signals[3], n);
    this->paramtilde_04_perform(Sustain, this->signals[1], n);
    this->dspexpr_34_perform(this->signals[1], this->signals[4], n);
    this->dspexpr_37_perform(this->signals[4], this->dspexpr_37_in2, this->signals[1], n);
    this->signalsend_02_perform(this->signals[1], this->signals[4], n);
    this->paramtilde_05_perform(Decay, this->signals[1], n);
    this->signalsend_04_perform(this->signals[1], this->signals[5], n);
    this->paramtilde_06_perform(Attack, this->signals[1], n);
    this->signalsend_05_perform(this->signals[1], this->signals[6], n);
    this->paramtilde_07_perform(Ramp, this->signals[1], n);
    this->dspexpr_35_perform(this->signals[1], this->dspexpr_35_in2, this->signals[7], n);
    this->signalsend_01_perform(this->signals[7], this->signals[1], n);
    this->paramtilde_08_perform(X, this->signals[7], n);
    this->signalsend_07_perform(this->signals[7], this->signals[8], n);
    this->paramtilde_09_perform(Yp4, this->signals[7], n);
    this->signalsend_08_perform(this->signals[7], this->signals[9], n);
    this->paramtilde_10_perform(Yp3, this->signals[7], n);
    this->signalsend_09_perform(this->signals[7], this->signals[10], n);
    this->paramtilde_11_perform(Yp2, this->signals[7], n);
    this->signalsend_10_perform(this->signals[7], this->signals[11], n);
    this->paramtilde_12_perform(Yp1, this->signals[7], n);
    this->signalsend_11_perform(this->signals[7], this->signals[12], n);
    this->paramtilde_13_perform(DeltaY, this->signals[7], n);
    this->dspexpr_39_perform(this->signals[7], this->signals[13], n);
    this->signalsend_12_perform(this->signals[13], this->signals[7], n);
    this->paramtilde_14_perform(DeltaX, this->signals[13], n);
    this->dspexpr_40_perform(this->signals[13], this->signals[14], n);
    this->signalsend_13_perform(this->signals[14], this->signals[13], n);
    this->paramtilde_15_perform(Ye4, this->signals[14], n);
    this->signalsend_14_perform(this->signals[14], this->signals[15], n);
    this->paramtilde_16_perform(Ye3, this->signals[14], n);
    this->signalsend_15_perform(this->signals[14], this->signals[16], n);
    this->paramtilde_17_perform(Ye2, this->signals[14], n);
    this->signalsend_16_perform(this->signals[14], this->signals[17], n);
    this->paramtilde_18_perform(Ye1, this->signals[14], n);
    this->signalsend_17_perform(this->signals[14], this->signals[18], n);
    this->paramtilde_19_perform(Y4, this->signals[14], n);
    this->signalsend_18_perform(this->signals[14], this->signals[19], n);
    this->paramtilde_20_perform(Y3, this->signals[14], n);
    this->signalsend_19_perform(this->signals[14], this->signals[20], n);
    this->paramtilde_21_perform(Y2, this->signals[14], n);
    this->signalsend_20_perform(this->signals[14], this->signals[21], n);
    this->paramtilde_22_perform(Y1, this->signals[14], n);
    this->signalsend_21_perform(this->signals[14], this->signals[22], n);

    this->p_01_perform(
        this->signals[6],
        this->signals[1],
        this->signals[0],
        this->signals[5],
        this->signals[4],
        this->signals[3],
        this->signals[8],
        this->signals[13],
        this->signals[7],
        this->signals[12],
        this->signals[22],
        this->signals[18],
        this->signals[11],
        this->signals[21],
        this->signals[17],
        this->signals[10],
        this->signals[20],
        this->signals[16],
        this->signals[9],
        this->signals[19],
        this->signals[15],
        this->signals[14],
        this->signals[23],
        n
    );

    this->dspexpr_36_perform(this->signals[14], this->signals[2], out1, n);
    this->dspexpr_38_perform(this->signals[23], this->signals[2], out2, n);
    this->stackprotect_perform(n);
    this->globaltransport_advance();
    this->audioProcessSampleCount += this->vs;
}

void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
    if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
        Index i;

        for (i = 0; i < 24; i++) {
            this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
        }

        this->paramtilde_01_sigbuf = resizeSignal(this->paramtilde_01_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_02_sigbuf = resizeSignal(this->paramtilde_02_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_03_sigbuf = resizeSignal(this->paramtilde_03_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_04_sigbuf = resizeSignal(this->paramtilde_04_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_05_sigbuf = resizeSignal(this->paramtilde_05_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_06_sigbuf = resizeSignal(this->paramtilde_06_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_07_sigbuf = resizeSignal(this->paramtilde_07_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_08_sigbuf = resizeSignal(this->paramtilde_08_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_09_sigbuf = resizeSignal(this->paramtilde_09_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_10_sigbuf = resizeSignal(this->paramtilde_10_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_11_sigbuf = resizeSignal(this->paramtilde_11_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_12_sigbuf = resizeSignal(this->paramtilde_12_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_13_sigbuf = resizeSignal(this->paramtilde_13_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_14_sigbuf = resizeSignal(this->paramtilde_14_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_15_sigbuf = resizeSignal(this->paramtilde_15_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_16_sigbuf = resizeSignal(this->paramtilde_16_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_17_sigbuf = resizeSignal(this->paramtilde_17_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_18_sigbuf = resizeSignal(this->paramtilde_18_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_19_sigbuf = resizeSignal(this->paramtilde_19_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_20_sigbuf = resizeSignal(this->paramtilde_20_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_21_sigbuf = resizeSignal(this->paramtilde_21_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_22_sigbuf = resizeSignal(this->paramtilde_22_sigbuf, this->maxvs, maxBlockSize);
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

    this->paramtilde_01_dspsetup(forceDSPSetup);
    this->paramtilde_02_dspsetup(forceDSPSetup);
    this->paramtilde_03_dspsetup(forceDSPSetup);
    this->paramtilde_04_dspsetup(forceDSPSetup);
    this->paramtilde_05_dspsetup(forceDSPSetup);
    this->paramtilde_06_dspsetup(forceDSPSetup);
    this->paramtilde_07_dspsetup(forceDSPSetup);
    this->paramtilde_08_dspsetup(forceDSPSetup);
    this->paramtilde_09_dspsetup(forceDSPSetup);
    this->paramtilde_10_dspsetup(forceDSPSetup);
    this->paramtilde_11_dspsetup(forceDSPSetup);
    this->paramtilde_12_dspsetup(forceDSPSetup);
    this->paramtilde_13_dspsetup(forceDSPSetup);
    this->paramtilde_14_dspsetup(forceDSPSetup);
    this->paramtilde_15_dspsetup(forceDSPSetup);
    this->paramtilde_16_dspsetup(forceDSPSetup);
    this->paramtilde_17_dspsetup(forceDSPSetup);
    this->paramtilde_18_dspsetup(forceDSPSetup);
    this->paramtilde_19_dspsetup(forceDSPSetup);
    this->paramtilde_20_dspsetup(forceDSPSetup);
    this->paramtilde_21_dspsetup(forceDSPSetup);
    this->paramtilde_22_dspsetup(forceDSPSetup);
    this->globaltransport_dspsetup(forceDSPSetup);

    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->prepareToProcess(sampleRate, maxBlockSize, force);
    }

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
        return addressOf(this->RNBODefaultMtofLookupTable256);
        break;
        }
    default:
        {
        return nullptr;
        }
    }
}

DataRefIndex getNumDataRefs() const {
    return 1;
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
    case 0:
        {
        this->fillRNBODefaultMtofLookupTable256(ref);
        break;
        }
    }
}

void processDataViewUpdate(DataRefIndex index, MillisecondTime time) {
    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->processDataViewUpdate(index, time);
    }
}

void initialize() {
    this->RNBODefaultMtofLookupTable256 = initDataRef("RNBODefaultMtofLookupTable256", true, nullptr, "buffer~");
    this->assign_defaults();
    this->setState();
    this->RNBODefaultMtofLookupTable256->setIndex(0);
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

void setState() {
    for (Index i = 0; i < 32; i++) {
        this->p_01[(Index)i] = new RNBOSubpatcher_149();
        this->p_01[(Index)i]->setEngineAndPatcher(this->getEngine(), this);
        this->p_01[(Index)i]->initialize();
        this->p_01[(Index)i]->setParameterOffset(this->getParameterOffset(this->p_01[0]));
        this->p_01[(Index)i]->setVoiceIndex(i + 1);
    }
}

void getPreset(PatcherStateInterface& preset) {
    preset["__presetid"] = "rnbo";
    this->param_01_getPresetValue(getSubState(preset, "PitchBendRange"));
    this->param_02_getPresetValue(getSubState(preset, "PitchBend"));

    for (Index i = 0; i < 32; i++)
        this->p_01[i]->getPreset(getSubStateAt(getSubState(preset, "__sps"), "Heart", i));
}

void setPreset(MillisecondTime time, PatcherStateInterface& preset) {
    this->updateTime(time);
    this->param_01_setPresetValue(getSubState(preset, "PitchBendRange"));
    this->param_02_setPresetValue(getSubState(preset, "PitchBend"));
}

void processTempoEvent(MillisecondTime time, Tempo tempo) {
    this->updateTime(time);

    if (this->globaltransport_setTempo(tempo, false)) {
        for (Index i = 0; i < 32; i++) {
            this->p_01[i]->processTempoEvent(time, tempo);
        }
    }
}

void processTransportEvent(MillisecondTime time, TransportState state) {
    this->updateTime(time);

    if (this->globaltransport_setState(state, false)) {
        for (Index i = 0; i < 32; i++) {
            this->p_01[i]->processTransportEvent(time, state);
        }
    }
}

void processBeatTimeEvent(MillisecondTime time, BeatTime beattime) {
    this->updateTime(time);

    if (this->globaltransport_setBeatTime(beattime, false)) {
        for (Index i = 0; i < 32; i++) {
            this->p_01[i]->processBeatTimeEvent(time, beattime);
        }
    }
}

void onSampleRateChanged(double ) {}

void processTimeSignatureEvent(MillisecondTime time, int numerator, int denominator) {
    this->updateTime(time);

    if (this->globaltransport_setTimeSignature(numerator, denominator, false)) {
        for (Index i = 0; i < 32; i++) {
            this->p_01[i]->processTimeSignatureEvent(time, numerator, denominator);
        }
    }
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
        this->paramtilde_01_value_set(v);
        break;
        }
    case 3:
        {
        this->paramtilde_02_value_set(v);
        break;
        }
    case 4:
        {
        this->paramtilde_03_value_set(v);
        break;
        }
    case 5:
        {
        this->paramtilde_04_value_set(v);
        break;
        }
    case 6:
        {
        this->paramtilde_05_value_set(v);
        break;
        }
    case 7:
        {
        this->paramtilde_06_value_set(v);
        break;
        }
    case 8:
        {
        this->paramtilde_07_value_set(v);
        break;
        }
    case 9:
        {
        this->paramtilde_08_value_set(v);
        break;
        }
    case 10:
        {
        this->paramtilde_09_value_set(v);
        break;
        }
    case 11:
        {
        this->paramtilde_10_value_set(v);
        break;
        }
    case 12:
        {
        this->paramtilde_11_value_set(v);
        break;
        }
    case 13:
        {
        this->paramtilde_12_value_set(v);
        break;
        }
    case 14:
        {
        this->paramtilde_13_value_set(v);
        break;
        }
    case 15:
        {
        this->paramtilde_14_value_set(v);
        break;
        }
    case 16:
        {
        this->paramtilde_15_value_set(v);
        break;
        }
    case 17:
        {
        this->paramtilde_16_value_set(v);
        break;
        }
    case 18:
        {
        this->paramtilde_17_value_set(v);
        break;
        }
    case 19:
        {
        this->paramtilde_18_value_set(v);
        break;
        }
    case 20:
        {
        this->paramtilde_19_value_set(v);
        break;
        }
    case 21:
        {
        this->paramtilde_20_value_set(v);
        break;
        }
    case 22:
        {
        this->paramtilde_21_value_set(v);
        break;
        }
    case 23:
        {
        this->paramtilde_22_value_set(v);
        break;
        }
    case 24:
        {
        // namedAudioIn: Rotation
        break;
        }
    case 25:
        {
        // namedAudioIn: Gain
        break;
        }
    case 26:
        {
        // namedAudioIn: Release
        break;
        }
    case 27:
        {
        // namedAudioIn: Sustain
        break;
        }
    case 28:
        {
        // namedAudioIn: Decay
        break;
        }
    case 29:
        {
        // namedAudioIn: Attack
        break;
        }
    case 30:
        {
        // namedAudioIn: Ramp
        break;
        }
    case 31:
        {
        // namedAudioIn: X
        break;
        }
    case 32:
        {
        // namedAudioIn: Yp4
        break;
        }
    case 33:
        {
        // namedAudioIn: Yp3
        break;
        }
    case 34:
        {
        // namedAudioIn: Yp2
        break;
        }
    case 35:
        {
        // namedAudioIn: Yp1
        break;
        }
    case 36:
        {
        // namedAudioIn: DeltaY
        break;
        }
    case 37:
        {
        // namedAudioIn: DeltaX
        break;
        }
    case 38:
        {
        // namedAudioIn: Ye4
        break;
        }
    case 39:
        {
        // namedAudioIn: Ye3
        break;
        }
    case 40:
        {
        // namedAudioIn: Ye2
        break;
        }
    case 41:
        {
        // namedAudioIn: Ye1
        break;
        }
    case 42:
        {
        // namedAudioIn: Y4
        break;
        }
    case 43:
        {
        // namedAudioIn: Y3
        break;
        }
    case 44:
        {
        // namedAudioIn: Y2
        break;
        }
    case 45:
        {
        // namedAudioIn: Y1
        break;
        }
    default:
        {
        index -= 46;

        if (index < this->p_01[0]->getNumParameters())
            this->p_01[0]->setPolyParameterValue((PatcherInterface**)this->p_01, index, v, time);

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
        return this->paramtilde_01_value;
        }
    case 3:
        {
        return this->paramtilde_02_value;
        }
    case 4:
        {
        return this->paramtilde_03_value;
        }
    case 5:
        {
        return this->paramtilde_04_value;
        }
    case 6:
        {
        return this->paramtilde_05_value;
        }
    case 7:
        {
        return this->paramtilde_06_value;
        }
    case 8:
        {
        return this->paramtilde_07_value;
        }
    case 9:
        {
        return this->paramtilde_08_value;
        }
    case 10:
        {
        return this->paramtilde_09_value;
        }
    case 11:
        {
        return this->paramtilde_10_value;
        }
    case 12:
        {
        return this->paramtilde_11_value;
        }
    case 13:
        {
        return this->paramtilde_12_value;
        }
    case 14:
        {
        return this->paramtilde_13_value;
        }
    case 15:
        {
        return this->paramtilde_14_value;
        }
    case 16:
        {
        return this->paramtilde_15_value;
        }
    case 17:
        {
        return this->paramtilde_16_value;
        }
    case 18:
        {
        return this->paramtilde_17_value;
        }
    case 19:
        {
        return this->paramtilde_18_value;
        }
    case 20:
        {
        return this->paramtilde_19_value;
        }
    case 21:
        {
        return this->paramtilde_20_value;
        }
    case 22:
        {
        return this->paramtilde_21_value;
        }
    case 23:
        {
        return this->paramtilde_22_value;
        }
    case 24:
        {
        // namedAudioIn: Rotation
        return 0;
        }
    case 25:
        {
        // namedAudioIn: Gain
        return 0;
        }
    case 26:
        {
        // namedAudioIn: Release
        return 0;
        }
    case 27:
        {
        // namedAudioIn: Sustain
        return 0;
        }
    case 28:
        {
        // namedAudioIn: Decay
        return 0;
        }
    case 29:
        {
        // namedAudioIn: Attack
        return 0;
        }
    case 30:
        {
        // namedAudioIn: Ramp
        return 0;
        }
    case 31:
        {
        // namedAudioIn: X
        return 0;
        }
    case 32:
        {
        // namedAudioIn: Yp4
        return 0;
        }
    case 33:
        {
        // namedAudioIn: Yp3
        return 0;
        }
    case 34:
        {
        // namedAudioIn: Yp2
        return 0;
        }
    case 35:
        {
        // namedAudioIn: Yp1
        return 0;
        }
    case 36:
        {
        // namedAudioIn: DeltaY
        return 0;
        }
    case 37:
        {
        // namedAudioIn: DeltaX
        return 0;
        }
    case 38:
        {
        // namedAudioIn: Ye4
        return 0;
        }
    case 39:
        {
        // namedAudioIn: Ye3
        return 0;
        }
    case 40:
        {
        // namedAudioIn: Ye2
        return 0;
        }
    case 41:
        {
        // namedAudioIn: Ye1
        return 0;
        }
    case 42:
        {
        // namedAudioIn: Y4
        return 0;
        }
    case 43:
        {
        // namedAudioIn: Y3
        return 0;
        }
    case 44:
        {
        // namedAudioIn: Y2
        return 0;
        }
    case 45:
        {
        // namedAudioIn: Y1
        return 0;
        }
    default:
        {
        index -= 46;

        if (index < this->p_01[0]->getNumParameters())
            return this->p_01[0]->getPolyParameterValue((PatcherInterface**)this->p_01, index);

        return 0;
        }
    }
}

ParameterIndex getNumSignalInParameters() const {
    return 22;
}

ParameterIndex getNumSignalOutParameters() const {
    return 0;
}

ParameterIndex getNumParameters() const {
    return 46 + this->p_01[0]->getNumParameters();
}

ConstCharPointer getParameterName(ParameterIndex index) const {
    switch (index) {
    case 0:
        {
        return "PitchBendRange";
        }
    case 1:
        {
        return "PitchBend";
        }
    case 2:
        {
        return "Rotation";
        }
    case 3:
        {
        return "Gain";
        }
    case 4:
        {
        return "Release";
        }
    case 5:
        {
        return "Sustain";
        }
    case 6:
        {
        return "Decay";
        }
    case 7:
        {
        return "Attack";
        }
    case 8:
        {
        return "Ramp";
        }
    case 9:
        {
        return "X";
        }
    case 10:
        {
        return "Yp4";
        }
    case 11:
        {
        return "Yp3";
        }
    case 12:
        {
        return "Yp2";
        }
    case 13:
        {
        return "Yp1";
        }
    case 14:
        {
        return "DeltaY";
        }
    case 15:
        {
        return "DeltaX";
        }
    case 16:
        {
        return "Ye4";
        }
    case 17:
        {
        return "Ye3";
        }
    case 18:
        {
        return "Ye2";
        }
    case 19:
        {
        return "Ye1";
        }
    case 20:
        {
        return "Y4";
        }
    case 21:
        {
        return "Y3";
        }
    case 22:
        {
        return "Y2";
        }
    case 23:
        {
        return "Y1";
        }
    case 24:
        {
        return "Rotation";
        }
    case 25:
        {
        return "Gain";
        }
    case 26:
        {
        return "Release";
        }
    case 27:
        {
        return "Sustain";
        }
    case 28:
        {
        return "Decay";
        }
    case 29:
        {
        return "Attack";
        }
    case 30:
        {
        return "Ramp";
        }
    case 31:
        {
        return "X";
        }
    case 32:
        {
        return "Yp4";
        }
    case 33:
        {
        return "Yp3";
        }
    case 34:
        {
        return "Yp2";
        }
    case 35:
        {
        return "Yp1";
        }
    case 36:
        {
        return "DeltaY";
        }
    case 37:
        {
        return "DeltaX";
        }
    case 38:
        {
        return "Ye4";
        }
    case 39:
        {
        return "Ye3";
        }
    case 40:
        {
        return "Ye2";
        }
    case 41:
        {
        return "Ye1";
        }
    case 42:
        {
        return "Y4";
        }
    case 43:
        {
        return "Y3";
        }
    case 44:
        {
        return "Y2";
        }
    case 45:
        {
        return "Y1";
        }
    default:
        {
        index -= 46;

        if (index < this->p_01[0]->getNumParameters()) {
            {
                return this->p_01[0]->getParameterName(index);
            }
        }

        return "bogus";
        }
    }
}

ConstCharPointer getParameterId(ParameterIndex index) const {
    switch (index) {
    case 0:
        {
        return "PitchBendRange";
        }
    case 1:
        {
        return "PitchBend";
        }
    case 2:
        {
        return "Rotation";
        }
    case 3:
        {
        return "Gain";
        }
    case 4:
        {
        return "Release";
        }
    case 5:
        {
        return "Sustain";
        }
    case 6:
        {
        return "Decay";
        }
    case 7:
        {
        return "Attack";
        }
    case 8:
        {
        return "Ramp";
        }
    case 9:
        {
        return "X";
        }
    case 10:
        {
        return "Yp4";
        }
    case 11:
        {
        return "Yp3";
        }
    case 12:
        {
        return "Yp2";
        }
    case 13:
        {
        return "Yp1";
        }
    case 14:
        {
        return "DeltaY";
        }
    case 15:
        {
        return "DeltaX";
        }
    case 16:
        {
        return "Ye4";
        }
    case 17:
        {
        return "Ye3";
        }
    case 18:
        {
        return "Ye2";
        }
    case 19:
        {
        return "Ye1";
        }
    case 20:
        {
        return "Y4";
        }
    case 21:
        {
        return "Y3";
        }
    case 22:
        {
        return "Y2";
        }
    case 23:
        {
        return "Y1";
        }
    case 24:
        {
        return "/signals/Rotation";
        }
    case 25:
        {
        return "/signals/Gain";
        }
    case 26:
        {
        return "/signals/Release";
        }
    case 27:
        {
        return "/signals/Sustain";
        }
    case 28:
        {
        return "/signals/Decay";
        }
    case 29:
        {
        return "/signals/Attack";
        }
    case 30:
        {
        return "/signals/Ramp";
        }
    case 31:
        {
        return "/signals/X";
        }
    case 32:
        {
        return "/signals/Yp4";
        }
    case 33:
        {
        return "/signals/Yp3";
        }
    case 34:
        {
        return "/signals/Yp2";
        }
    case 35:
        {
        return "/signals/Yp1";
        }
    case 36:
        {
        return "/signals/DeltaY";
        }
    case 37:
        {
        return "/signals/DeltaX";
        }
    case 38:
        {
        return "/signals/Ye4";
        }
    case 39:
        {
        return "/signals/Ye3";
        }
    case 40:
        {
        return "/signals/Ye2";
        }
    case 41:
        {
        return "/signals/Ye1";
        }
    case 42:
        {
        return "/signals/Y4";
        }
    case 43:
        {
        return "/signals/Y3";
        }
    case 44:
        {
        return "/signals/Y2";
        }
    case 45:
        {
        return "/signals/Y1";
        }
    default:
        {
        index -= 46;

        if (index < this->p_01[0]->getNumParameters()) {
            {
                return this->p_01[0]->getParameterId(index);
            }
        }

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
            info->initialValue = 2;
            info->min = 1;
            info->max = 36;
            info->exponent = 1;
            info->steps = 36;
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
            info->initialValue = 0;
            info->min = -1;
            info->max = 1;
            info->exponent = 1;
            info->steps = 201;
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
        case 2:
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
        case 3:
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
        case 4:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 100;
            info->min = 0;
            info->max = 10000;
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
        case 5:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = -70;
            info->max = 0;
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
            info->initialValue = 10;
            info->min = 0;
            info->max = 10000;
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
        case 7:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 10;
            info->min = 0;
            info->max = 10000;
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
        case 8:
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
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 9:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = -2;
            info->max = 2;
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
            info->type = ParameterTypeNumber;
            info->initialValue = 4;
            info->min = -32;
            info->max = 32;
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
        case 11:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 3;
            info->min = -32;
            info->max = 32;
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
        case 12:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 2;
            info->min = -32;
            info->max = 32;
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
        case 13:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = -32;
            info->max = 32;
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
        case 14:
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
        case 15:
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
        case 16:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = -32;
            info->max = 32;
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
        case 17:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = -32;
            info->max = 32;
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
        case 18:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = -32;
            info->max = 32;
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
        case 19:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = -32;
            info->max = 32;
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
        case 20:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -1;
            info->min = -32;
            info->max = 32;
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
        case 21:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -2;
            info->min = -32;
            info->max = 32;
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
        case 22:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -5;
            info->min = -32;
            info->max = 32;
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
        case 23:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 13;
            info->min = -32;
            info->max = 32;
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
        case 24:
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
            info->signalIndex = 0;
            break;
            }
        case 25:
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
            info->signalIndex = 1;
            break;
            }
        case 26:
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
        case 27:
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
        case 28:
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
            info->signalIndex = 4;
            break;
            }
        case 29:
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
            info->signalIndex = 5;
            break;
            }
        case 30:
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
            info->signalIndex = 6;
            break;
            }
        case 31:
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
            info->signalIndex = 7;
            break;
            }
        case 32:
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
            info->signalIndex = 8;
            break;
            }
        case 33:
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
            info->signalIndex = 9;
            break;
            }
        case 34:
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
            info->signalIndex = 10;
            break;
            }
        case 35:
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
            info->signalIndex = 11;
            break;
            }
        case 36:
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
            info->signalIndex = 12;
            break;
            }
        case 37:
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
            info->signalIndex = 13;
            break;
            }
        case 38:
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
            info->signalIndex = 14;
            break;
            }
        case 39:
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
            info->signalIndex = 15;
            break;
            }
        case 40:
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
            info->signalIndex = 16;
            break;
            }
        case 41:
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
            info->signalIndex = 17;
            break;
            }
        case 42:
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
            info->signalIndex = 18;
            break;
            }
        case 43:
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
            info->signalIndex = 19;
            break;
            }
        case 44:
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
            info->signalIndex = 20;
            break;
            }
        case 45:
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
            info->signalIndex = 21;
            break;
            }
        default:
            {
            index -= 46;

            if (index < this->p_01[0]->getNumParameters()) {
                for (Index i = 0; i < 32; i++) {
                    this->p_01[i]->getParameterInfo(index, info);
                }
            }

            break;
            }
        }
    }
}

void sendParameter(ParameterIndex index, bool ignoreValue) {
    this->getEngine()->notifyParameterValueChanged(index, (ignoreValue ? 0 : this->getParameterValue(index)), ignoreValue);
}

ParameterIndex getParameterOffset(BaseInterface* subpatcher) const {
    if (subpatcher == this->p_01[0])
        return 46;

    return 0;
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
    case 8:
        {
        {
            value = (value < 0 ? 0 : (value > 100 ? 100 : value));
            ParameterValue normalizedValue = (value - 0) / (100 - 0);
            return normalizedValue;
        }
        }
    case 4:
    case 6:
    case 7:
        {
        {
            value = (value < 0 ? 0 : (value > 10000 ? 10000 : value));
            ParameterValue normalizedValue = (value - 0) / (10000 - 0);
            return normalizedValue;
        }
        }
    case 0:
        {
        {
            value = (value < 1 ? 1 : (value > 36 ? 36 : value));
            ParameterValue normalizedValue = (value - 1) / (36 - 1);

            {
                normalizedValue = this->applyStepsToNormalizedParameterValue(normalizedValue, 36);
            }

            return normalizedValue;
        }
        }
    case 1:
        {
        {
            value = (value < -1 ? -1 : (value > 1 ? 1 : value));
            ParameterValue normalizedValue = (value - -1) / (1 - -1);

            {
                normalizedValue = this->applyStepsToNormalizedParameterValue(normalizedValue, 201);
            }

            return normalizedValue;
        }
        }
    case 2:
    case 14:
    case 15:
        {
        {
            value = (value < -180 ? -180 : (value > 180 ? 180 : value));
            ParameterValue normalizedValue = (value - -180) / (180 - -180);
            return normalizedValue;
        }
        }
    case 5:
        {
        {
            value = (value < -70 ? -70 : (value > 0 ? 0 : value));
            ParameterValue normalizedValue = (value - -70) / (0 - -70);
            return normalizedValue;
        }
        }
    case 3:
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
            value = (value < -2 ? -2 : (value > 2 ? 2 : value));
            ParameterValue normalizedValue = (value - -2) / (2 - -2);
            return normalizedValue;
        }
        }
    case 10:
    case 11:
    case 12:
    case 13:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
        {
        {
            value = (value < -32 ? -32 : (value > 32 ? 32 : value));
            ParameterValue normalizedValue = (value - -32) / (32 - -32);
            return normalizedValue;
        }
        }
    default:
        {
        index -= 46;

        if (index < this->p_01[0]->getNumParameters()) {
            {
                return this->p_01[0]->convertToNormalizedParameterValue(index, value);
            }
        }

        return value;
        }
    }
}

ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
    value = (value < 0 ? 0 : (value > 1 ? 1 : value));

    switch (index) {
    case 8:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (100 - 0);
            }
        }
        }
    case 4:
    case 6:
    case 7:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (10000 - 0);
            }
        }
        }
    case 0:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                value = this->applyStepsToNormalizedParameterValue(value, 36);
            }

            {
                return 1 + value * (36 - 1);
            }
        }
        }
    case 1:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                value = this->applyStepsToNormalizedParameterValue(value, 201);
            }

            {
                return -1 + value * (1 - -1);
            }
        }
        }
    case 2:
    case 14:
    case 15:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -180 + value * (180 - -180);
            }
        }
        }
    case 5:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -70 + value * (0 - -70);
            }
        }
        }
    case 3:
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
                return -2 + value * (2 - -2);
            }
        }
        }
    case 10:
    case 11:
    case 12:
    case 13:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -32 + value * (32 - -32);
            }
        }
        }
    default:
        {
        index -= 46;

        if (index < this->p_01[0]->getNumParameters()) {
            {
                return this->p_01[0]->convertFromNormalizedParameterValue(index, value);
            }
        }

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
    default:
        {
        index -= 46;

        if (index < this->p_01[0]->getNumParameters()) {
            {
                return this->p_01[0]->constrainParameterValue(index, value);
            }
        }

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

void processClockEvent(MillisecondTime , ClockId , bool , ParameterValue ) {}

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

void processNumMessage(MessageTag tag, MessageTag objectId, MillisecondTime time, number payload) {
    RNBO_UNUSED(objectId);
    this->updateTime(time);

    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->processNumMessage(tag, objectId, time, payload);
    }
}

void processListMessage(
    MessageTag tag,
    MessageTag objectId,
    MillisecondTime time,
    const list& payload
) {
    RNBO_UNUSED(objectId);
    this->updateTime(time);

    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->processListMessage(tag, objectId, time, payload);
    }
}

void processBangMessage(MessageTag tag, MessageTag objectId, MillisecondTime time) {
    RNBO_UNUSED(objectId);
    this->updateTime(time);

    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->processBangMessage(tag, objectId, time);
    }
}

MessageTagInfo resolveTag(MessageTag tag) const {
    switch (tag) {
    case TAG("voice"):
        {
        return "voice";
        }
    case TAG(""):
        {
        return "";
        }
    }

    auto subpatchResult_0 = this->p_01[0]->resolveTag(tag);

    if (subpatchResult_0)
        return subpatchResult_0;

    return "";
}

MessageIndex getNumMessages() const {
    return 1;
}

const MessageInfo& getMessageInfo(MessageIndex index) const {
    switch (index) {
    case 0:
        {
        static const MessageInfo r0 = {
            "voice",
            Outport
        };

        return r0;
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

    this->send_01_input_number_set(v);
}

void param_02_value_set(number v) {
    v = this->param_02_value_constrain(v);
    this->param_02_value = v;
    this->sendParameter(1, false);

    if (this->param_02_value != this->param_02_lastValue) {
        this->getEngine()->presetTouched();
        this->param_02_lastValue = this->param_02_value;
    }

    this->midiformat_02_pitchbend_set(v);
}

void paramtilde_01_value_set(number v) {
    this->paramtilde_01_value_setter(v);
    v = this->paramtilde_01_value;
    this->sendParameter(2, false);
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
    this->sendParameter(3, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_02_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_02_lastIndex); i < k; i++) {
            this->paramtilde_02_sigbuf[(Index)i] = v;
            this->paramtilde_02_lastIndex = k;
        }
    }
}

void paramtilde_03_value_set(number v) {
    this->paramtilde_03_value_setter(v);
    v = this->paramtilde_03_value;
    this->sendParameter(4, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_03_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_03_lastIndex); i < k; i++) {
            this->paramtilde_03_sigbuf[(Index)i] = v;
            this->paramtilde_03_lastIndex = k;
        }
    }
}

void paramtilde_04_value_set(number v) {
    this->paramtilde_04_value_setter(v);
    v = this->paramtilde_04_value;
    this->sendParameter(5, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_04_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_04_lastIndex); i < k; i++) {
            this->paramtilde_04_sigbuf[(Index)i] = v;
            this->paramtilde_04_lastIndex = k;
        }
    }
}

void paramtilde_05_value_set(number v) {
    this->paramtilde_05_value_setter(v);
    v = this->paramtilde_05_value;
    this->sendParameter(6, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_05_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_05_lastIndex); i < k; i++) {
            this->paramtilde_05_sigbuf[(Index)i] = v;
            this->paramtilde_05_lastIndex = k;
        }
    }
}

void paramtilde_06_value_set(number v) {
    this->paramtilde_06_value_setter(v);
    v = this->paramtilde_06_value;
    this->sendParameter(7, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_06_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_06_lastIndex); i < k; i++) {
            this->paramtilde_06_sigbuf[(Index)i] = v;
            this->paramtilde_06_lastIndex = k;
        }
    }
}

void paramtilde_07_value_set(number v) {
    this->paramtilde_07_value_setter(v);
    v = this->paramtilde_07_value;
    this->sendParameter(8, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_07_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_07_lastIndex); i < k; i++) {
            this->paramtilde_07_sigbuf[(Index)i] = v;
            this->paramtilde_07_lastIndex = k;
        }
    }
}

void paramtilde_08_value_set(number v) {
    this->paramtilde_08_value_setter(v);
    v = this->paramtilde_08_value;
    this->sendParameter(9, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_08_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_08_lastIndex); i < k; i++) {
            this->paramtilde_08_sigbuf[(Index)i] = v;
            this->paramtilde_08_lastIndex = k;
        }
    }
}

void paramtilde_09_value_set(number v) {
    this->paramtilde_09_value_setter(v);
    v = this->paramtilde_09_value;
    this->sendParameter(10, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_09_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_09_lastIndex); i < k; i++) {
            this->paramtilde_09_sigbuf[(Index)i] = v;
            this->paramtilde_09_lastIndex = k;
        }
    }
}

void paramtilde_10_value_set(number v) {
    this->paramtilde_10_value_setter(v);
    v = this->paramtilde_10_value;
    this->sendParameter(11, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_10_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_10_lastIndex); i < k; i++) {
            this->paramtilde_10_sigbuf[(Index)i] = v;
            this->paramtilde_10_lastIndex = k;
        }
    }
}

void paramtilde_11_value_set(number v) {
    this->paramtilde_11_value_setter(v);
    v = this->paramtilde_11_value;
    this->sendParameter(12, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_11_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_11_lastIndex); i < k; i++) {
            this->paramtilde_11_sigbuf[(Index)i] = v;
            this->paramtilde_11_lastIndex = k;
        }
    }
}

void paramtilde_12_value_set(number v) {
    this->paramtilde_12_value_setter(v);
    v = this->paramtilde_12_value;
    this->sendParameter(13, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_12_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_12_lastIndex); i < k; i++) {
            this->paramtilde_12_sigbuf[(Index)i] = v;
            this->paramtilde_12_lastIndex = k;
        }
    }
}

void paramtilde_13_value_set(number v) {
    this->paramtilde_13_value_setter(v);
    v = this->paramtilde_13_value;
    this->sendParameter(14, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_13_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_13_lastIndex); i < k; i++) {
            this->paramtilde_13_sigbuf[(Index)i] = v;
            this->paramtilde_13_lastIndex = k;
        }
    }
}

void paramtilde_14_value_set(number v) {
    this->paramtilde_14_value_setter(v);
    v = this->paramtilde_14_value;
    this->sendParameter(15, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_14_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_14_lastIndex); i < k; i++) {
            this->paramtilde_14_sigbuf[(Index)i] = v;
            this->paramtilde_14_lastIndex = k;
        }
    }
}

void paramtilde_15_value_set(number v) {
    this->paramtilde_15_value_setter(v);
    v = this->paramtilde_15_value;
    this->sendParameter(16, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_15_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_15_lastIndex); i < k; i++) {
            this->paramtilde_15_sigbuf[(Index)i] = v;
            this->paramtilde_15_lastIndex = k;
        }
    }
}

void paramtilde_16_value_set(number v) {
    this->paramtilde_16_value_setter(v);
    v = this->paramtilde_16_value;
    this->sendParameter(17, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_16_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_16_lastIndex); i < k; i++) {
            this->paramtilde_16_sigbuf[(Index)i] = v;
            this->paramtilde_16_lastIndex = k;
        }
    }
}

void paramtilde_17_value_set(number v) {
    this->paramtilde_17_value_setter(v);
    v = this->paramtilde_17_value;
    this->sendParameter(18, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_17_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_17_lastIndex); i < k; i++) {
            this->paramtilde_17_sigbuf[(Index)i] = v;
            this->paramtilde_17_lastIndex = k;
        }
    }
}

void paramtilde_18_value_set(number v) {
    this->paramtilde_18_value_setter(v);
    v = this->paramtilde_18_value;
    this->sendParameter(19, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_18_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_18_lastIndex); i < k; i++) {
            this->paramtilde_18_sigbuf[(Index)i] = v;
            this->paramtilde_18_lastIndex = k;
        }
    }
}

void paramtilde_19_value_set(number v) {
    this->paramtilde_19_value_setter(v);
    v = this->paramtilde_19_value;
    this->sendParameter(20, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_19_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_19_lastIndex); i < k; i++) {
            this->paramtilde_19_sigbuf[(Index)i] = v;
            this->paramtilde_19_lastIndex = k;
        }
    }
}

void paramtilde_20_value_set(number v) {
    this->paramtilde_20_value_setter(v);
    v = this->paramtilde_20_value;
    this->sendParameter(21, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_20_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_20_lastIndex); i < k; i++) {
            this->paramtilde_20_sigbuf[(Index)i] = v;
            this->paramtilde_20_lastIndex = k;
        }
    }
}

void paramtilde_21_value_set(number v) {
    this->paramtilde_21_value_setter(v);
    v = this->paramtilde_21_value;
    this->sendParameter(22, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_21_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_21_lastIndex); i < k; i++) {
            this->paramtilde_21_sigbuf[(Index)i] = v;
            this->paramtilde_21_lastIndex = k;
        }
    }
}

void paramtilde_22_value_set(number v) {
    this->paramtilde_22_value_setter(v);
    v = this->paramtilde_22_value;
    this->sendParameter(23, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_22_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_22_lastIndex); i < k; i++) {
            this->paramtilde_22_sigbuf[(Index)i] = v;
            this->paramtilde_22_lastIndex = k;
        }
    }
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
    return 0;
}

Index getNumOutputChannels() const {
    return 2;
}

void allocateDataRefs() {
    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->allocateDataRefs();
    }

    if (this->RNBODefaultMtofLookupTable256->hasRequestedSize()) {
        if (this->RNBODefaultMtofLookupTable256->wantsFill())
            this->fillRNBODefaultMtofLookupTable256(this->RNBODefaultMtofLookupTable256);

        this->getEngine()->sendDataRefUpdated(0);
    }
}

void initializeObjects() {
    this->midinotecontroller_01_init();

    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->initializeObjects();
    }
}

void sendOutlet(OutletIndex index, ParameterValue value) {
    this->getEngine()->sendOutlet(this, index, value);
}

void startup() {
    this->updateTime(this->getEngine()->getCurrentTime());

    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->startup();
    }

    {
        this->scheduleParamInit(0, 0);
    }

    {
        this->scheduleParamInit(1, 0);
    }

    this->processParamInitEvents();
}

static number param_01_value_constrain(number v) {
    v = (v > 36 ? 36 : (v < 1 ? 1 : v));

    {
        number oneStep = (number)35 / (number)35;
        number oneStepInv = (oneStep != 0 ? (number)1 / oneStep : 0);
        number numberOfSteps = rnbo_fround(v * oneStepInv * 1 / (number)1) * 1;
        v = numberOfSteps * oneStep;
    }

    return v;
}

void outport_01_input_list_set(const list& v) {
    this->getEngine()->sendListMessage(TAG("voice"), TAG(""), v, this->_currentTime);
}

void p_01_out3_list_set(const list& v) {
    this->outport_01_input_list_set(v);
}

void p_01_target_PB_number_set(number v) {
    for (Index i = 0; i < 32; i++) {
        if (i + 1 == this->p_01_target || 0 == this->p_01_target) {
            this->p_01[i]->updateTime(this->_currentTime);
        }
    }

    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->receive_01_output_number_set(v);
    }
}

void send_01_input_number_set(number v) {
    this->send_01_input_number = v;
    this->p_01_target_PB_number_set(v);
}

static number param_02_value_constrain(number v) {
    v = (v > 1 ? 1 : (v < -1 ? -1 : v));

    {
        number oneStep = (number)2 / (number)200;
        number oneStepInv = (oneStep != 0 ? (number)1 / oneStep : 0);
        number numberOfSteps = rnbo_fround(v * oneStepInv * 1 / (number)1) * 1;
        v = numberOfSteps * oneStep;
    }

    return v;
}

void midinotecontroller_01_currenttarget_set(number v) {
    this->midinotecontroller_01_currenttarget = v;
}

void p_01_target_set(number v) {
    this->p_01_target = v;
    this->midinotecontroller_01_currenttarget_set(v);
}

void midinotecontroller_01_target_set(number v) {
    this->p_01_target_set(v);
}

void p_01_midiininternal_set(number v) {
    Index sendlen = 0;
    this->p_01_currentStatus = parseMidi(this->p_01_currentStatus, (int)(v), this->p_01_mididata[0]);

    switch ((int)this->p_01_currentStatus) {
    case MIDI_StatusByteReceived:
        {
        this->p_01_mididata[0] = (uint8_t)(v);
        this->p_01_mididata[1] = 0;
        break;
        }
    case MIDI_SecondByteReceived:
    case MIDI_ProgramChange:
    case MIDI_ChannelPressure:
        {
        this->p_01_mididata[1] = (uint8_t)(v);

        if (this->p_01_currentStatus == MIDI_ProgramChange || this->p_01_currentStatus == MIDI_ChannelPressure) {
            sendlen = 2;
        }

        break;
        }
    case MIDI_NoteOff:
    case MIDI_NoteOn:
    case MIDI_Aftertouch:
    case MIDI_CC:
    case MIDI_PitchBend:
    default:
        {
        this->p_01_mididata[2] = (uint8_t)(v);
        sendlen = 3;
        break;
        }
    }

    if (sendlen > 0) {
        number i;

        if (this->p_01_target > 0 && this->p_01_target <= 32) {
            i = this->p_01_target - 1;
            this->p_01[(Index)i]->processMidiEvent(_currentTime, 0, this->p_01_mididata, sendlen);
        } else if (this->p_01_target == 0) {
            for (i = 0; i < 32; i++) {
                this->p_01[(Index)i]->processMidiEvent(_currentTime, 0, this->p_01_mididata, sendlen);
            }
        }
    }
}

void midinotecontroller_01_midiout_set(number v) {
    this->p_01_midiininternal_set(v);
}

void p_01_noteNumber_set(number v) {
    if (this->p_01_target > 0) {
        this->p_01[(Index)(this->p_01_target - 1)]->setNoteNumber((int)(v));
    }
}

void midinotecontroller_01_noteNumber_set(number v) {
    this->p_01_noteNumber_set(v);
}

void midinotecontroller_01_voicestatus_set(const list& v) {
    if (v[1] == 1) {
        number currentTarget = this->midinotecontroller_01_currenttarget;
        this->midinotecontroller_01_target_set(v[0]);
        this->midinotecontroller_01_noteNumber_set(0);
        this->midinotecontroller_01_target_set(currentTarget);
    }
}

void p_01_voicestatus_set(const list& v) {
    for (Index i = 0; i < 32; i++) {
        if (i + 1 == this->p_01_target || 0 == this->p_01_target) {
            this->p_01[i]->updateTime(this->_currentTime);
        }
    }

    for (Index i = 0; i < 32; i++) {
        if (i + 1 == this->p_01_target || 0 == this->p_01_target) {
            this->p_01[i]->voice_01_mutein_list_set(v);
        }
    }

    this->midinotecontroller_01_voicestatus_set(v);
}

void p_01_activevoices_set(number v) {
    for (Index i = 0; i < 32; i++) {
        if (i + 1 == this->p_01_target || 0 == this->p_01_target) {
            this->p_01[i]->updateTime(this->_currentTime);
        }
    }

    for (Index i = 0; i < 32; i++) {
        this->p_01[i]->voice_01_activevoices_set(v);
    }
}

void p_01_mute_set(const list& v) {
    Index voiceNumber = (Index)(v[0]);
    Index muteState = (Index)(v[1]);

    if (voiceNumber == 0) {
        for (Index i = 0; i < 32; i++) {
            this->p_01[(Index)i]->setIsMuted(muteState);
        }
    } else {
        Index subpatcherIndex = voiceNumber - 1;

        if (subpatcherIndex >= 0 && subpatcherIndex < 32) {
            this->p_01[(Index)subpatcherIndex]->setIsMuted(muteState);
        }
    }

    list tmp = {v[0], v[1]};
    this->p_01_voicestatus_set(tmp);
    this->p_01_activevoices_set(this->p_01_calcActiveVoices());
}

void midinotecontroller_01_mute_set(const list& v) {
    this->p_01_mute_set(v);
}

void midinotecontroller_01_midiin_set(number v) {
    this->midinotecontroller_01_midiin = v;
    int val = (int)(v);

    this->midinotecontroller_01_currentStatus = parseMidi(
        this->midinotecontroller_01_currentStatus,
        (int)(v),
        this->midinotecontroller_01_status
    );

    switch ((int)this->midinotecontroller_01_currentStatus) {
    case MIDI_StatusByteReceived:
        {
        {
            this->midinotecontroller_01_status = val;
            this->midinotecontroller_01_byte1 = -1;
            break;
        }
        }
    case MIDI_SecondByteReceived:
        {
        this->midinotecontroller_01_byte1 = val;
        break;
        }
    case MIDI_NoteOn:
        {
        {
            bool sendnoteoff = true;
            number target = 1;
            number oldest = this->midinotecontroller_01_voice_lastontime[0];
            number target_state = this->midinotecontroller_01_voice_state[0];

            for (Index i = 0; i < 32; i++) {
                number candidate_state = this->midinotecontroller_01_voice_state[(Index)i];

                if (this->midinotecontroller_01_voice_notenumber[(Index)i] == this->midinotecontroller_01_byte1 && candidate_state == MIDI_NoteState_On) {
                    sendnoteoff = false;
                    target = i + 1;
                    break;
                }

                if (i > 0) {
                    if (candidate_state != MIDI_NoteState_On || target_state == MIDI_NoteState_On) {
                        number candidate_ontime = this->midinotecontroller_01_voice_lastontime[(Index)i];

                        if (candidate_ontime < oldest || (target_state == MIDI_NoteState_On && candidate_state != MIDI_NoteState_On)) {
                            target = i + 1;
                            oldest = candidate_ontime;
                            target_state = candidate_state;
                        }
                    }
                }
            }

            if ((bool)(sendnoteoff))
                this->midinotecontroller_01_sendnoteoff((int)(target));

            int i = (int)(target - 1);
            this->midinotecontroller_01_voice_state[(Index)i] = MIDI_NoteState_On;
            this->midinotecontroller_01_voice_lastontime[(Index)i] = this->currenttime();
            this->midinotecontroller_01_voice_notenumber[(Index)i] = this->midinotecontroller_01_byte1;
            this->midinotecontroller_01_voice_channel[(Index)i] = (BinOpInt)((UBinOpInt)this->midinotecontroller_01_status & (UBinOpInt)0x0F);

            for (Index j = 0; j < 128; j++) {
                if (this->midinotecontroller_01_notesdown[(Index)j] == 0) {
                    this->midinotecontroller_01_notesdown[(Index)j] = this->midinotecontroller_01_voice_notenumber[(Index)i];
                    break;
                }
            }

            this->midinotecontroller_01_note_lastvelocity[(Index)this->midinotecontroller_01_voice_notenumber[(Index)i]] = val;
            this->midinotecontroller_01_sendpitchbend((int)(i));
            this->midinotecontroller_01_sendpressure((int)(i));
            this->midinotecontroller_01_sendtimbre((int)(i));
            this->midinotecontroller_01_muteval[0] = target;
            this->midinotecontroller_01_muteval[1] = 0;
            this->midinotecontroller_01_mute_set(this->midinotecontroller_01_muteval);
            number currentTarget = this->midinotecontroller_01_currenttarget;
            this->midinotecontroller_01_target_set(target);
            this->midinotecontroller_01_noteNumber_set(this->midinotecontroller_01_voice_notenumber[(Index)i]);

            this->midinotecontroller_01_midiout_set(
                (BinOpInt)((UBinOpInt)MIDI_NoteOnMask | (UBinOpInt)this->midinotecontroller_01_voice_channel[(Index)i])
            );

            this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_voice_notenumber[(Index)i]);
            this->midinotecontroller_01_midiout_set(val);
            this->midinotecontroller_01_target_set(currentTarget);
            break;
        }
        }
    case MIDI_NoteOff:
        {
        {
            number target = 0;
            number notenumber = this->midinotecontroller_01_byte1;
            number channel = (BinOpInt)((UBinOpInt)this->midinotecontroller_01_status & (UBinOpInt)0x0F);

            for (Index i = 0; i < 32; i++) {
                if (this->midinotecontroller_01_voice_notenumber[(Index)i] == notenumber && this->midinotecontroller_01_voice_channel[(Index)i] == channel && this->midinotecontroller_01_voice_state[(Index)i] == MIDI_NoteState_On) {
                    target = i + 1;
                    break;
                }
            }

            if (target > 0) {
                int i = (int)(target - 1);
                Index j = (Index)(channel);
                bool ignoresustainchannel = true;

                if ((bool)(this->midinotecontroller_01_channel_sustain[((bool)(ignoresustainchannel) ? 0 : j)])) {
                    this->midinotecontroller_01_voice_state[(Index)i] = MIDI_NoteState_Sustained;
                } else {
                    number currentTarget = this->midinotecontroller_01_currenttarget;
                    this->midinotecontroller_01_target_set(target);
                    this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_status);
                    this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_byte1);
                    this->midinotecontroller_01_midiout_set(v);
                    this->midinotecontroller_01_target_set(currentTarget);

                    if (this->midinotecontroller_01_currentStatus == MIDI_NoteOff) {
                        this->midinotecontroller_01_voice_state[(Index)i] = MIDI_NoteState_Off;
                    }
                }
            } else
                {}

            bool found = false;

            for (Index i = 0; i < 128; i++) {
                if (this->midinotecontroller_01_notesdown[(Index)i] == 0) {
                    break;
                } else if (this->midinotecontroller_01_notesdown[(Index)i] == notenumber) {
                    found = true;
                }

                if ((bool)(found)) {
                    this->midinotecontroller_01_notesdown[(Index)i] = this->midinotecontroller_01_notesdown[(Index)(i + 1)];
                }
            }

            break;
        }
        }
    case MIDI_Aftertouch:
        {
        {
            number currentTarget = this->midinotecontroller_01_currenttarget;
            this->midinotecontroller_01_target_set(0);
            this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_status);
            this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_byte1);
            this->midinotecontroller_01_midiout_set(v);
            this->midinotecontroller_01_target_set(currentTarget);
            break;
        }
        }
    case MIDI_CC:
        {
        {
            bool sendToAllVoices = true;

            switch ((int)this->midinotecontroller_01_byte1) {
            case MIDI_CC_Sustain:
                {
                {
                    bool pedaldown = (bool)((val >= 64 ? true : false));
                    number channel = (BinOpInt)((UBinOpInt)this->midinotecontroller_01_status & (UBinOpInt)0x0F);
                    Index j = (Index)(channel);
                    bool ignoresustainchannel = true;
                    this->midinotecontroller_01_channel_sustain[((bool)(ignoresustainchannel) ? 0 : j)] = pedaldown;

                    if ((bool)(!(bool)(pedaldown))) {
                        for (Index i = 0; i < 32; i++) {
                            if (((bool)(ignoresustainchannel) || this->midinotecontroller_01_voice_channel[(Index)i] == channel) && this->midinotecontroller_01_voice_state[(Index)i] == MIDI_NoteState_Sustained) {
                                number currentTarget = this->midinotecontroller_01_currenttarget;
                                this->midinotecontroller_01_target_set(i + 1);
                                this->midinotecontroller_01_midiout_set((BinOpInt)((UBinOpInt)MIDI_NoteOffMask | (UBinOpInt)j));
                                this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_voice_notenumber[(Index)i]);
                                this->midinotecontroller_01_midiout_set(64);
                                this->midinotecontroller_01_target_set(currentTarget);
                                this->midinotecontroller_01_voice_state[(Index)i] = MIDI_NoteState_Off;
                            }
                        }
                    }

                    break;
                }
                }
            case MIDI_CC_TimbreMSB:
                {
                {
                    number channel = (BinOpInt)((UBinOpInt)this->midinotecontroller_01_status & (UBinOpInt)0x0F);
                    int k = (int)(v);
                    number timbre = (BinOpInt)(((UBinOpInt)((UBinOpInt)k & (UBinOpInt)0x7F)) << (UBinOpInt)7);
                    this->midinotecontroller_01_channel_timbre[(Index)((UBinOpInt)this->midinotecontroller_01_status & (UBinOpInt)0x0F)] = timbre;

                    for (Index i = 0; i < 32; i++) {
                        if (this->midinotecontroller_01_voice_channel[(Index)i] == channel && this->midinotecontroller_01_voice_state[(Index)i] != MIDI_NoteState_Off) {
                            this->midinotecontroller_01_sendtimbre(i);
                        }
                    }

                    sendToAllVoices = false;
                    break;
                }
                }
            case MIDI_CC_TimbreLSB:
                {
                {
                    break;
                }
                }
            case MIDI_CC_AllNotesOff:
                {
                {
                    this->midinotecontroller_01_sendallnotesoff();
                    break;
                }
                }
            }

            if ((bool)(sendToAllVoices)) {
                number currentTarget = this->midinotecontroller_01_currenttarget;
                this->midinotecontroller_01_target_set(0);
                this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_status);
                this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_byte1);
                this->midinotecontroller_01_midiout_set(v);
                this->midinotecontroller_01_target_set(currentTarget);
            }

            break;
        }
        }
    case MIDI_ProgramChange:
        {
        {
            number currentTarget = this->midinotecontroller_01_currenttarget;
            this->midinotecontroller_01_target_set(0);
            this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_status);
            this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_byte1);
            this->midinotecontroller_01_target_set(currentTarget);
            break;
        }
        }
    case MIDI_ChannelPressure:
        {
        {
            number channel = (BinOpInt)((UBinOpInt)this->midinotecontroller_01_status & (UBinOpInt)0x0F);

            for (number i = 0; i < 32; i++) {
                if (this->midinotecontroller_01_voice_state[(Index)i] != MIDI_NoteState_Off && this->midinotecontroller_01_voice_channel[(Index)i] == channel) {
                    int k = (int)(channel);
                    this->midinotecontroller_01_channel_pressure[(Index)k] = v;
                    this->midinotecontroller_01_sendpressure(i);
                }
            }

            break;
        }
        }
    case MIDI_PitchBend:
        {
        {
            number bendamount = (BinOpInt)((UBinOpInt)this->midinotecontroller_01_byte1 | (UBinOpInt)((UBinOpInt)val << (UBinOpInt)7));
            int channel = (int)((BinOpInt)((UBinOpInt)this->midinotecontroller_01_status & (UBinOpInt)0x0F));
            this->midinotecontroller_01_channel_pitchbend[(Index)channel] = bendamount;

            for (Index i = 0; i < 32; i++) {
                if (this->midinotecontroller_01_voice_state[(Index)i] != MIDI_NoteState_Off && this->midinotecontroller_01_voice_channel[(Index)i] == channel) {
                    this->midinotecontroller_01_sendpitchbend(i);
                }
            }

            break;
        }
        }
    }
}

void p_01_midiin_set(number v) {
    this->p_01_midiin = v;
    this->midinotecontroller_01_midiin_set(v);
}

void midiformat_02_midimessage_set(number v) {
    this->p_01_midiin_set(v);
}

void midiformat_02_pitchbend_set(number v) {
    this->midiformat_02_pitchbend = v;
    this->midiformat_02_send3byte(this->midiformat_02_innerFormat_pitchbend(v, this->midiformat_02_channel));
}

void midiformat_02_channel_set(number v) {
    this->midiformat_02_channel_setter(v);
    v = this->midiformat_02_channel;
}

void midiparse_02_channel_set(number v) {
    this->midiformat_02_channel_set(v);
}

void midiformat_02_noteonoroff_set(const list& v) {
    if (v->length > 1) {
        number releasevel = (v->length >= 3 ? v[2] : 0);
        number vel = v[1];
        number release = releasevel > 0.0 && vel < 1.0;

        if ((bool)(!(bool)(release))) {
            this->midiformat_02_send3byte(
                this->midiformat_02_innerFormat_note(v[0], vel, this->midiformat_02_channel)
            );
        } else {
            this->midiformat_02_send3byte(
                this->midiformat_02_innerFormat_noterelease(v[0], releasevel, this->midiformat_02_channel)
            );
        }
    }
}

void midiparse_02_noteonoroff_set(const list& v) {
    this->midiformat_02_noteonoroff_set(v);
}

void midiformat_02_polypressure_set(const list& v) {
    if (v->length > 1) {
        this->midiformat_02_send3byte(
            this->midiformat_02_innerFormat_polypressure(v[0], v[1], this->midiformat_02_channel)
        );
    }
}

void midiparse_02_polypressure_set(const list& v) {
    this->midiformat_02_polypressure_set(v);
}

void midiformat_02_controlchange_set(const list& v) {
    if (v->length > 1) {
        this->midiformat_02_send3byte(
            this->midiformat_02_innerFormat_controlchange(v[0], v[1], this->midiformat_02_channel)
        );
    }
}

void midiparse_02_controlchange_set(const list& v) {
    this->midiformat_02_controlchange_set(v);
}

void midiformat_02_programchange_set(number v) {
    this->midiformat_02_send2byte(
        this->midiformat_02_innerFormat_programchange(v, this->midiformat_02_channel)
    );
}

void midiparse_02_programchange_set(number v) {
    this->midiformat_02_programchange_set(v);
}

void midiformat_02_aftertouch_set(number v) {
    this->midiformat_02_send2byte(this->midiformat_02_innerFormat_aftertouch(v, this->midiformat_02_channel));
}

void midiparse_02_aftertouch_set(number v) {
    this->midiformat_02_aftertouch_set(v);
}

void midiparse_02_pitchbend_set(number v) {
    this->param_02_value_set(v);
}

void midiparse_02_midiin_set(number midivalue) {
    list result = this->midiparse_02_parser_next(midivalue);

    switch ((int)result[0]) {
    case 0:
        {
        this->midiparse_02_channel_set(result[3]);
        this->midiparse_02_noteonoroff_set({result[1], result[2]});
        break;
        }
    case 1:
        {
        this->midiparse_02_channel_set(result[3]);
        this->midiparse_02_polypressure_set({result[1], result[2]});
        break;
        }
    case 2:
        {
        this->midiparse_02_channel_set(result[3]);
        this->midiparse_02_controlchange_set({result[1], result[2]});
        break;
        }
    case 3:
        {
        this->midiparse_02_channel_set(result[2]);
        this->midiparse_02_programchange_set(result[1]);
        break;
        }
    case 4:
        {
        this->midiparse_02_channel_set(result[2]);
        this->midiparse_02_aftertouch_set(result[1]);
        break;
        }
    case 5:
        {
        this->midiparse_02_channel_set(result[2]);
        this->midiparse_02_pitchbend_set(result[1]);
        break;
        }
    }
}

void midiin_02_midiout_set(number v) {
    this->midiparse_02_midiin_set(v);
}

void midiin_02_midihandler(int status, int channel, int port, ConstByteArray data, Index length) {
    RNBO_UNUSED(port);
    RNBO_UNUSED(channel);
    RNBO_UNUSED(status);
    Index i;

    for (i = 0; i < length; i++) {
        this->midiin_02_midiout_set(data[i]);
    }
}

void midiout_02_midiin_set(number v) {
    int vi = (int)(v);

    if (vi == 0xF6 || (vi >= MIDI_Clock && vi <= MIDI_Reset && vi != 0xF9 && vi != 0xFD)) {
        this->getEngine()->sendMidiEvent(this->midiout_02_port, vi, 0, 0);
        return;
    }

    this->midiout_02_currentStatus = parseMidi(this->midiout_02_currentStatus, vi, this->midiout_02_status);
    bool clearSysex = true;

    switch ((int)this->midiout_02_currentStatus) {
    case MIDI_StatusByteReceived:
        {
        this->midiout_02_status = v;
        this->midiout_02_byte1 = -1;
        break;
        }
    case MIDI_SecondByteReceived:
        {
        this->midiout_02_byte1 = v;
        break;
        }
    case MIDI_ProgramChange:
    case MIDI_ChannelPressure:
    case MIDI_QuarterFrame:
    case MIDI_SongSel:
        {
        this->midiout_02_byte1 = v;
        this->getEngine()->sendMidiEvent(this->midiout_02_port, this->midiout_02_status, this->midiout_02_byte1, 0);
        break;
        }
    case MIDI_NoteOff:
    case MIDI_NoteOn:
    case MIDI_Aftertouch:
    case MIDI_CC:
    case MIDI_PitchBend:
    case MIDI_SongPos:
    case MIDI_Generic:
        {
        this->getEngine()->sendMidiEvent(this->midiout_02_port, this->midiout_02_status, this->midiout_02_byte1, v);
        break;
        }
    case MIDI_Sysex_Started:
        {
        this->midiout_02_sysex->push(vi);
        clearSysex = false;
        break;
        }
    case MIDI_Sysex_Complete:
        {
        this->midiout_02_sysex->push(vi);
        this->getEngine()->sendMidiEventList(this->midiout_02_port, this->midiout_02_sysex);
        break;
        }
    case MIDI_InvalidByte:
        {
        break;
        }
    default:
        {
        break;
        }
    }

    if ((bool)(clearSysex) && this->midiout_02_sysex->length > 0) {
        this->midiout_02_sysex = {};
    }
}

void p_01_midiout_set(number v) {
    this->midiout_02_midiin_set(v);
}

void paramtilde_01_perform(const SampleValue * Rotation, SampleValue * out, Index n) {
    auto __paramtilde_01_sigbuf = this->paramtilde_01_sigbuf;
    auto __paramtilde_01_value = this->paramtilde_01_value;
    auto __paramtilde_01_lastIndex = this->paramtilde_01_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_01_lastIndex) {
            out[(Index)i] = Rotation[(Index)i] + __paramtilde_01_value;
        } else {
            out[(Index)i] = Rotation[(Index)i] + __paramtilde_01_sigbuf[(Index)i];
        }
    }

    __paramtilde_01_lastIndex = 0;
    this->paramtilde_01_lastIndex = __paramtilde_01_lastIndex;
}

void dspexpr_32_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = 2 * (in1[(Index)i] / (number)360) * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_03_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_02_perform(const SampleValue * Gain, SampleValue * out, Index n) {
    auto __paramtilde_02_sigbuf = this->paramtilde_02_sigbuf;
    auto __paramtilde_02_value = this->paramtilde_02_value;
    auto __paramtilde_02_lastIndex = this->paramtilde_02_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_02_lastIndex) {
            out[(Index)i] = Gain[(Index)i] + __paramtilde_02_value;
        } else {
            out[(Index)i] = Gain[(Index)i] + __paramtilde_02_sigbuf[(Index)i];
        }
    }

    __paramtilde_02_lastIndex = 0;
    this->paramtilde_02_lastIndex = __paramtilde_02_lastIndex;
}

void dspexpr_33_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = rnbo_pow(10, in1[(Index)i] * 0.05);//#map:_###_obj_###_:1
    }
}

void paramtilde_03_perform(const SampleValue * Release, SampleValue * out, Index n) {
    auto __paramtilde_03_sigbuf = this->paramtilde_03_sigbuf;
    auto __paramtilde_03_value = this->paramtilde_03_value;
    auto __paramtilde_03_lastIndex = this->paramtilde_03_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_03_lastIndex) {
            out[(Index)i] = Release[(Index)i] + __paramtilde_03_value;
        } else {
            out[(Index)i] = Release[(Index)i] + __paramtilde_03_sigbuf[(Index)i];
        }
    }

    __paramtilde_03_lastIndex = 0;
    this->paramtilde_03_lastIndex = __paramtilde_03_lastIndex;
}

void signalsend_06_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_04_perform(const SampleValue * Sustain, SampleValue * out, Index n) {
    auto __paramtilde_04_sigbuf = this->paramtilde_04_sigbuf;
    auto __paramtilde_04_value = this->paramtilde_04_value;
    auto __paramtilde_04_lastIndex = this->paramtilde_04_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_04_lastIndex) {
            out[(Index)i] = Sustain[(Index)i] + __paramtilde_04_value;
        } else {
            out[(Index)i] = Sustain[(Index)i] + __paramtilde_04_sigbuf[(Index)i];
        }
    }

    __paramtilde_04_lastIndex = 0;
    this->paramtilde_04_lastIndex = __paramtilde_04_lastIndex;
}

void dspexpr_34_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = rnbo_pow(10, in1[(Index)i] * 0.05);//#map:_###_obj_###_:1
    }
}

void dspexpr_37_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    RNBO_UNUSED(in2);
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = rnbo_fround(in1[(Index)i] * 1 / (number)0.01) * 0.01;//#map:_###_obj_###_:1
    }
}

void signalsend_02_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_05_perform(const SampleValue * Decay, SampleValue * out, Index n) {
    auto __paramtilde_05_sigbuf = this->paramtilde_05_sigbuf;
    auto __paramtilde_05_value = this->paramtilde_05_value;
    auto __paramtilde_05_lastIndex = this->paramtilde_05_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_05_lastIndex) {
            out[(Index)i] = Decay[(Index)i] + __paramtilde_05_value;
        } else {
            out[(Index)i] = Decay[(Index)i] + __paramtilde_05_sigbuf[(Index)i];
        }
    }

    __paramtilde_05_lastIndex = 0;
    this->paramtilde_05_lastIndex = __paramtilde_05_lastIndex;
}

void signalsend_04_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_06_perform(const SampleValue * Attack, SampleValue * out, Index n) {
    auto __paramtilde_06_sigbuf = this->paramtilde_06_sigbuf;
    auto __paramtilde_06_value = this->paramtilde_06_value;
    auto __paramtilde_06_lastIndex = this->paramtilde_06_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_06_lastIndex) {
            out[(Index)i] = Attack[(Index)i] + __paramtilde_06_value;
        } else {
            out[(Index)i] = Attack[(Index)i] + __paramtilde_06_sigbuf[(Index)i];
        }
    }

    __paramtilde_06_lastIndex = 0;
    this->paramtilde_06_lastIndex = __paramtilde_06_lastIndex;
}

void signalsend_05_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_07_perform(const SampleValue * Ramp, SampleValue * out, Index n) {
    auto __paramtilde_07_sigbuf = this->paramtilde_07_sigbuf;
    auto __paramtilde_07_value = this->paramtilde_07_value;
    auto __paramtilde_07_lastIndex = this->paramtilde_07_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_07_lastIndex) {
            out[(Index)i] = Ramp[(Index)i] + __paramtilde_07_value;
        } else {
            out[(Index)i] = Ramp[(Index)i] + __paramtilde_07_sigbuf[(Index)i];
        }
    }

    __paramtilde_07_lastIndex = 0;
    this->paramtilde_07_lastIndex = __paramtilde_07_lastIndex;
}

void dspexpr_35_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    RNBO_UNUSED(in2);
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)100;//#map:_###_obj_###_:1
    }
}

void signalsend_01_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_08_perform(const SampleValue * X, SampleValue * out, Index n) {
    auto __paramtilde_08_sigbuf = this->paramtilde_08_sigbuf;
    auto __paramtilde_08_value = this->paramtilde_08_value;
    auto __paramtilde_08_lastIndex = this->paramtilde_08_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_08_lastIndex) {
            out[(Index)i] = X[(Index)i] + __paramtilde_08_value;
        } else {
            out[(Index)i] = X[(Index)i] + __paramtilde_08_sigbuf[(Index)i];
        }
    }

    __paramtilde_08_lastIndex = 0;
    this->paramtilde_08_lastIndex = __paramtilde_08_lastIndex;
}

void signalsend_07_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_09_perform(const SampleValue * Yp4, SampleValue * out, Index n) {
    auto __paramtilde_09_sigbuf = this->paramtilde_09_sigbuf;
    auto __paramtilde_09_value = this->paramtilde_09_value;
    auto __paramtilde_09_lastIndex = this->paramtilde_09_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_09_lastIndex) {
            out[(Index)i] = Yp4[(Index)i] + __paramtilde_09_value;
        } else {
            out[(Index)i] = Yp4[(Index)i] + __paramtilde_09_sigbuf[(Index)i];
        }
    }

    __paramtilde_09_lastIndex = 0;
    this->paramtilde_09_lastIndex = __paramtilde_09_lastIndex;
}

void signalsend_08_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_10_perform(const SampleValue * Yp3, SampleValue * out, Index n) {
    auto __paramtilde_10_sigbuf = this->paramtilde_10_sigbuf;
    auto __paramtilde_10_value = this->paramtilde_10_value;
    auto __paramtilde_10_lastIndex = this->paramtilde_10_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_10_lastIndex) {
            out[(Index)i] = Yp3[(Index)i] + __paramtilde_10_value;
        } else {
            out[(Index)i] = Yp3[(Index)i] + __paramtilde_10_sigbuf[(Index)i];
        }
    }

    __paramtilde_10_lastIndex = 0;
    this->paramtilde_10_lastIndex = __paramtilde_10_lastIndex;
}

void signalsend_09_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_11_perform(const SampleValue * Yp2, SampleValue * out, Index n) {
    auto __paramtilde_11_sigbuf = this->paramtilde_11_sigbuf;
    auto __paramtilde_11_value = this->paramtilde_11_value;
    auto __paramtilde_11_lastIndex = this->paramtilde_11_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_11_lastIndex) {
            out[(Index)i] = Yp2[(Index)i] + __paramtilde_11_value;
        } else {
            out[(Index)i] = Yp2[(Index)i] + __paramtilde_11_sigbuf[(Index)i];
        }
    }

    __paramtilde_11_lastIndex = 0;
    this->paramtilde_11_lastIndex = __paramtilde_11_lastIndex;
}

void signalsend_10_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_12_perform(const SampleValue * Yp1, SampleValue * out, Index n) {
    auto __paramtilde_12_sigbuf = this->paramtilde_12_sigbuf;
    auto __paramtilde_12_value = this->paramtilde_12_value;
    auto __paramtilde_12_lastIndex = this->paramtilde_12_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_12_lastIndex) {
            out[(Index)i] = Yp1[(Index)i] + __paramtilde_12_value;
        } else {
            out[(Index)i] = Yp1[(Index)i] + __paramtilde_12_sigbuf[(Index)i];
        }
    }

    __paramtilde_12_lastIndex = 0;
    this->paramtilde_12_lastIndex = __paramtilde_12_lastIndex;
}

void signalsend_11_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_13_perform(const SampleValue * DeltaY, SampleValue * out, Index n) {
    auto __paramtilde_13_sigbuf = this->paramtilde_13_sigbuf;
    auto __paramtilde_13_value = this->paramtilde_13_value;
    auto __paramtilde_13_lastIndex = this->paramtilde_13_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_13_lastIndex) {
            out[(Index)i] = DeltaY[(Index)i] + __paramtilde_13_value;
        } else {
            out[(Index)i] = DeltaY[(Index)i] + __paramtilde_13_sigbuf[(Index)i];
        }
    }

    __paramtilde_13_lastIndex = 0;
    this->paramtilde_13_lastIndex = __paramtilde_13_lastIndex;
}

void dspexpr_39_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = 2 * (in1[(Index)i] / (number)360) * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_12_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_14_perform(const SampleValue * DeltaX, SampleValue * out, Index n) {
    auto __paramtilde_14_sigbuf = this->paramtilde_14_sigbuf;
    auto __paramtilde_14_value = this->paramtilde_14_value;
    auto __paramtilde_14_lastIndex = this->paramtilde_14_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_14_lastIndex) {
            out[(Index)i] = DeltaX[(Index)i] + __paramtilde_14_value;
        } else {
            out[(Index)i] = DeltaX[(Index)i] + __paramtilde_14_sigbuf[(Index)i];
        }
    }

    __paramtilde_14_lastIndex = 0;
    this->paramtilde_14_lastIndex = __paramtilde_14_lastIndex;
}

void dspexpr_40_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = 2 * (in1[(Index)i] / (number)360) * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_13_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_15_perform(const SampleValue * Ye4, SampleValue * out, Index n) {
    auto __paramtilde_15_sigbuf = this->paramtilde_15_sigbuf;
    auto __paramtilde_15_value = this->paramtilde_15_value;
    auto __paramtilde_15_lastIndex = this->paramtilde_15_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_15_lastIndex) {
            out[(Index)i] = Ye4[(Index)i] + __paramtilde_15_value;
        } else {
            out[(Index)i] = Ye4[(Index)i] + __paramtilde_15_sigbuf[(Index)i];
        }
    }

    __paramtilde_15_lastIndex = 0;
    this->paramtilde_15_lastIndex = __paramtilde_15_lastIndex;
}

void signalsend_14_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_16_perform(const SampleValue * Ye3, SampleValue * out, Index n) {
    auto __paramtilde_16_sigbuf = this->paramtilde_16_sigbuf;
    auto __paramtilde_16_value = this->paramtilde_16_value;
    auto __paramtilde_16_lastIndex = this->paramtilde_16_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_16_lastIndex) {
            out[(Index)i] = Ye3[(Index)i] + __paramtilde_16_value;
        } else {
            out[(Index)i] = Ye3[(Index)i] + __paramtilde_16_sigbuf[(Index)i];
        }
    }

    __paramtilde_16_lastIndex = 0;
    this->paramtilde_16_lastIndex = __paramtilde_16_lastIndex;
}

void signalsend_15_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_17_perform(const SampleValue * Ye2, SampleValue * out, Index n) {
    auto __paramtilde_17_sigbuf = this->paramtilde_17_sigbuf;
    auto __paramtilde_17_value = this->paramtilde_17_value;
    auto __paramtilde_17_lastIndex = this->paramtilde_17_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_17_lastIndex) {
            out[(Index)i] = Ye2[(Index)i] + __paramtilde_17_value;
        } else {
            out[(Index)i] = Ye2[(Index)i] + __paramtilde_17_sigbuf[(Index)i];
        }
    }

    __paramtilde_17_lastIndex = 0;
    this->paramtilde_17_lastIndex = __paramtilde_17_lastIndex;
}

void signalsend_16_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_18_perform(const SampleValue * Ye1, SampleValue * out, Index n) {
    auto __paramtilde_18_sigbuf = this->paramtilde_18_sigbuf;
    auto __paramtilde_18_value = this->paramtilde_18_value;
    auto __paramtilde_18_lastIndex = this->paramtilde_18_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_18_lastIndex) {
            out[(Index)i] = Ye1[(Index)i] + __paramtilde_18_value;
        } else {
            out[(Index)i] = Ye1[(Index)i] + __paramtilde_18_sigbuf[(Index)i];
        }
    }

    __paramtilde_18_lastIndex = 0;
    this->paramtilde_18_lastIndex = __paramtilde_18_lastIndex;
}

void signalsend_17_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_19_perform(const SampleValue * Y4, SampleValue * out, Index n) {
    auto __paramtilde_19_sigbuf = this->paramtilde_19_sigbuf;
    auto __paramtilde_19_value = this->paramtilde_19_value;
    auto __paramtilde_19_lastIndex = this->paramtilde_19_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_19_lastIndex) {
            out[(Index)i] = Y4[(Index)i] + __paramtilde_19_value;
        } else {
            out[(Index)i] = Y4[(Index)i] + __paramtilde_19_sigbuf[(Index)i];
        }
    }

    __paramtilde_19_lastIndex = 0;
    this->paramtilde_19_lastIndex = __paramtilde_19_lastIndex;
}

void signalsend_18_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_20_perform(const SampleValue * Y3, SampleValue * out, Index n) {
    auto __paramtilde_20_sigbuf = this->paramtilde_20_sigbuf;
    auto __paramtilde_20_value = this->paramtilde_20_value;
    auto __paramtilde_20_lastIndex = this->paramtilde_20_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_20_lastIndex) {
            out[(Index)i] = Y3[(Index)i] + __paramtilde_20_value;
        } else {
            out[(Index)i] = Y3[(Index)i] + __paramtilde_20_sigbuf[(Index)i];
        }
    }

    __paramtilde_20_lastIndex = 0;
    this->paramtilde_20_lastIndex = __paramtilde_20_lastIndex;
}

void signalsend_19_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_21_perform(const SampleValue * Y2, SampleValue * out, Index n) {
    auto __paramtilde_21_sigbuf = this->paramtilde_21_sigbuf;
    auto __paramtilde_21_value = this->paramtilde_21_value;
    auto __paramtilde_21_lastIndex = this->paramtilde_21_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_21_lastIndex) {
            out[(Index)i] = Y2[(Index)i] + __paramtilde_21_value;
        } else {
            out[(Index)i] = Y2[(Index)i] + __paramtilde_21_sigbuf[(Index)i];
        }
    }

    __paramtilde_21_lastIndex = 0;
    this->paramtilde_21_lastIndex = __paramtilde_21_lastIndex;
}

void signalsend_20_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_22_perform(const SampleValue * Y1, SampleValue * out, Index n) {
    auto __paramtilde_22_sigbuf = this->paramtilde_22_sigbuf;
    auto __paramtilde_22_value = this->paramtilde_22_value;
    auto __paramtilde_22_lastIndex = this->paramtilde_22_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_22_lastIndex) {
            out[(Index)i] = Y1[(Index)i] + __paramtilde_22_value;
        } else {
            out[(Index)i] = Y1[(Index)i] + __paramtilde_22_sigbuf[(Index)i];
        }
    }

    __paramtilde_22_lastIndex = 0;
    this->paramtilde_22_lastIndex = __paramtilde_22_lastIndex;
}

void signalsend_21_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void p_01_perform(
    const SampleValue * target_A,
    const SampleValue * target_duty,
    const SampleValue * target_r,
    const SampleValue * target_D,
    const SampleValue * target_S,
    const SampleValue * target_R,
    const SampleValue * target_x,
    const SampleValue * target_dx,
    const SampleValue * target_dy,
    const SampleValue * target_p1,
    const SampleValue * target_y1,
    const SampleValue * target_e1,
    const SampleValue * target_p2,
    const SampleValue * target_y2,
    const SampleValue * target_e2,
    const SampleValue * target_p3,
    const SampleValue * target_y3,
    const SampleValue * target_e3,
    const SampleValue * target_p4,
    const SampleValue * target_y4,
    const SampleValue * target_e4,
    SampleValue * out1,
    SampleValue * out2,
    Index n
) {
    // subpatcher: Heart
    ConstSampleArray<21> ins = {
        target_A,
        target_duty,
        target_r,
        target_D,
        target_S,
        target_R,
        target_x,
        target_dx,
        target_dy,
        target_p1,
        target_y1,
        target_e1,
        target_p2,
        target_y2,
        target_e2,
        target_p3,
        target_y3,
        target_e3,
        target_p4,
        target_y4,
        target_e4
    };

    SampleArray<2> outs = {out1, out2};

    for (number chan = 0; chan < 2; chan++)
        zeroSignal(outs[(Index)chan], n);

    for (Index i = 0; i < 32; i++)
        this->p_01[(Index)i]->process(ins, 21, outs, 2, n);
}

void dspexpr_36_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
    }
}

void dspexpr_38_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
    }
}

void stackprotect_perform(Index n) {
    RNBO_UNUSED(n);
    auto __stackprotect_count = this->stackprotect_count;
    __stackprotect_count = 0;
    this->stackprotect_count = __stackprotect_count;
}

void midiformat_02_channel_setter(number v) {
    this->midiformat_02_channel = (v > 16 ? 16 : (v < 1 ? 1 : v));
}

void paramtilde_01_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_01_value = v;
}

void paramtilde_02_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(6))) && v >= 6) {
        v = 6;
    }

    if ((bool)(!(bool)(isNaN(-70))) && v <= -70) {
        v = -70;
    }

    this->paramtilde_02_value = v;
}

void paramtilde_03_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(10000))) && v >= 10000) {
        v = 10000;
    }

    if ((bool)(!(bool)(isNaN(0))) && v <= 0) {
        v = 0;
    }

    this->paramtilde_03_value = v;
}

void paramtilde_04_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(0))) && v >= 0) {
        v = 0;
    }

    if ((bool)(!(bool)(isNaN(-70))) && v <= -70) {
        v = -70;
    }

    this->paramtilde_04_value = v;
}

void paramtilde_05_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(10000))) && v >= 10000) {
        v = 10000;
    }

    if ((bool)(!(bool)(isNaN(0))) && v <= 0) {
        v = 0;
    }

    this->paramtilde_05_value = v;
}

void paramtilde_06_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(10000))) && v >= 10000) {
        v = 10000;
    }

    if ((bool)(!(bool)(isNaN(0))) && v <= 0) {
        v = 0;
    }

    this->paramtilde_06_value = v;
}

void paramtilde_07_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(100))) && v >= 100) {
        v = 100;
    }

    if ((bool)(!(bool)(isNaN(0))) && v <= 0) {
        v = 0;
    }

    this->paramtilde_07_value = v;
}

void paramtilde_08_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_08_value = v;
}

void paramtilde_09_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_09_value = v;
}

void paramtilde_10_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_10_value = v;
}

void paramtilde_11_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_11_value = v;
}

void paramtilde_12_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_12_value = v;
}

void paramtilde_13_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_13_value = v;
}

void paramtilde_14_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_14_value = v;
}

void paramtilde_15_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_15_value = v;
}

void paramtilde_16_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_16_value = v;
}

void paramtilde_17_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_17_value = v;
}

void paramtilde_18_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_18_value = v;
}

void paramtilde_19_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_19_value = v;
}

void paramtilde_20_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_20_value = v;
}

void paramtilde_21_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_21_value = v;
}

void paramtilde_22_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(32))) && v >= 32) {
        v = 32;
    }

    if ((bool)(!(bool)(isNaN(-32))) && v <= -32) {
        v = -32;
    }

    this->paramtilde_22_value = v;
}

number midiformat_02_innerFormat_cclamp(number v) {
    return (v - 1 > 15 ? 15 : (v - 1 < 0 ? 0 : v - 1));
}

number midiformat_02_innerFormat_mclamp(number v) {
    return (v > 127 ? 127 : (v < 0 ? 0 : v));
}

array<number, 3> midiformat_02_innerFormat_chan3bytemsg(int status, number chan, number v0, number v1) {
    return {
        status + this->midiformat_02_innerFormat_cclamp(chan),
        this->midiformat_02_innerFormat_mclamp(v0),
        this->midiformat_02_innerFormat_mclamp(v1)
    };
}

array<number, 2> midiformat_02_innerFormat_chan2bytemsg(int status, number chan, number v) {
    return {
        status + this->midiformat_02_innerFormat_cclamp(chan),
        this->midiformat_02_innerFormat_mclamp(v)
    };
}

list midiformat_02_innerFormat_next(list data) {
    if (data->length > 1) {
        switch ((int)data[0]) {
        case 0:
            {
            if (data->length > 3) {
                array<number, 3> o = this->midiformat_02_innerFormat_note(data[1], data[2], data[3]);
                return {o[0], o[1], o[2]};
            }

            break;
            }
        case 1:
            {
            if (data->length > 3) {
                array<number, 3> o = this->midiformat_02_innerFormat_polypressure(data[1], data[2], data[3]);
                return {o[0], o[1], o[2]};
            }

            break;
            }
        case 2:
            {
            if (data->length > 3) {
                array<number, 3> o = this->midiformat_02_innerFormat_controlchange(data[1], data[2], data[3]);
                return {o[0], o[1], o[2]};
            }

            break;
            }
        case 3:
            {
            if (data->length > 2) {
                array<number, 2> o = this->midiformat_02_innerFormat_programchange(data[1], data[2]);
                return {o[0], o[1]};
            }

            break;
            }
        case 4:
            {
            if (data->length > 2) {
                array<number, 2> o = this->midiformat_02_innerFormat_aftertouch(data[1], data[2]);
                return {o[0], o[1]};
            }

            break;
            }
        case 5:
            {
            if (data->length > 2) {
                array<number, 3> o = this->midiformat_02_innerFormat_pitchbend(data[1], data[2]);
                return {o[0], o[1], o[2]};
            }

            break;
            }
        default:
            {
            break;
            }
        }
    }

    return {};
}

array<number, 3> midiformat_02_innerFormat_note(number pitch, number velocity, number channel) {
    return this->midiformat_02_innerFormat_chan3bytemsg(0x90, channel, pitch, velocity);
}

array<number, 3> midiformat_02_innerFormat_noterelease(number pitch, number velocity, number channel) {
    return this->midiformat_02_innerFormat_chan3bytemsg(0x80, channel, pitch, velocity);
}

array<number, 3> midiformat_02_innerFormat_pitchbend(number v, number channel) {
    const int stat = (const int)(0xE0 + this->midiformat_02_innerFormat_cclamp(channel));
    int i;

    {
        {
            v = (v > 1 ? 1 : (v < -1 ? -1 : v));

            if (v < 0) {
                i = 8192 * v + 8192 + 0.5;
            } else {
                i = 8191 * v + 8192 + 0.5;
            }
        }
    }

    return this->midiformat_02_innerFormat_chan3bytemsg(
        0xE0,
        channel,
        (BinOpInt)((UBinOpInt)i & (UBinOpInt)0x7F),
        (BinOpInt)((UBinOpInt)((UBinOpInt)i >> (UBinOpInt)7) & (UBinOpInt)0x7F)
    );
}

array<number, 3> midiformat_02_innerFormat_polypressure(number pressure, number pitch, number channel) {
    return this->midiformat_02_innerFormat_chan3bytemsg(0xA0, channel, pressure, pitch);
}

array<number, 3> midiformat_02_innerFormat_controlchange(number num, number value, number channel) {
    return this->midiformat_02_innerFormat_chan3bytemsg(0xB0, channel, num, value);
}

array<number, 2> midiformat_02_innerFormat_programchange(number num, number channel) {
    return this->midiformat_02_innerFormat_chan2bytemsg(0xC0, channel, num);
}

array<number, 2> midiformat_02_innerFormat_aftertouch(number value, number channel) {
    return this->midiformat_02_innerFormat_chan2bytemsg(0xD0, channel, value);
}

void midiformat_02_innerFormat_reset() {}

void midiformat_02_send3byte(array<number, 3> bytes) {
    this->midiformat_02_midimessage_set(bytes[0]);
    this->midiformat_02_midimessage_set(bytes[1]);
    this->midiformat_02_midimessage_set(bytes[2]);
}

void midiformat_02_send2byte(array<number, 2> bytes) {
    this->midiformat_02_midimessage_set(bytes[0]);
    this->midiformat_02_midimessage_set(bytes[1]);
}

void param_01_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_01_value;
}

void param_01_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_01_value_set(preset["value"]);
}

void paramtilde_01_dspsetup(bool force) {
    if ((bool)(this->paramtilde_01_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_01_lastIndex = 0;
    this->paramtilde_01_setupDone = true;
}

number p_01_calcActiveVoices() {
    {
        number activeVoices = 0;

        for (Index i = 0; i < 32; i++) {
            if ((bool)(!(bool)(this->p_01[(Index)i]->getIsMuted())))
                activeVoices++;
        }

        return activeVoices;
    }
}

void paramtilde_02_dspsetup(bool force) {
    if ((bool)(this->paramtilde_02_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_02_lastIndex = 0;
    this->paramtilde_02_setupDone = true;
}

void paramtilde_03_dspsetup(bool force) {
    if ((bool)(this->paramtilde_03_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_03_lastIndex = 0;
    this->paramtilde_03_setupDone = true;
}

void paramtilde_04_dspsetup(bool force) {
    if ((bool)(this->paramtilde_04_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_04_lastIndex = 0;
    this->paramtilde_04_setupDone = true;
}

void paramtilde_05_dspsetup(bool force) {
    if ((bool)(this->paramtilde_05_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_05_lastIndex = 0;
    this->paramtilde_05_setupDone = true;
}

void paramtilde_06_dspsetup(bool force) {
    if ((bool)(this->paramtilde_06_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_06_lastIndex = 0;
    this->paramtilde_06_setupDone = true;
}

void paramtilde_07_dspsetup(bool force) {
    if ((bool)(this->paramtilde_07_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_07_lastIndex = 0;
    this->paramtilde_07_setupDone = true;
}

void param_02_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_02_value;
}

void param_02_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_02_value_set(preset["value"]);
}

void paramtilde_08_dspsetup(bool force) {
    if ((bool)(this->paramtilde_08_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_08_lastIndex = 0;
    this->paramtilde_08_setupDone = true;
}

void paramtilde_09_dspsetup(bool force) {
    if ((bool)(this->paramtilde_09_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_09_lastIndex = 0;
    this->paramtilde_09_setupDone = true;
}

void paramtilde_10_dspsetup(bool force) {
    if ((bool)(this->paramtilde_10_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_10_lastIndex = 0;
    this->paramtilde_10_setupDone = true;
}

void paramtilde_11_dspsetup(bool force) {
    if ((bool)(this->paramtilde_11_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_11_lastIndex = 0;
    this->paramtilde_11_setupDone = true;
}

void paramtilde_12_dspsetup(bool force) {
    if ((bool)(this->paramtilde_12_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_12_lastIndex = 0;
    this->paramtilde_12_setupDone = true;
}

void paramtilde_13_dspsetup(bool force) {
    if ((bool)(this->paramtilde_13_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_13_lastIndex = 0;
    this->paramtilde_13_setupDone = true;
}

void paramtilde_14_dspsetup(bool force) {
    if ((bool)(this->paramtilde_14_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_14_lastIndex = 0;
    this->paramtilde_14_setupDone = true;
}

list midiparse_02_parser_next(number midiin) {
    int midivalue = (int)(rnbo_trunc(midiin));
    list result = list(-1);
    number resetByte1 = false;

    if (midivalue > 127) {
        this->midiparse_02_parser_status = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0xFF);
        this->midiparse_02_parser_byte1 = -1;
    } else {
        switch ((int)((UBinOpInt)this->midiparse_02_parser_status & (UBinOpInt)0xF0)) {
        case 0xB0:
            {
            if (this->midiparse_02_parser_byte1 == -1) {
                this->midiparse_02_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
            } else {
                result = {
                    2,
                    this->midiparse_02_parser_byte1,
                    (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                    (BinOpInt)((UBinOpInt)(1 + this->midiparse_02_parser_status) & (UBinOpInt)0x0F)
                };

                resetByte1 = true;
            }

            break;
            }
        case 0xA0:
            {
            if (this->midiparse_02_parser_byte1 == -1) {
                this->midiparse_02_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
            } else {
                result = {
                    1,
                    this->midiparse_02_parser_byte1,
                    (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                    (BinOpInt)((UBinOpInt)(1 + this->midiparse_02_parser_status) & (UBinOpInt)0x0F)
                };

                resetByte1 = true;
            }

            break;
            }
        case 0xE0:
            {
            if (this->midiparse_02_parser_byte1 == -1) {
                this->midiparse_02_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
            } else {
                number pitchbend;

                {
                    number val = this->midiparse_02_parser_byte1 + ((BinOpInt)(((UBinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F)) << (UBinOpInt)7));

                    {
                        val -= 0x2000;
                        pitchbend = val / (number)8192;
                    }
                }

                result = {
                    5,
                    pitchbend,
                    (BinOpInt)((UBinOpInt)(1 + this->midiparse_02_parser_status) & (UBinOpInt)0x0F)
                };

                resetByte1 = true;
            }

            break;
            }
        case 0xD0:
            {
            result = {
                4,
                (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                (BinOpInt)((UBinOpInt)(1 + this->midiparse_02_parser_status) & (UBinOpInt)0x0F)
            };

            break;
            }
        case 0x90:
            {
            if (this->midiparse_02_parser_byte1 == -1) {
                this->midiparse_02_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
            } else {
                result = {
                    0,
                    this->midiparse_02_parser_byte1,
                    (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                    (BinOpInt)((UBinOpInt)(1 + this->midiparse_02_parser_status) & (UBinOpInt)0x0F)
                };

                resetByte1 = true;
            }

            break;
            }
        case 0xC0:
            {
            result = {
                3,
                (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F),
                (BinOpInt)((UBinOpInt)(1 + this->midiparse_02_parser_status) & (UBinOpInt)0x0F)
            };

            break;
            }
        case 0x80:
            {
            if (this->midiparse_02_parser_byte1 == -1) {
                this->midiparse_02_parser_byte1 = (BinOpInt)((UBinOpInt)midivalue & (UBinOpInt)0x7F);
            } else {
                result = {
                    0,
                    this->midiparse_02_parser_byte1,
                    0,
                    (BinOpInt)((UBinOpInt)(1 + this->midiparse_02_parser_status) & (UBinOpInt)0x0F)
                };

                resetByte1 = true;
            }

            break;
            }
        default:
            {
            result = {-1};
            }
        }
    }

    if (result->length > 1) {
        result->push(this->midiparse_02_parser_status);
        result->push(this->midiparse_02_parser_byte1);
        result->push(midivalue);
    }

    if ((bool)(resetByte1)) {
        this->midiparse_02_parser_byte1 = -1;
    }

    return result;
}

void midiparse_02_parser_reset() {
    this->midiparse_02_parser_status = -1;
    this->midiparse_02_parser_byte1 = -1;
}

void paramtilde_15_dspsetup(bool force) {
    if ((bool)(this->paramtilde_15_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_15_lastIndex = 0;
    this->paramtilde_15_setupDone = true;
}

void paramtilde_16_dspsetup(bool force) {
    if ((bool)(this->paramtilde_16_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_16_lastIndex = 0;
    this->paramtilde_16_setupDone = true;
}

void paramtilde_17_dspsetup(bool force) {
    if ((bool)(this->paramtilde_17_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_17_lastIndex = 0;
    this->paramtilde_17_setupDone = true;
}

void paramtilde_18_dspsetup(bool force) {
    if ((bool)(this->paramtilde_18_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_18_lastIndex = 0;
    this->paramtilde_18_setupDone = true;
}

void paramtilde_19_dspsetup(bool force) {
    if ((bool)(this->paramtilde_19_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_19_lastIndex = 0;
    this->paramtilde_19_setupDone = true;
}

void paramtilde_20_dspsetup(bool force) {
    if ((bool)(this->paramtilde_20_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_20_lastIndex = 0;
    this->paramtilde_20_setupDone = true;
}

void paramtilde_21_dspsetup(bool force) {
    if ((bool)(this->paramtilde_21_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_21_lastIndex = 0;
    this->paramtilde_21_setupDone = true;
}

void paramtilde_22_dspsetup(bool force) {
    if ((bool)(this->paramtilde_22_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_22_lastIndex = 0;
    this->paramtilde_22_setupDone = true;
}

void midinotecontroller_01_init() {
    for (Index i = 0; i < 16; i++) {
        this->midinotecontroller_01_channel_pitchbend[(Index)i] = 0x2000;
    }

    for (Index i = 0; i < 32; i++) {
        this->midinotecontroller_01_voice_lastontime[(Index)i] = -1;
    }
}

void midinotecontroller_01_sendnoteoff(int target) {
    int i = (int)(target - 1);

    if (this->midinotecontroller_01_voice_state[(Index)i] != MIDI_NoteState_Off) {
        number currentTarget = this->midinotecontroller_01_currenttarget;
        this->midinotecontroller_01_target_set(target);

        this->midinotecontroller_01_midiout_set(
            (BinOpInt)((UBinOpInt)MIDI_NoteOffMask | (UBinOpInt)this->midinotecontroller_01_voice_channel[(Index)i])
        );

        this->midinotecontroller_01_midiout_set(this->midinotecontroller_01_voice_notenumber[(Index)i]);
        this->midinotecontroller_01_midiout_set(64);
        this->midinotecontroller_01_voice_state[(Index)i] = MIDI_NoteState_Off;
        this->midinotecontroller_01_target_set(currentTarget);
    }
}

void midinotecontroller_01_sendpitchbend(int v) {
    if (v >= 0 && v < 32) {
        number currentTarget = this->midinotecontroller_01_currenttarget;
        this->midinotecontroller_01_target_set(v + 1);
        int totalbendamount = (int)(this->midinotecontroller_01_channel_pitchbend[(Index)this->midinotecontroller_01_voice_channel[(Index)v]]);

        this->midinotecontroller_01_midiout_set(
            (BinOpInt)((UBinOpInt)MIDI_PitchBendMask | (UBinOpInt)this->midinotecontroller_01_voice_channel[(Index)v])
        );

        this->midinotecontroller_01_midiout_set((BinOpInt)((UBinOpInt)totalbendamount & (UBinOpInt)0x7F));

        this->midinotecontroller_01_midiout_set(
            (BinOpInt)((UBinOpInt)((UBinOpInt)totalbendamount >> (UBinOpInt)7) & (UBinOpInt)0x7F)
        );

        this->midinotecontroller_01_target_set(currentTarget);
    }
}

void midinotecontroller_01_sendpressure(int v) {
    number currentTarget = this->midinotecontroller_01_currenttarget;
    this->midinotecontroller_01_target_set(v + 1);

    this->midinotecontroller_01_midiout_set(
        (BinOpInt)((UBinOpInt)MIDI_ChannelPressureMask | (UBinOpInt)this->midinotecontroller_01_voice_channel[(Index)v])
    );

    this->midinotecontroller_01_midiout_set(
        this->midinotecontroller_01_channel_pressure[(Index)this->midinotecontroller_01_voice_channel[(Index)v]]
    );

    this->midinotecontroller_01_target_set(currentTarget);
}

void midinotecontroller_01_sendtimbre(int v) {
    number currentTarget = this->midinotecontroller_01_currenttarget;
    this->midinotecontroller_01_target_set(v + 1);

    this->midinotecontroller_01_midiout_set(
        (BinOpInt)((UBinOpInt)MIDI_CCMask | (UBinOpInt)this->midinotecontroller_01_voice_channel[(Index)v])
    );

    this->midinotecontroller_01_midiout_set(MIDI_CC_TimbreLSB);

    this->midinotecontroller_01_midiout_set(
        (BinOpInt)((UBinOpInt)this->midinotecontroller_01_channel_timbre[(Index)this->midinotecontroller_01_voice_channel[(Index)v]] & (UBinOpInt)0x7F)
    );

    this->midinotecontroller_01_midiout_set(
        (BinOpInt)((UBinOpInt)MIDI_CCMask | (UBinOpInt)this->midinotecontroller_01_voice_channel[(Index)v])
    );

    this->midinotecontroller_01_midiout_set(MIDI_CC_TimbreMSB);

    this->midinotecontroller_01_midiout_set(
        (BinOpInt)((UBinOpInt)((UBinOpInt)this->midinotecontroller_01_channel_timbre[(Index)this->midinotecontroller_01_voice_channel[(Index)v]] >> (UBinOpInt)7) & (UBinOpInt)0x7F)
    );

    this->midinotecontroller_01_target_set(currentTarget);
}

void midinotecontroller_01_sendallnotesoff() {
    for (Index i = 1; i <= 32; i++) {
        this->midinotecontroller_01_sendnoteoff(i);
    }
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
    midiformat_02_channel = 0;
    midiformat_02_channel_setter(midiformat_02_channel);
    midiformat_02_pitchbend = 0;
    send_01_input_number = 0;
    param_01_value = 2;
    dspexpr_32_in1 = 0;
    paramtilde_01_value = 0;
    paramtilde_01_value_setter(paramtilde_01_value);
    p_01_target = 0;
    p_01_midiin = 0;
    dspexpr_33_in1 = 0;
    paramtilde_02_value = 0;
    paramtilde_02_value_setter(paramtilde_02_value);
    dspexpr_34_in1 = 0;
    paramtilde_03_value = 100;
    paramtilde_03_value_setter(paramtilde_03_value);
    paramtilde_04_value = 0;
    paramtilde_04_value_setter(paramtilde_04_value);
    paramtilde_05_value = 10;
    paramtilde_05_value_setter(paramtilde_05_value);
    paramtilde_06_value = 10;
    paramtilde_06_value_setter(paramtilde_06_value);
    dspexpr_35_in1 = 0;
    dspexpr_35_in2 = 100;
    paramtilde_07_value = 100;
    paramtilde_07_value_setter(paramtilde_07_value);
    dspexpr_36_in1 = 0;
    dspexpr_36_in2 = 1;
    dspexpr_37_in1 = 0;
    dspexpr_37_in2 = 0.01;
    dspexpr_38_in1 = 0;
    dspexpr_38_in2 = 1;
    param_02_value = 0;
    paramtilde_08_value = 1;
    paramtilde_08_value_setter(paramtilde_08_value);
    paramtilde_09_value = 4;
    paramtilde_09_value_setter(paramtilde_09_value);
    paramtilde_10_value = 3;
    paramtilde_10_value_setter(paramtilde_10_value);
    paramtilde_11_value = 2;
    paramtilde_11_value_setter(paramtilde_11_value);
    paramtilde_12_value = 1;
    paramtilde_12_value_setter(paramtilde_12_value);
    dspexpr_39_in1 = 0;
    dspexpr_40_in1 = 0;
    paramtilde_13_value = 0;
    paramtilde_13_value_setter(paramtilde_13_value);
    paramtilde_14_value = 0;
    paramtilde_14_value_setter(paramtilde_14_value);
    midiout_02_port = 0;
    paramtilde_15_value = 1;
    paramtilde_15_value_setter(paramtilde_15_value);
    paramtilde_16_value = 1;
    paramtilde_16_value_setter(paramtilde_16_value);
    paramtilde_17_value = 1;
    paramtilde_17_value_setter(paramtilde_17_value);
    paramtilde_18_value = 1;
    paramtilde_18_value_setter(paramtilde_18_value);
    midiin_02_port = 0;
    paramtilde_19_value = -1;
    paramtilde_19_value_setter(paramtilde_19_value);
    paramtilde_20_value = -2;
    paramtilde_20_value_setter(paramtilde_20_value);
    paramtilde_21_value = -5;
    paramtilde_21_value_setter(paramtilde_21_value);
    paramtilde_22_value = 13;
    paramtilde_22_value_setter(paramtilde_22_value);
    midinotecontroller_01_currenttarget = 0;
    midinotecontroller_01_midiin = 0;
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
    signals[10] = nullptr;
    signals[11] = nullptr;
    signals[12] = nullptr;
    signals[13] = nullptr;
    signals[14] = nullptr;
    signals[15] = nullptr;
    signals[16] = nullptr;
    signals[17] = nullptr;
    signals[18] = nullptr;
    signals[19] = nullptr;
    signals[20] = nullptr;
    signals[21] = nullptr;
    signals[22] = nullptr;
    signals[23] = nullptr;
    didAllocateSignals = 0;
    vs = 0;
    maxvs = 0;
    sr = 44100;
    invsr = 0.00002267573696;
    param_01_lastValue = 0;
    paramtilde_01_lastIndex = 0;
    paramtilde_01_sigbuf = nullptr;
    paramtilde_01_setupDone = false;
    p_01_currentStatus = -1;
    p_01_mididata[0] = 0;
    p_01_mididata[1] = 0;
    p_01_mididata[2] = 0;
    paramtilde_02_lastIndex = 0;
    paramtilde_02_sigbuf = nullptr;
    paramtilde_02_setupDone = false;
    paramtilde_03_lastIndex = 0;
    paramtilde_03_sigbuf = nullptr;
    paramtilde_03_setupDone = false;
    paramtilde_04_lastIndex = 0;
    paramtilde_04_sigbuf = nullptr;
    paramtilde_04_setupDone = false;
    paramtilde_05_lastIndex = 0;
    paramtilde_05_sigbuf = nullptr;
    paramtilde_05_setupDone = false;
    paramtilde_06_lastIndex = 0;
    paramtilde_06_sigbuf = nullptr;
    paramtilde_06_setupDone = false;
    paramtilde_07_lastIndex = 0;
    paramtilde_07_sigbuf = nullptr;
    paramtilde_07_setupDone = false;
    param_02_lastValue = 0;
    paramtilde_08_lastIndex = 0;
    paramtilde_08_sigbuf = nullptr;
    paramtilde_08_setupDone = false;
    paramtilde_09_lastIndex = 0;
    paramtilde_09_sigbuf = nullptr;
    paramtilde_09_setupDone = false;
    paramtilde_10_lastIndex = 0;
    paramtilde_10_sigbuf = nullptr;
    paramtilde_10_setupDone = false;
    paramtilde_11_lastIndex = 0;
    paramtilde_11_sigbuf = nullptr;
    paramtilde_11_setupDone = false;
    paramtilde_12_lastIndex = 0;
    paramtilde_12_sigbuf = nullptr;
    paramtilde_12_setupDone = false;
    paramtilde_13_lastIndex = 0;
    paramtilde_13_sigbuf = nullptr;
    paramtilde_13_setupDone = false;
    paramtilde_14_lastIndex = 0;
    paramtilde_14_sigbuf = nullptr;
    paramtilde_14_setupDone = false;
    midiout_02_currentStatus = -1;
    midiout_02_status = -1;
    midiout_02_byte1 = -1;
    midiparse_02_parser_status = -1;
    midiparse_02_parser_byte1 = -1;
    paramtilde_15_lastIndex = 0;
    paramtilde_15_sigbuf = nullptr;
    paramtilde_15_setupDone = false;
    paramtilde_16_lastIndex = 0;
    paramtilde_16_sigbuf = nullptr;
    paramtilde_16_setupDone = false;
    paramtilde_17_lastIndex = 0;
    paramtilde_17_sigbuf = nullptr;
    paramtilde_17_setupDone = false;
    paramtilde_18_lastIndex = 0;
    paramtilde_18_sigbuf = nullptr;
    paramtilde_18_setupDone = false;
    paramtilde_19_lastIndex = 0;
    paramtilde_19_sigbuf = nullptr;
    paramtilde_19_setupDone = false;
    paramtilde_20_lastIndex = 0;
    paramtilde_20_sigbuf = nullptr;
    paramtilde_20_setupDone = false;
    paramtilde_21_lastIndex = 0;
    paramtilde_21_sigbuf = nullptr;
    paramtilde_21_setupDone = false;
    paramtilde_22_lastIndex = 0;
    paramtilde_22_sigbuf = nullptr;
    paramtilde_22_setupDone = false;
    midinotecontroller_01_currentStatus = -1;
    midinotecontroller_01_status = -1;
    midinotecontroller_01_byte1 = -1;
    midinotecontroller_01_zone_masterchannel = 1;
    midinotecontroller_01_zone_numnotechannels = 15;
    midinotecontroller_01_zone_masterpitchbendrange = 2;
    midinotecontroller_01_zone_pernotepitchbendrange = 48;
    midinotecontroller_01_muteval = { 0, 0 };
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

    number midiformat_02_channel;
    number midiformat_02_pitchbend;
    number send_01_input_number;
    list send_01_input_list;
    number param_01_value;
    number dspexpr_32_in1;
    number paramtilde_01_value;
    number p_01_target;
    number p_01_midiin;
    number dspexpr_33_in1;
    number paramtilde_02_value;
    number dspexpr_34_in1;
    number paramtilde_03_value;
    number paramtilde_04_value;
    number paramtilde_05_value;
    number paramtilde_06_value;
    number dspexpr_35_in1;
    number dspexpr_35_in2;
    number paramtilde_07_value;
    number dspexpr_36_in1;
    number dspexpr_36_in2;
    number dspexpr_37_in1;
    number dspexpr_37_in2;
    number dspexpr_38_in1;
    number dspexpr_38_in2;
    number param_02_value;
    number paramtilde_08_value;
    number paramtilde_09_value;
    number paramtilde_10_value;
    number paramtilde_11_value;
    number paramtilde_12_value;
    number dspexpr_39_in1;
    number dspexpr_40_in1;
    number paramtilde_13_value;
    number paramtilde_14_value;
    number midiout_02_port;
    number paramtilde_15_value;
    number paramtilde_16_value;
    number paramtilde_17_value;
    number paramtilde_18_value;
    number midiin_02_port;
    number paramtilde_19_value;
    number paramtilde_20_value;
    number paramtilde_21_value;
    number paramtilde_22_value;
    number midinotecontroller_01_currenttarget;
    number midinotecontroller_01_midiin;
    MillisecondTime _currentTime;
    SampleIndex audioProcessSampleCount;
    SampleIndex sampleOffsetIntoNextAudioBuffer;
    signal zeroBuffer;
    signal dummyBuffer;
    SampleValue * signals[24];
    bool didAllocateSignals;
    Index vs;
    Index maxvs;
    number sr;
    number invsr;
    number param_01_lastValue;
    SampleIndex paramtilde_01_lastIndex;
    signal paramtilde_01_sigbuf;
    bool paramtilde_01_setupDone;
    int p_01_currentStatus;
    uint8_t p_01_mididata[3];
    SampleIndex paramtilde_02_lastIndex;
    signal paramtilde_02_sigbuf;
    bool paramtilde_02_setupDone;
    SampleIndex paramtilde_03_lastIndex;
    signal paramtilde_03_sigbuf;
    bool paramtilde_03_setupDone;
    SampleIndex paramtilde_04_lastIndex;
    signal paramtilde_04_sigbuf;
    bool paramtilde_04_setupDone;
    SampleIndex paramtilde_05_lastIndex;
    signal paramtilde_05_sigbuf;
    bool paramtilde_05_setupDone;
    SampleIndex paramtilde_06_lastIndex;
    signal paramtilde_06_sigbuf;
    bool paramtilde_06_setupDone;
    SampleIndex paramtilde_07_lastIndex;
    signal paramtilde_07_sigbuf;
    bool paramtilde_07_setupDone;
    number param_02_lastValue;
    SampleIndex paramtilde_08_lastIndex;
    signal paramtilde_08_sigbuf;
    bool paramtilde_08_setupDone;
    SampleIndex paramtilde_09_lastIndex;
    signal paramtilde_09_sigbuf;
    bool paramtilde_09_setupDone;
    SampleIndex paramtilde_10_lastIndex;
    signal paramtilde_10_sigbuf;
    bool paramtilde_10_setupDone;
    SampleIndex paramtilde_11_lastIndex;
    signal paramtilde_11_sigbuf;
    bool paramtilde_11_setupDone;
    SampleIndex paramtilde_12_lastIndex;
    signal paramtilde_12_sigbuf;
    bool paramtilde_12_setupDone;
    SampleIndex paramtilde_13_lastIndex;
    signal paramtilde_13_sigbuf;
    bool paramtilde_13_setupDone;
    SampleIndex paramtilde_14_lastIndex;
    signal paramtilde_14_sigbuf;
    bool paramtilde_14_setupDone;
    int midiout_02_currentStatus;
    int midiout_02_status;
    int midiout_02_byte1;
    list midiout_02_sysex;
    int midiparse_02_parser_status;
    int midiparse_02_parser_byte1;
    SampleIndex paramtilde_15_lastIndex;
    signal paramtilde_15_sigbuf;
    bool paramtilde_15_setupDone;
    SampleIndex paramtilde_16_lastIndex;
    signal paramtilde_16_sigbuf;
    bool paramtilde_16_setupDone;
    SampleIndex paramtilde_17_lastIndex;
    signal paramtilde_17_sigbuf;
    bool paramtilde_17_setupDone;
    SampleIndex paramtilde_18_lastIndex;
    signal paramtilde_18_sigbuf;
    bool paramtilde_18_setupDone;
    SampleIndex paramtilde_19_lastIndex;
    signal paramtilde_19_sigbuf;
    bool paramtilde_19_setupDone;
    SampleIndex paramtilde_20_lastIndex;
    signal paramtilde_20_sigbuf;
    bool paramtilde_20_setupDone;
    SampleIndex paramtilde_21_lastIndex;
    signal paramtilde_21_sigbuf;
    bool paramtilde_21_setupDone;
    SampleIndex paramtilde_22_lastIndex;
    signal paramtilde_22_sigbuf;
    bool paramtilde_22_setupDone;
    int midinotecontroller_01_currentStatus;
    int midinotecontroller_01_status;
    int midinotecontroller_01_byte1;
    int midinotecontroller_01_zone_masterchannel;
    int midinotecontroller_01_zone_numnotechannels;
    int midinotecontroller_01_zone_masterpitchbendrange;
    int midinotecontroller_01_zone_pernotepitchbendrange;
    number midinotecontroller_01_channel_pitchbend[16] = { };
    number midinotecontroller_01_channel_pressure[16] = { };
    number midinotecontroller_01_channel_timbre[16] = { };
    Int midinotecontroller_01_channel_sustain[16] = { };
    number midinotecontroller_01_voice_lastontime[32] = { };
    number midinotecontroller_01_voice_notenumber[32] = { };
    number midinotecontroller_01_voice_channel[32] = { };
    number midinotecontroller_01_voice_state[32] = { };
    number midinotecontroller_01_notesdown[129] = { };
    number midinotecontroller_01_note_lastvelocity[128] = { };
    list midinotecontroller_01_muteval;
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
    DataRef RNBODefaultMtofLookupTable256;
    Index _voiceIndex;
    Int _noteNumber;
    Index isMuted;
    indexlist paramInitIndices;
    indexlist paramInitOrder;
    RNBOSubpatcher_149* p_01[32];

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

