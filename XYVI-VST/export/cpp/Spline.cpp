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

class RNBOSubpatcher_760 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    class RNBOSubpatcher_753 : public PatcherInterfaceImpl {
            
            friend class RNBOSubpatcher_760;
            friend class rnbomatic;
            
            public:
            
            RNBOSubpatcher_753()
            {
            }
            
            ~RNBOSubpatcher_753()
            {
            }
            
            virtual RNBOSubpatcher_760* getPatcher() const {
                return static_cast<RNBOSubpatcher_760 *>(_parentPatcher);
            }
            
            rnbomatic* getTopLevelPatcher() {
                return this->getPatcher()->getTopLevelPatcher();
            }
            
            void cancelClockEvents()
            {
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
                SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
                SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
                const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
                const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
                const SampleValue * in3 = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
                const SampleValue * in4 = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
                const SampleValue * in5 = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
                const SampleValue * in6 = (numInputs >= 6 && inputs[5] ? inputs[5] : this->zeroBuffer);
                const SampleValue * in7 = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
                const SampleValue * in8 = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
                const SampleValue * in9 = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
                const SampleValue * in10 = (numInputs >= 10 && inputs[9] ? inputs[9] : this->zeroBuffer);
                const SampleValue * in11 = (numInputs >= 11 && inputs[10] ? inputs[10] : this->zeroBuffer);
                const SampleValue * in12 = (numInputs >= 12 && inputs[11] ? inputs[11] : this->zeroBuffer);
                const SampleValue * in13 = (numInputs >= 13 && inputs[12] ? inputs[12] : this->zeroBuffer);
                const SampleValue * in14 = (numInputs >= 14 && inputs[13] ? inputs[13] : this->zeroBuffer);
                const SampleValue * in15 = (numInputs >= 15 && inputs[14] ? inputs[14] : this->zeroBuffer);
                const SampleValue * in16 = (numInputs >= 16 && inputs[15] ? inputs[15] : this->zeroBuffer);
                const SampleValue * in17 = (numInputs >= 17 && inputs[16] ? inputs[16] : this->zeroBuffer);
                const SampleValue * in18 = (numInputs >= 18 && inputs[17] ? inputs[17] : this->zeroBuffer);
                const SampleValue * in19 = (numInputs >= 19 && inputs[18] ? inputs[18] : this->zeroBuffer);
                const SampleValue * in20 = (numInputs >= 20 && inputs[19] ? inputs[19] : this->zeroBuffer);
                const SampleValue * in21 = (numInputs >= 21 && inputs[20] ? inputs[20] : this->zeroBuffer);
                this->selector_01_perform(in1, in2, in3, in4, in5, in6, in7, in8, in9, in10, in11, out1, n);
                this->selector_02_perform(in1, in12, in13, in14, in15, in16, in17, in18, in19, in20, in21, out2, n);
                this->stackprotect_perform(n);
                this->audioProcessSampleCount += this->vs;
            }
            
            void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
                if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
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
            
                RNBO_UNUSED(forceDSPSetup);
            
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
            
            ParameterIndex getNumSignalInParameters() const {
                return 0;
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
                this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
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
            
            void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
            
            void initialize() {
                this->assign_defaults();
                this->setState();
            }
            
            protected:
            
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
                return 21;
            }
            
            Index getNumOutputChannels() const {
                return 2;
            }
            
            void initializeObjects() {}
            
            void sendOutlet(OutletIndex index, ParameterValue value) {
                this->getEngine()->sendOutlet(this, index, value);
            }
            
            void startup() {}
            
            void allocateDataRefs() {}
            
            void selector_01_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_02_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void stackprotect_perform(Index n) {
                RNBO_UNUSED(n);
                auto __stackprotect_count = this->stackprotect_count;
                __stackprotect_count = 0;
                this->stackprotect_count = __stackprotect_count;
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
                selector_01_onoff = 1;
                selector_02_onoff = 1;
                _currentTime = 0;
                audioProcessSampleCount = 0;
                sampleOffsetIntoNextAudioBuffer = 0;
                zeroBuffer = nullptr;
                dummyBuffer = nullptr;
                didAllocateSignals = 0;
                vs = 0;
                maxvs = 0;
                sr = 44100;
                invsr = 0.00002267573696;
                stackprotect_count = 0;
                _voiceIndex = 0;
                _noteNumber = 0;
                isMuted = 1;
                parameterOffset = 0;
            }
            
            // member variables
            
                number selector_01_onoff;
                number selector_02_onoff;
                MillisecondTime _currentTime;
                SampleIndex audioProcessSampleCount;
                SampleIndex sampleOffsetIntoNextAudioBuffer;
                signal zeroBuffer;
                signal dummyBuffer;
                bool didAllocateSignals;
                Index vs;
                Index maxvs;
                number sr;
                number invsr;
                number stackprotect_count;
                Index _voiceIndex;
                Int _noteNumber;
                Index isMuted;
                ParameterIndex parameterOffset;
            
    };
    
    class RNBOSubpatcher_754 : public PatcherInterfaceImpl {
            
            friend class RNBOSubpatcher_760;
            friend class rnbomatic;
            
            public:
            
            RNBOSubpatcher_754()
            {
            }
            
            ~RNBOSubpatcher_754()
            {
            }
            
            virtual RNBOSubpatcher_760* getPatcher() const {
                return static_cast<RNBOSubpatcher_760 *>(_parentPatcher);
            }
            
            rnbomatic* getTopLevelPatcher() {
                return this->getPatcher()->getTopLevelPatcher();
            }
            
            void cancelClockEvents()
            {
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
                SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
                SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
                const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
                const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
                const SampleValue * in3 = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
                const SampleValue * in4 = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
                const SampleValue * in5 = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
                const SampleValue * in6 = (numInputs >= 6 && inputs[5] ? inputs[5] : this->zeroBuffer);
                const SampleValue * in7 = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
                const SampleValue * in8 = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
                const SampleValue * in9 = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
                const SampleValue * in10 = (numInputs >= 10 && inputs[9] ? inputs[9] : this->zeroBuffer);
                const SampleValue * in11 = (numInputs >= 11 && inputs[10] ? inputs[10] : this->zeroBuffer);
                const SampleValue * in12 = (numInputs >= 12 && inputs[11] ? inputs[11] : this->zeroBuffer);
                const SampleValue * in13 = (numInputs >= 13 && inputs[12] ? inputs[12] : this->zeroBuffer);
                const SampleValue * in14 = (numInputs >= 14 && inputs[13] ? inputs[13] : this->zeroBuffer);
                const SampleValue * in15 = (numInputs >= 15 && inputs[14] ? inputs[14] : this->zeroBuffer);
                const SampleValue * in16 = (numInputs >= 16 && inputs[15] ? inputs[15] : this->zeroBuffer);
                const SampleValue * in17 = (numInputs >= 17 && inputs[16] ? inputs[16] : this->zeroBuffer);
                const SampleValue * in18 = (numInputs >= 18 && inputs[17] ? inputs[17] : this->zeroBuffer);
                const SampleValue * in19 = (numInputs >= 19 && inputs[18] ? inputs[18] : this->zeroBuffer);
                const SampleValue * in20 = (numInputs >= 20 && inputs[19] ? inputs[19] : this->zeroBuffer);
                const SampleValue * in21 = (numInputs >= 21 && inputs[20] ? inputs[20] : this->zeroBuffer);
                this->selector_03_perform(in1, in2, in3, in4, in5, in6, in7, in8, in9, in10, in11, out1, n);
                this->selector_04_perform(in1, in12, in13, in14, in15, in16, in17, in18, in19, in20, in21, out2, n);
                this->stackprotect_perform(n);
                this->audioProcessSampleCount += this->vs;
            }
            
            void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
                if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
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
            
                RNBO_UNUSED(forceDSPSetup);
            
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
            
            ParameterIndex getNumSignalInParameters() const {
                return 0;
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
                this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
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
            
            void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
            
            void initialize() {
                this->assign_defaults();
                this->setState();
            }
            
            protected:
            
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
                return 21;
            }
            
            Index getNumOutputChannels() const {
                return 2;
            }
            
            void initializeObjects() {}
            
            void sendOutlet(OutletIndex index, ParameterValue value) {
                this->getEngine()->sendOutlet(this, index, value);
            }
            
            void startup() {}
            
            void allocateDataRefs() {}
            
            void selector_03_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_04_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void stackprotect_perform(Index n) {
                RNBO_UNUSED(n);
                auto __stackprotect_count = this->stackprotect_count;
                __stackprotect_count = 0;
                this->stackprotect_count = __stackprotect_count;
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
                selector_03_onoff = 1;
                selector_04_onoff = 1;
                _currentTime = 0;
                audioProcessSampleCount = 0;
                sampleOffsetIntoNextAudioBuffer = 0;
                zeroBuffer = nullptr;
                dummyBuffer = nullptr;
                didAllocateSignals = 0;
                vs = 0;
                maxvs = 0;
                sr = 44100;
                invsr = 0.00002267573696;
                stackprotect_count = 0;
                _voiceIndex = 0;
                _noteNumber = 0;
                isMuted = 1;
                parameterOffset = 0;
            }
            
            // member variables
            
                number selector_03_onoff;
                number selector_04_onoff;
                MillisecondTime _currentTime;
                SampleIndex audioProcessSampleCount;
                SampleIndex sampleOffsetIntoNextAudioBuffer;
                signal zeroBuffer;
                signal dummyBuffer;
                bool didAllocateSignals;
                Index vs;
                Index maxvs;
                number sr;
                number invsr;
                number stackprotect_count;
                Index _voiceIndex;
                Int _noteNumber;
                Index isMuted;
                ParameterIndex parameterOffset;
            
    };
    
    class RNBOSubpatcher_755 : public PatcherInterfaceImpl {
            
            friend class RNBOSubpatcher_760;
            friend class rnbomatic;
            
            public:
            
            class RNBOSubpatcher_751 : public PatcherInterfaceImpl {
                        
                        friend class RNBOSubpatcher_755;
                        friend class rnbomatic;
                        
                        public:
                        
                        RNBOSubpatcher_751()
                        {
                        }
                        
                        ~RNBOSubpatcher_751()
                        {
                        }
                        
                        virtual RNBOSubpatcher_755* getPatcher() const {
                            return static_cast<RNBOSubpatcher_755 *>(_parentPatcher);
                        }
                        
                        rnbomatic* getTopLevelPatcher() {
                            return this->getPatcher()->getTopLevelPatcher();
                        }
                        
                        void cancelClockEvents()
                        {
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
                            SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
                            const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
                            const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
                            const SampleValue * in3 = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
                            const SampleValue * in4 = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
                            const SampleValue * in5 = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
                            this->dspexpr_03_perform(in2, in3, in4, in5, this->signals[0], n);
                            this->dspexpr_02_perform(in2, in3, in4, in5, this->signals[1], n);
                            this->dspexpr_01_perform(in1, in2, in3, this->signals[1], this->signals[0], out1, n);
                        
                            this->dspexpr_05_perform(
                                this->dspexpr_05_in1,
                                this->dspexpr_05_in2,
                                this->dspexpr_05_in3,
                                this->dspexpr_05_in4,
                                this->signals[0],
                                n
                            );
                        
                            this->dspexpr_06_perform(
                                this->dspexpr_06_in1,
                                this->dspexpr_06_in2,
                                this->dspexpr_06_in3,
                                this->dspexpr_06_in4,
                                this->signals[1],
                                n
                            );
                        
                            this->dspexpr_04_perform(
                                this->dspexpr_04_in1,
                                this->dspexpr_04_in2,
                                this->dspexpr_04_in3,
                                this->signals[0],
                                this->signals[1],
                                this->dummyBuffer,
                                n
                            );
                        
                            this->stackprotect_perform(n);
                            this->audioProcessSampleCount += this->vs;
                        }
                        
                        void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
                            if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
                                Index i;
                        
                                for (i = 0; i < 2; i++) {
                                    this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
                                }
                        
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
                        
                            RNBO_UNUSED(forceDSPSetup);
                        
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
                        
                        ParameterIndex getNumSignalInParameters() const {
                            return 0;
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
                            this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
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
                        
                        void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
                        
                        void initialize() {
                            this->assign_defaults();
                            this->setState();
                        }
                        
                        protected:
                        
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
                            return 5;
                        }
                        
                        Index getNumOutputChannels() const {
                            return 1;
                        }
                        
                        void initializeObjects() {}
                        
                        void sendOutlet(OutletIndex index, ParameterValue value) {
                            this->getEngine()->sendOutlet(this, index, value);
                        }
                        
                        void startup() {}
                        
                        void allocateDataRefs() {}
                        
                        void dspexpr_03_perform(
                            const Sample * in1,
                            const Sample * in2,
                            const Sample * in3,
                            const Sample * in4,
                            SampleValue * out1,
                            Index n
                        ) {
                            Index i;
                        
                            for (i = 0; i < n; i++) {
                                out1[(Index)i] = 2 * in1[(Index)i] + in2[(Index)i] + -2 * in3[(Index)i] + in4[(Index)i];//#map:_###_obj_###_:1
                            }
                        }
                        
                        void dspexpr_02_perform(
                            const Sample * in1,
                            const Sample * in2,
                            const Sample * in3,
                            const Sample * in4,
                            SampleValue * out1,
                            Index n
                        ) {
                            Index i;
                        
                            for (i = 0; i < n; i++) {
                                out1[(Index)i] = -3 * in1[(Index)i] + -2 * in2[(Index)i] + 3 * in3[(Index)i] + -1 * in4[(Index)i];//#map:_###_obj_###_:1
                            }
                        }
                        
                        void dspexpr_01_perform(
                            const Sample * in1,
                            const Sample * in2,
                            const Sample * in3,
                            const Sample * in4,
                            const Sample * in5,
                            SampleValue * out1,
                            Index n
                        ) {
                            Index i;
                        
                            for (i = 0; i < n; i++) {
                                out1[(Index)i] = fixnan(rnbo_pow(in1[(Index)i], 0)) * in2[(Index)i] + fixnan(rnbo_pow(in1[(Index)i], 1)) * in3[(Index)i] + fixnan(rnbo_pow(in1[(Index)i], 2)) * in4[(Index)i] + fixnan(rnbo_pow(in1[(Index)i], 3)) * in5[(Index)i];//#map:_###_obj_###_:1
                            }
                        }
                        
                        void dspexpr_05_perform(
                            number in1,
                            number in2,
                            number in3,
                            number in4,
                            SampleValue * out1,
                            Index n
                        ) {
                            RNBO_UNUSED(in4);
                            RNBO_UNUSED(in3);
                            RNBO_UNUSED(in2);
                            RNBO_UNUSED(in1);
                            Index i;
                        
                            for (i = 0; i < n; i++) {
                                out1[(Index)i] = -3 * 0 + -2 * 0 + 3 * 0 + -1 * 0;//#map:_###_obj_###_:1
                            }
                        }
                        
                        void dspexpr_06_perform(
                            number in1,
                            number in2,
                            number in3,
                            number in4,
                            SampleValue * out1,
                            Index n
                        ) {
                            RNBO_UNUSED(in4);
                            RNBO_UNUSED(in3);
                            RNBO_UNUSED(in2);
                            RNBO_UNUSED(in1);
                            Index i;
                        
                            for (i = 0; i < n; i++) {
                                out1[(Index)i] = 2 * 0 + 0 + -2 * 0 + 0;//#map:_###_obj_###_:1
                            }
                        }
                        
                        void dspexpr_04_perform(
                            number in1,
                            number in2,
                            number in3,
                            const Sample * in4,
                            const Sample * in5,
                            SampleValue * out1,
                            Index n
                        ) {
                            RNBO_UNUSED(in3);
                            RNBO_UNUSED(in2);
                            RNBO_UNUSED(in1);
                            Index i;
                        
                            for (i = 0; i < n; i++) {
                                out1[(Index)i] = fixnan(rnbo_pow(0, 0)) * 0 + fixnan(rnbo_pow(0, 1)) * 0 + fixnan(rnbo_pow(0, 2)) * in4[(Index)i] + fixnan(rnbo_pow(0, 3)) * in5[(Index)i];//#map:_###_obj_###_:1
                            }
                        }
                        
                        void stackprotect_perform(Index n) {
                            RNBO_UNUSED(n);
                            auto __stackprotect_count = this->stackprotect_count;
                            __stackprotect_count = 0;
                            this->stackprotect_count = __stackprotect_count;
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
                            dspexpr_01_in2 = 0;
                            dspexpr_01_in3 = 0;
                            dspexpr_01_in4 = 0;
                            dspexpr_01_in5 = 0;
                            dspexpr_02_in1 = 0;
                            dspexpr_02_in2 = 0;
                            dspexpr_02_in3 = 0;
                            dspexpr_02_in4 = 0;
                            dspexpr_03_in1 = 0;
                            dspexpr_03_in2 = 0;
                            dspexpr_03_in3 = 0;
                            dspexpr_03_in4 = 0;
                            dspexpr_04_in1 = 0;
                            dspexpr_04_in2 = 0;
                            dspexpr_04_in3 = 0;
                            dspexpr_04_in4 = 0;
                            dspexpr_04_in5 = 0;
                            dspexpr_05_in1 = 0;
                            dspexpr_05_in2 = 0;
                            dspexpr_05_in3 = 0;
                            dspexpr_05_in4 = 0;
                            dspexpr_06_in1 = 0;
                            dspexpr_06_in2 = 0;
                            dspexpr_06_in3 = 0;
                            dspexpr_06_in4 = 0;
                            _currentTime = 0;
                            audioProcessSampleCount = 0;
                            sampleOffsetIntoNextAudioBuffer = 0;
                            zeroBuffer = nullptr;
                            dummyBuffer = nullptr;
                            signals[0] = nullptr;
                            signals[1] = nullptr;
                            didAllocateSignals = 0;
                            vs = 0;
                            maxvs = 0;
                            sr = 44100;
                            invsr = 0.00002267573696;
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
                            number dspexpr_01_in4;
                            number dspexpr_01_in5;
                            number dspexpr_02_in1;
                            number dspexpr_02_in2;
                            number dspexpr_02_in3;
                            number dspexpr_02_in4;
                            number dspexpr_03_in1;
                            number dspexpr_03_in2;
                            number dspexpr_03_in3;
                            number dspexpr_03_in4;
                            number dspexpr_04_in1;
                            number dspexpr_04_in2;
                            number dspexpr_04_in3;
                            number dspexpr_04_in4;
                            number dspexpr_04_in5;
                            number dspexpr_05_in1;
                            number dspexpr_05_in2;
                            number dspexpr_05_in3;
                            number dspexpr_05_in4;
                            number dspexpr_06_in1;
                            number dspexpr_06_in2;
                            number dspexpr_06_in3;
                            number dspexpr_06_in4;
                            MillisecondTime _currentTime;
                            SampleIndex audioProcessSampleCount;
                            SampleIndex sampleOffsetIntoNextAudioBuffer;
                            signal zeroBuffer;
                            signal dummyBuffer;
                            SampleValue * signals[2];
                            bool didAllocateSignals;
                            Index vs;
                            Index maxvs;
                            number sr;
                            number invsr;
                            number stackprotect_count;
                            Index _voiceIndex;
                            Int _noteNumber;
                            Index isMuted;
                            ParameterIndex parameterOffset;
                        
            };
            
            class RNBOSubpatcher_752 : public PatcherInterfaceImpl {
                        
                        friend class RNBOSubpatcher_755;
                        friend class rnbomatic;
                        
                        public:
                        
                        RNBOSubpatcher_752()
                        {
                        }
                        
                        ~RNBOSubpatcher_752()
                        {
                        }
                        
                        virtual RNBOSubpatcher_755* getPatcher() const {
                            return static_cast<RNBOSubpatcher_755 *>(_parentPatcher);
                        }
                        
                        rnbomatic* getTopLevelPatcher() {
                            return this->getPatcher()->getTopLevelPatcher();
                        }
                        
                        void cancelClockEvents()
                        {
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
                            SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
                            const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
                            const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
                            const SampleValue * in3 = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
                            const SampleValue * in4 = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
                            const SampleValue * in5 = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
                            this->dspexpr_09_perform(in2, in3, in4, in5, this->signals[0], n);
                            this->dspexpr_08_perform(in2, in3, in4, in5, this->signals[1], n);
                            this->dspexpr_07_perform(in1, in2, in3, this->signals[1], this->signals[0], out1, n);
                            this->stackprotect_perform(n);
                            this->audioProcessSampleCount += this->vs;
                        }
                        
                        void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
                            if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
                                Index i;
                        
                                for (i = 0; i < 2; i++) {
                                    this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
                                }
                        
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
                        
                            RNBO_UNUSED(forceDSPSetup);
                        
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
                        
                        ParameterIndex getNumSignalInParameters() const {
                            return 0;
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
                            this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
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
                        
                        void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
                        
                        void initialize() {
                            this->assign_defaults();
                            this->setState();
                        }
                        
                        protected:
                        
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
                            return 5;
                        }
                        
                        Index getNumOutputChannels() const {
                            return 1;
                        }
                        
                        void initializeObjects() {}
                        
                        void sendOutlet(OutletIndex index, ParameterValue value) {
                            this->getEngine()->sendOutlet(this, index, value);
                        }
                        
                        void startup() {}
                        
                        void allocateDataRefs() {}
                        
                        void dspexpr_09_perform(
                            const Sample * in1,
                            const Sample * in2,
                            const Sample * in3,
                            const Sample * in4,
                            SampleValue * out1,
                            Index n
                        ) {
                            Index i;
                        
                            for (i = 0; i < n; i++) {
                                out1[(Index)i] = 2 * in1[(Index)i] + in2[(Index)i] + -2 * in3[(Index)i] + in4[(Index)i];//#map:_###_obj_###_:1
                            }
                        }
                        
                        void dspexpr_08_perform(
                            const Sample * in1,
                            const Sample * in2,
                            const Sample * in3,
                            const Sample * in4,
                            SampleValue * out1,
                            Index n
                        ) {
                            Index i;
                        
                            for (i = 0; i < n; i++) {
                                out1[(Index)i] = -3 * in1[(Index)i] + -2 * in2[(Index)i] + 3 * in3[(Index)i] + -1 * in4[(Index)i];//#map:_###_obj_###_:1
                            }
                        }
                        
                        void dspexpr_07_perform(
                            const Sample * in1,
                            const Sample * in2,
                            const Sample * in3,
                            const Sample * in4,
                            const Sample * in5,
                            SampleValue * out1,
                            Index n
                        ) {
                            Index i;
                        
                            for (i = 0; i < n; i++) {
                                out1[(Index)i] = fixnan(rnbo_pow(in1[(Index)i], 0)) * in2[(Index)i] + fixnan(rnbo_pow(in1[(Index)i], 1)) * in3[(Index)i] + fixnan(rnbo_pow(in1[(Index)i], 2)) * in4[(Index)i] + fixnan(rnbo_pow(in1[(Index)i], 3)) * in5[(Index)i];//#map:_###_obj_###_:1
                            }
                        }
                        
                        void stackprotect_perform(Index n) {
                            RNBO_UNUSED(n);
                            auto __stackprotect_count = this->stackprotect_count;
                            __stackprotect_count = 0;
                            this->stackprotect_count = __stackprotect_count;
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
                            dspexpr_07_in1 = 0;
                            dspexpr_07_in2 = 0;
                            dspexpr_07_in3 = 0;
                            dspexpr_07_in4 = 0;
                            dspexpr_07_in5 = 0;
                            dspexpr_08_in1 = 0;
                            dspexpr_08_in2 = 0;
                            dspexpr_08_in3 = 0;
                            dspexpr_08_in4 = 0;
                            dspexpr_09_in1 = 0;
                            dspexpr_09_in2 = 0;
                            dspexpr_09_in3 = 0;
                            dspexpr_09_in4 = 0;
                            _currentTime = 0;
                            audioProcessSampleCount = 0;
                            sampleOffsetIntoNextAudioBuffer = 0;
                            zeroBuffer = nullptr;
                            dummyBuffer = nullptr;
                            signals[0] = nullptr;
                            signals[1] = nullptr;
                            didAllocateSignals = 0;
                            vs = 0;
                            maxvs = 0;
                            sr = 44100;
                            invsr = 0.00002267573696;
                            stackprotect_count = 0;
                            _voiceIndex = 0;
                            _noteNumber = 0;
                            isMuted = 1;
                            parameterOffset = 0;
                        }
                        
                        // member variables
                        
                            number dspexpr_07_in1;
                            number dspexpr_07_in2;
                            number dspexpr_07_in3;
                            number dspexpr_07_in4;
                            number dspexpr_07_in5;
                            number dspexpr_08_in1;
                            number dspexpr_08_in2;
                            number dspexpr_08_in3;
                            number dspexpr_08_in4;
                            number dspexpr_09_in1;
                            number dspexpr_09_in2;
                            number dspexpr_09_in3;
                            number dspexpr_09_in4;
                            MillisecondTime _currentTime;
                            SampleIndex audioProcessSampleCount;
                            SampleIndex sampleOffsetIntoNextAudioBuffer;
                            signal zeroBuffer;
                            signal dummyBuffer;
                            SampleValue * signals[2];
                            bool didAllocateSignals;
                            Index vs;
                            Index maxvs;
                            number sr;
                            number invsr;
                            number stackprotect_count;
                            Index _voiceIndex;
                            Int _noteNumber;
                            Index isMuted;
                            ParameterIndex parameterOffset;
                        
            };
            
            RNBOSubpatcher_755()
            {
            }
            
            ~RNBOSubpatcher_755()
            {
                delete this->p_01;
                delete this->p_02;
            }
            
            virtual RNBOSubpatcher_760* getPatcher() const {
                return static_cast<RNBOSubpatcher_760 *>(_parentPatcher);
            }
            
            rnbomatic* getTopLevelPatcher() {
                return this->getPatcher()->getTopLevelPatcher();
            }
            
            void cancelClockEvents()
            {
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
                SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
                SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
                const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
                const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
                const SampleValue * in3 = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
                const SampleValue * in4 = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
                const SampleValue * in5 = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
                const SampleValue * in6 = (numInputs >= 6 && inputs[5] ? inputs[5] : this->zeroBuffer);
                const SampleValue * in7 = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
                const SampleValue * in8 = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
                const SampleValue * in9 = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
                this->p_01_perform(in1, in2, in3, in4, in5, out1, n);
                this->p_02_perform(in1, in6, in7, in8, in9, out2, n);
                this->stackprotect_perform(n);
                this->audioProcessSampleCount += this->vs;
            }
            
            void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
                if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
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
            
                RNBO_UNUSED(forceDSPSetup);
                this->p_01->prepareToProcess(sampleRate, maxBlockSize, force);
                this->p_02->prepareToProcess(sampleRate, maxBlockSize, force);
            
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
                this->p_01->setVoiceIndex(index);
                this->p_02->setVoiceIndex(index);
            }
            
            void setNoteNumber(Int noteNumber)  {
                this->_noteNumber = noteNumber;
                this->p_01->setNoteNumber(noteNumber);
                this->p_02->setNoteNumber(noteNumber);
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
                this->p_01 = new RNBOSubpatcher_751();
                this->p_01->setEngineAndPatcher(this->getEngine(), this);
                this->p_01->initialize();
                this->p_01->setParameterOffset(this->getParameterOffset(this->p_01));
                this->p_02 = new RNBOSubpatcher_752();
                this->p_02->setEngineAndPatcher(this->getEngine(), this);
                this->p_02->initialize();
                this->p_02->setParameterOffset(this->getParameterOffset(this->p_02));
            }
            
            void getPreset(PatcherStateInterface& preset) {
                this->p_01->getPreset(getSubState(getSubState(preset, "__sps"), "fx(t)"));
                this->p_02->getPreset(getSubState(getSubState(preset, "__sps"), "fy(t)"));
            }
            
            void processTempoEvent(MillisecondTime time, Tempo tempo) {
                this->updateTime(time);
                this->p_01->processTempoEvent(time, tempo);
                this->p_02->processTempoEvent(time, tempo);
            }
            
            void processTransportEvent(MillisecondTime time, TransportState state) {
                this->updateTime(time);
                this->p_01->processTransportEvent(time, state);
                this->p_02->processTransportEvent(time, state);
            }
            
            void processBeatTimeEvent(MillisecondTime time, BeatTime beattime) {
                this->updateTime(time);
                this->p_01->processBeatTimeEvent(time, beattime);
                this->p_02->processBeatTimeEvent(time, beattime);
            }
            
            void onSampleRateChanged(double ) {}
            
            void processTimeSignatureEvent(MillisecondTime time, int numerator, int denominator) {
                this->updateTime(time);
                this->p_01->processTimeSignatureEvent(time, numerator, denominator);
                this->p_02->processTimeSignatureEvent(time, numerator, denominator);
            }
            
            void setParameterValue(ParameterIndex index, ParameterValue v, MillisecondTime time) {
                RNBO_UNUSED(v);
                this->updateTime(time);
            
                switch (index) {
                default:
                    {
                    index -= 0;
            
                    if (index < this->p_01->getNumParameters())
                        this->p_01->setParameterValue(index, v, time);
            
                    index -= this->p_01->getNumParameters();
            
                    if (index < this->p_02->getNumParameters())
                        this->p_02->setParameterValue(index, v, time);
            
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
                default:
                    {
                    index -= 0;
            
                    if (index < this->p_01->getNumParameters())
                        return this->p_01->getParameterValue(index);
            
                    index -= this->p_01->getNumParameters();
            
                    if (index < this->p_02->getNumParameters())
                        return this->p_02->getParameterValue(index);
            
                    return 0;
                    }
                }
            }
            
            ParameterIndex getNumSignalInParameters() const {
                return 0;
            }
            
            ParameterIndex getNumSignalOutParameters() const {
                return 0;
            }
            
            ParameterIndex getNumParameters() const {
                return 0 + this->p_01->getNumParameters() + this->p_02->getNumParameters();
            }
            
            ConstCharPointer getParameterName(ParameterIndex index) const {
                switch (index) {
                default:
                    {
                    index -= 0;
            
                    if (index < this->p_01->getNumParameters())
                        return this->p_01->getParameterName(index);
            
                    index -= this->p_01->getNumParameters();
            
                    if (index < this->p_02->getNumParameters())
                        return this->p_02->getParameterName(index);
            
                    return "bogus";
                    }
                }
            }
            
            ConstCharPointer getParameterId(ParameterIndex index) const {
                switch (index) {
                default:
                    {
                    index -= 0;
            
                    if (index < this->p_01->getNumParameters())
                        return this->p_01->getParameterId(index);
            
                    index -= this->p_01->getNumParameters();
            
                    if (index < this->p_02->getNumParameters())
                        return this->p_02->getParameterId(index);
            
                    return "bogus";
                    }
                }
            }
            
            void getParameterInfo(ParameterIndex index, ParameterInfo * info) const {
                {
                    switch (index) {
                    default:
                        {
                        index -= 0;
            
                        if (index < this->p_01->getNumParameters())
                            this->p_01->getParameterInfo(index, info);
            
                        index -= this->p_01->getNumParameters();
            
                        if (index < this->p_02->getNumParameters())
                            this->p_02->getParameterInfo(index, info);
            
                        break;
                        }
                    }
                }
            }
            
            void sendParameter(ParameterIndex index, bool ignoreValue) {
                this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
            }
            
            ParameterIndex getParameterOffset(BaseInterface* subpatcher) const {
                if (subpatcher == this->p_01)
                    return 0;
            
                if (subpatcher == this->p_02)
                    return 0 + this->p_01->getNumParameters();
            
                return 0;
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
                    index -= 0;
            
                    if (index < this->p_01->getNumParameters())
                        return this->p_01->convertToNormalizedParameterValue(index, value);
            
                    index -= this->p_01->getNumParameters();
            
                    if (index < this->p_02->getNumParameters())
                        return this->p_02->convertToNormalizedParameterValue(index, value);
            
                    return value;
                    }
                }
            }
            
            ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
            
                switch (index) {
                default:
                    {
                    index -= 0;
            
                    if (index < this->p_01->getNumParameters())
                        return this->p_01->convertFromNormalizedParameterValue(index, value);
            
                    index -= this->p_01->getNumParameters();
            
                    if (index < this->p_02->getNumParameters())
                        return this->p_02->convertFromNormalizedParameterValue(index, value);
            
                    return value;
                    }
                }
            }
            
            ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
                switch (index) {
                default:
                    {
                    index -= 0;
            
                    if (index < this->p_01->getNumParameters())
                        return this->p_01->constrainParameterValue(index, value);
            
                    index -= this->p_01->getNumParameters();
            
                    if (index < this->p_02->getNumParameters())
                        return this->p_02->constrainParameterValue(index, value);
            
                    return value;
                    }
                }
            }
            
            void scheduleParamInit(ParameterIndex index, Index order) {
                this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
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
                this->p_01->processNumMessage(tag, objectId, time, payload);
                this->p_02->processNumMessage(tag, objectId, time, payload);
            }
            
            void processListMessage(
                MessageTag tag,
                MessageTag objectId,
                MillisecondTime time,
                const list& payload
            ) {
                RNBO_UNUSED(objectId);
                this->updateTime(time);
                this->p_01->processListMessage(tag, objectId, time, payload);
                this->p_02->processListMessage(tag, objectId, time, payload);
            }
            
            void processBangMessage(MessageTag tag, MessageTag objectId, MillisecondTime time) {
                RNBO_UNUSED(objectId);
                this->updateTime(time);
                this->p_01->processBangMessage(tag, objectId, time);
                this->p_02->processBangMessage(tag, objectId, time);
            }
            
            MessageTagInfo resolveTag(MessageTag tag) const {
                switch (tag) {
            
                }
            
                auto subpatchResult_0 = this->p_01->resolveTag(tag);
            
                if (subpatchResult_0)
                    return subpatchResult_0;
            
                auto subpatchResult_1 = this->p_02->resolveTag(tag);
            
                if (subpatchResult_1)
                    return subpatchResult_1;
            
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
                this->p_01->processDataViewUpdate(index, time);
                this->p_02->processDataViewUpdate(index, time);
            }
            
            void initialize() {
                this->assign_defaults();
                this->setState();
            }
            
            protected:
            
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
                return 9;
            }
            
            Index getNumOutputChannels() const {
                return 2;
            }
            
            void initializeObjects() {
                this->p_01->initializeObjects();
                this->p_02->initializeObjects();
            }
            
            void sendOutlet(OutletIndex index, ParameterValue value) {
                this->getEngine()->sendOutlet(this, index, value);
            }
            
            void startup() {
                this->updateTime(this->getEngine()->getCurrentTime());
                this->p_01->startup();
                this->p_02->startup();
            }
            
            void allocateDataRefs() {
                this->p_01->allocateDataRefs();
                this->p_02->allocateDataRefs();
            }
            
            void p_01_perform(
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                SampleValue * out1,
                Index n
            ) {
                // subpatcher: fx(t)
                ConstSampleArray<5> ins = {in1, in2, in3, in4, in5};
            
                SampleArray<1> outs = {out1};
                this->p_01->process(ins, 5, outs, 1, n);
            }
            
            void p_02_perform(
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                SampleValue * out1,
                Index n
            ) {
                // subpatcher: fy(t)
                ConstSampleArray<5> ins = {in1, in2, in3, in4, in5};
            
                SampleArray<1> outs = {out1};
                this->p_02->process(ins, 5, outs, 1, n);
            }
            
            void stackprotect_perform(Index n) {
                RNBO_UNUSED(n);
                auto __stackprotect_count = this->stackprotect_count;
                __stackprotect_count = 0;
                this->stackprotect_count = __stackprotect_count;
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
                p_01_target = 0;
                p_02_target = 0;
                _currentTime = 0;
                audioProcessSampleCount = 0;
                sampleOffsetIntoNextAudioBuffer = 0;
                zeroBuffer = nullptr;
                dummyBuffer = nullptr;
                didAllocateSignals = 0;
                vs = 0;
                maxvs = 0;
                sr = 44100;
                invsr = 0.00002267573696;
                stackprotect_count = 0;
                _voiceIndex = 0;
                _noteNumber = 0;
                isMuted = 1;
                parameterOffset = 0;
            }
            
            // member variables
            
                number p_01_target;
                number p_02_target;
                MillisecondTime _currentTime;
                SampleIndex audioProcessSampleCount;
                SampleIndex sampleOffsetIntoNextAudioBuffer;
                signal zeroBuffer;
                signal dummyBuffer;
                bool didAllocateSignals;
                Index vs;
                Index maxvs;
                number sr;
                number invsr;
                number stackprotect_count;
                Index _voiceIndex;
                Int _noteNumber;
                Index isMuted;
                ParameterIndex parameterOffset;
                RNBOSubpatcher_751* p_01;
                RNBOSubpatcher_752* p_02;
            
    };
    
    class RNBOSubpatcher_756 : public PatcherInterfaceImpl {
            
            friend class RNBOSubpatcher_760;
            friend class rnbomatic;
            
            public:
            
            RNBOSubpatcher_756()
            {
            }
            
            ~RNBOSubpatcher_756()
            {
            }
            
            virtual RNBOSubpatcher_760* getPatcher() const {
                return static_cast<RNBOSubpatcher_760 *>(_parentPatcher);
            }
            
            rnbomatic* getTopLevelPatcher() {
                return this->getPatcher()->getTopLevelPatcher();
            }
            
            void cancelClockEvents()
            {
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
                SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
                SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
                const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
                const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
                const SampleValue * in3 = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
                const SampleValue * in4 = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
                const SampleValue * in5 = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
                const SampleValue * in6 = (numInputs >= 6 && inputs[5] ? inputs[5] : this->zeroBuffer);
                const SampleValue * in7 = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
                const SampleValue * in8 = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
                const SampleValue * in9 = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
                const SampleValue * in10 = (numInputs >= 10 && inputs[9] ? inputs[9] : this->zeroBuffer);
                const SampleValue * in11 = (numInputs >= 11 && inputs[10] ? inputs[10] : this->zeroBuffer);
                const SampleValue * in12 = (numInputs >= 12 && inputs[11] ? inputs[11] : this->zeroBuffer);
                const SampleValue * in13 = (numInputs >= 13 && inputs[12] ? inputs[12] : this->zeroBuffer);
                const SampleValue * in14 = (numInputs >= 14 && inputs[13] ? inputs[13] : this->zeroBuffer);
                const SampleValue * in15 = (numInputs >= 15 && inputs[14] ? inputs[14] : this->zeroBuffer);
                const SampleValue * in16 = (numInputs >= 16 && inputs[15] ? inputs[15] : this->zeroBuffer);
                const SampleValue * in17 = (numInputs >= 17 && inputs[16] ? inputs[16] : this->zeroBuffer);
                const SampleValue * in18 = (numInputs >= 18 && inputs[17] ? inputs[17] : this->zeroBuffer);
                const SampleValue * in19 = (numInputs >= 19 && inputs[18] ? inputs[18] : this->zeroBuffer);
                const SampleValue * in20 = (numInputs >= 20 && inputs[19] ? inputs[19] : this->zeroBuffer);
                const SampleValue * in21 = (numInputs >= 21 && inputs[20] ? inputs[20] : this->zeroBuffer);
                const SampleValue * in22 = (numInputs >= 22 && inputs[21] ? inputs[21] : this->zeroBuffer);
                this->dspexpr_11_perform(in2, in3, this->signals[0], n);
            
                this->selector_05_perform(
                    in1,
                    this->signals[0],
                    in2,
                    in3,
                    in4,
                    in5,
                    in6,
                    in7,
                    in8,
                    in9,
                    in10,
                    this->signals[1],
                    n
                );
            
                this->selector_07_perform(
                    in1,
                    in3,
                    in4,
                    in5,
                    in6,
                    in7,
                    in8,
                    in9,
                    in10,
                    in11,
                    in10,
                    this->signals[0],
                    n
                );
            
                this->selector_11_perform(
                    in1,
                    in2,
                    in3,
                    in4,
                    in5,
                    in6,
                    in7,
                    in8,
                    in9,
                    in10,
                    in11,
                    this->signals[2],
                    n
                );
            
                this->dspexpr_14_perform(in12, in13, this->signals[3], n);
            
                this->selector_08_perform(
                    in1,
                    this->signals[3],
                    in12,
                    in13,
                    in14,
                    in15,
                    in16,
                    in17,
                    in18,
                    in19,
                    in20,
                    this->signals[4],
                    n
                );
            
                this->selector_10_perform(
                    in1,
                    in12,
                    in14,
                    in15,
                    in16,
                    in17,
                    in18,
                    in19,
                    in20,
                    in21,
                    in20,
                    this->signals[3],
                    n
                );
            
                this->selector_13_perform(
                    in1,
                    in12,
                    in13,
                    in14,
                    in15,
                    in16,
                    in17,
                    in18,
                    in19,
                    in20,
                    in21,
                    this->signals[5],
                    n
                );
            
                this->selector_14_perform(
                    in22,
                    in12,
                    in13,
                    in14,
                    in15,
                    in16,
                    in17,
                    in18,
                    in19,
                    in20,
                    in21,
                    this->signals[6],
                    n
                );
            
                this->dspexpr_16_perform(this->signals[5], this->signals[6], this->signals[7], n);
                this->dspexpr_12_perform(in1, in22, this->signals[6], n);
                this->selector_09_perform(this->signals[6], this->signals[3], this->signals[7], this->signals[5], n);
                this->dspexpr_13_perform(this->signals[4], this->signals[5], out2, n);
            
                this->selector_12_perform(
                    in22,
                    in2,
                    in3,
                    in4,
                    in5,
                    in6,
                    in7,
                    in8,
                    in9,
                    in10,
                    in11,
                    this->signals[5],
                    n
                );
            
                this->dspexpr_15_perform(this->signals[2], this->signals[5], this->signals[4], n);
                this->selector_06_perform(this->signals[6], this->signals[0], this->signals[4], this->signals[5], n);
                this->dspexpr_10_perform(this->signals[1], this->signals[5], out1, n);
                this->stackprotect_perform(n);
                this->audioProcessSampleCount += this->vs;
            }
            
            void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
                if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
                    Index i;
            
                    for (i = 0; i < 8; i++) {
                        this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
                    }
            
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
            
                RNBO_UNUSED(forceDSPSetup);
            
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
            
            ParameterIndex getNumSignalInParameters() const {
                return 0;
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
                this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
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
            
            void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
            
            void initialize() {
                this->assign_defaults();
                this->setState();
            }
            
            protected:
            
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
                return 22;
            }
            
            Index getNumOutputChannels() const {
                return 2;
            }
            
            void initializeObjects() {}
            
            void sendOutlet(OutletIndex index, ParameterValue value) {
                this->getEngine()->sendOutlet(this, index, value);
            }
            
            void startup() {}
            
            void allocateDataRefs() {}
            
            void dspexpr_11_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - (in2[(Index)i] - in1[(Index)i]);//#map:_###_obj_###_:1
                }
            }
            
            void selector_05_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_07_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_11_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void dspexpr_14_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - (in2[(Index)i] - in1[(Index)i]);//#map:_###_obj_###_:1
                }
            }
            
            void selector_08_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_10_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_13_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_14_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void dspexpr_16_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - (in2[(Index)i] - in1[(Index)i]);//#map:_###_obj_###_:1
                }
            }
            
            void dspexpr_12_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = (in1[(Index)i] >= in2[(Index)i]) + 1;//#map:_###_obj_###_:1
                }
            }
            
            void selector_09_perform(
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
            
            void dspexpr_13_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - in2[(Index)i];//#map:_###_obj_###_:1
                }
            }
            
            void selector_12_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void dspexpr_15_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - (in2[(Index)i] - in1[(Index)i]);//#map:_###_obj_###_:1
                }
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
            
            void dspexpr_10_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - in2[(Index)i];//#map:_###_obj_###_:1
                }
            }
            
            void stackprotect_perform(Index n) {
                RNBO_UNUSED(n);
                auto __stackprotect_count = this->stackprotect_count;
                __stackprotect_count = 0;
                this->stackprotect_count = __stackprotect_count;
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
                dspexpr_10_in1 = 0;
                dspexpr_10_in2 = 0;
                selector_05_onoff = 1;
                dspexpr_11_in1 = 0;
                dspexpr_11_in2 = 0;
                selector_06_onoff = 1;
                selector_07_onoff = 1;
                dspexpr_12_in1 = 0;
                dspexpr_12_in2 = 0;
                dspexpr_13_in1 = 0;
                dspexpr_13_in2 = 0;
                selector_08_onoff = 1;
                dspexpr_14_in1 = 0;
                dspexpr_14_in2 = 0;
                selector_09_onoff = 1;
                selector_10_onoff = 1;
                selector_11_onoff = 1;
                dspexpr_15_in1 = 0;
                dspexpr_15_in2 = 0;
                selector_12_onoff = 1;
                selector_13_onoff = 1;
                dspexpr_16_in1 = 0;
                dspexpr_16_in2 = 0;
                selector_14_onoff = 1;
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
                didAllocateSignals = 0;
                vs = 0;
                maxvs = 0;
                sr = 44100;
                invsr = 0.00002267573696;
                stackprotect_count = 0;
                _voiceIndex = 0;
                _noteNumber = 0;
                isMuted = 1;
                parameterOffset = 0;
            }
            
            // member variables
            
                number dspexpr_10_in1;
                number dspexpr_10_in2;
                number selector_05_onoff;
                number dspexpr_11_in1;
                number dspexpr_11_in2;
                number selector_06_onoff;
                number selector_07_onoff;
                number dspexpr_12_in1;
                number dspexpr_12_in2;
                number dspexpr_13_in1;
                number dspexpr_13_in2;
                number selector_08_onoff;
                number dspexpr_14_in1;
                number dspexpr_14_in2;
                number selector_09_onoff;
                number selector_10_onoff;
                number selector_11_onoff;
                number dspexpr_15_in1;
                number dspexpr_15_in2;
                number selector_12_onoff;
                number selector_13_onoff;
                number dspexpr_16_in1;
                number dspexpr_16_in2;
                number selector_14_onoff;
                MillisecondTime _currentTime;
                SampleIndex audioProcessSampleCount;
                SampleIndex sampleOffsetIntoNextAudioBuffer;
                signal zeroBuffer;
                signal dummyBuffer;
                SampleValue * signals[8];
                bool didAllocateSignals;
                Index vs;
                Index maxvs;
                number sr;
                number invsr;
                number stackprotect_count;
                Index _voiceIndex;
                Int _noteNumber;
                Index isMuted;
                ParameterIndex parameterOffset;
            
    };
    
    class RNBOSubpatcher_757 : public PatcherInterfaceImpl {
            
            friend class RNBOSubpatcher_760;
            friend class rnbomatic;
            
            public:
            
            RNBOSubpatcher_757()
            {
            }
            
            ~RNBOSubpatcher_757()
            {
            }
            
            virtual RNBOSubpatcher_760* getPatcher() const {
                return static_cast<RNBOSubpatcher_760 *>(_parentPatcher);
            }
            
            rnbomatic* getTopLevelPatcher() {
                return this->getPatcher()->getTopLevelPatcher();
            }
            
            void cancelClockEvents()
            {
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
                SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
                SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
                const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
                const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
                const SampleValue * in3 = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
                const SampleValue * in4 = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
                const SampleValue * in5 = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
                const SampleValue * in6 = (numInputs >= 6 && inputs[5] ? inputs[5] : this->zeroBuffer);
                const SampleValue * in7 = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
                const SampleValue * in8 = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
                const SampleValue * in9 = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
                const SampleValue * in10 = (numInputs >= 10 && inputs[9] ? inputs[9] : this->zeroBuffer);
                const SampleValue * in11 = (numInputs >= 11 && inputs[10] ? inputs[10] : this->zeroBuffer);
                const SampleValue * in12 = (numInputs >= 12 && inputs[11] ? inputs[11] : this->zeroBuffer);
                const SampleValue * in13 = (numInputs >= 13 && inputs[12] ? inputs[12] : this->zeroBuffer);
                const SampleValue * in14 = (numInputs >= 14 && inputs[13] ? inputs[13] : this->zeroBuffer);
                const SampleValue * in15 = (numInputs >= 15 && inputs[14] ? inputs[14] : this->zeroBuffer);
                const SampleValue * in16 = (numInputs >= 16 && inputs[15] ? inputs[15] : this->zeroBuffer);
                const SampleValue * in17 = (numInputs >= 17 && inputs[16] ? inputs[16] : this->zeroBuffer);
                const SampleValue * in18 = (numInputs >= 18 && inputs[17] ? inputs[17] : this->zeroBuffer);
                const SampleValue * in19 = (numInputs >= 19 && inputs[18] ? inputs[18] : this->zeroBuffer);
                const SampleValue * in20 = (numInputs >= 20 && inputs[19] ? inputs[19] : this->zeroBuffer);
                const SampleValue * in21 = (numInputs >= 21 && inputs[20] ? inputs[20] : this->zeroBuffer);
                const SampleValue * in22 = (numInputs >= 22 && inputs[21] ? inputs[21] : this->zeroBuffer);
                this->dspexpr_18_perform(in2, in3, this->signals[0], n);
            
                this->selector_15_perform(
                    in1,
                    this->signals[0],
                    in2,
                    in3,
                    in4,
                    in5,
                    in6,
                    in7,
                    in8,
                    in9,
                    in10,
                    this->signals[1],
                    n
                );
            
                this->selector_17_perform(
                    in1,
                    in3,
                    in4,
                    in5,
                    in6,
                    in7,
                    in8,
                    in9,
                    in10,
                    in11,
                    in10,
                    this->signals[0],
                    n
                );
            
                this->selector_21_perform(
                    in1,
                    in2,
                    in3,
                    in4,
                    in5,
                    in6,
                    in7,
                    in8,
                    in9,
                    in10,
                    in11,
                    this->signals[2],
                    n
                );
            
                this->dspexpr_21_perform(in12, in13, this->signals[3], n);
            
                this->selector_18_perform(
                    in1,
                    this->signals[3],
                    in12,
                    in13,
                    in14,
                    in15,
                    in16,
                    in17,
                    in18,
                    in19,
                    in20,
                    this->signals[4],
                    n
                );
            
                this->selector_20_perform(
                    in1,
                    in12,
                    in14,
                    in15,
                    in16,
                    in17,
                    in18,
                    in19,
                    in20,
                    in21,
                    in20,
                    this->signals[3],
                    n
                );
            
                this->selector_23_perform(
                    in1,
                    in12,
                    in13,
                    in14,
                    in15,
                    in16,
                    in17,
                    in18,
                    in19,
                    in20,
                    in21,
                    this->signals[5],
                    n
                );
            
                this->selector_24_perform(
                    in22,
                    in12,
                    in13,
                    in14,
                    in15,
                    in16,
                    in17,
                    in18,
                    in19,
                    in20,
                    in21,
                    this->signals[6],
                    n
                );
            
                this->dspexpr_23_perform(this->signals[5], this->signals[6], this->signals[7], n);
                this->dspexpr_19_perform(in1, in22, this->signals[6], n);
                this->selector_19_perform(this->signals[6], this->signals[3], this->signals[7], this->signals[5], n);
                this->dspexpr_20_perform(this->signals[4], this->signals[5], out2, n);
            
                this->selector_22_perform(
                    in22,
                    in2,
                    in3,
                    in4,
                    in5,
                    in6,
                    in7,
                    in8,
                    in9,
                    in10,
                    in11,
                    this->signals[5],
                    n
                );
            
                this->dspexpr_22_perform(this->signals[2], this->signals[5], this->signals[4], n);
                this->selector_16_perform(this->signals[6], this->signals[0], this->signals[4], this->signals[5], n);
                this->dspexpr_17_perform(this->signals[1], this->signals[5], out1, n);
                this->stackprotect_perform(n);
                this->audioProcessSampleCount += this->vs;
            }
            
            void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
                if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
                    Index i;
            
                    for (i = 0; i < 8; i++) {
                        this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
                    }
            
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
            
                RNBO_UNUSED(forceDSPSetup);
            
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
            
            ParameterIndex getNumSignalInParameters() const {
                return 0;
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
                this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
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
            
            void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
            
            void initialize() {
                this->assign_defaults();
                this->setState();
            }
            
            protected:
            
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
                return 22;
            }
            
            Index getNumOutputChannels() const {
                return 2;
            }
            
            void initializeObjects() {}
            
            void sendOutlet(OutletIndex index, ParameterValue value) {
                this->getEngine()->sendOutlet(this, index, value);
            }
            
            void startup() {}
            
            void allocateDataRefs() {}
            
            void dspexpr_18_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - (in2[(Index)i] - in1[(Index)i]);//#map:_###_obj_###_:1
                }
            }
            
            void selector_15_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_17_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_21_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void dspexpr_21_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - (in2[(Index)i] - in1[(Index)i]);//#map:_###_obj_###_:1
                }
            }
            
            void selector_18_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_20_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_23_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_24_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void dspexpr_23_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - (in2[(Index)i] - in1[(Index)i]);//#map:_###_obj_###_:1
                }
            }
            
            void dspexpr_19_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = (in1[(Index)i] >= in2[(Index)i]) + 1;//#map:_###_obj_###_:1
                }
            }
            
            void selector_19_perform(
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
            
            void dspexpr_20_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - in2[(Index)i];//#map:_###_obj_###_:1
                }
            }
            
            void selector_22_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void dspexpr_22_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - (in2[(Index)i] - in1[(Index)i]);//#map:_###_obj_###_:1
                }
            }
            
            void selector_16_perform(
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
            
            void dspexpr_17_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] - in2[(Index)i];//#map:_###_obj_###_:1
                }
            }
            
            void stackprotect_perform(Index n) {
                RNBO_UNUSED(n);
                auto __stackprotect_count = this->stackprotect_count;
                __stackprotect_count = 0;
                this->stackprotect_count = __stackprotect_count;
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
                dspexpr_17_in1 = 0;
                dspexpr_17_in2 = 0;
                selector_15_onoff = 1;
                dspexpr_18_in1 = 0;
                dspexpr_18_in2 = 0;
                selector_16_onoff = 1;
                selector_17_onoff = 1;
                dspexpr_19_in1 = 0;
                dspexpr_19_in2 = 0;
                dspexpr_20_in1 = 0;
                dspexpr_20_in2 = 0;
                selector_18_onoff = 1;
                dspexpr_21_in1 = 0;
                dspexpr_21_in2 = 0;
                selector_19_onoff = 1;
                selector_20_onoff = 1;
                selector_21_onoff = 1;
                dspexpr_22_in1 = 0;
                dspexpr_22_in2 = 0;
                selector_22_onoff = 1;
                dspexpr_23_in1 = 0;
                dspexpr_23_in2 = 0;
                selector_23_onoff = 1;
                selector_24_onoff = 1;
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
                didAllocateSignals = 0;
                vs = 0;
                maxvs = 0;
                sr = 44100;
                invsr = 0.00002267573696;
                stackprotect_count = 0;
                _voiceIndex = 0;
                _noteNumber = 0;
                isMuted = 1;
                parameterOffset = 0;
            }
            
            // member variables
            
                number dspexpr_17_in1;
                number dspexpr_17_in2;
                number selector_15_onoff;
                number dspexpr_18_in1;
                number dspexpr_18_in2;
                number selector_16_onoff;
                number selector_17_onoff;
                number dspexpr_19_in1;
                number dspexpr_19_in2;
                number dspexpr_20_in1;
                number dspexpr_20_in2;
                number selector_18_onoff;
                number dspexpr_21_in1;
                number dspexpr_21_in2;
                number selector_19_onoff;
                number selector_20_onoff;
                number selector_21_onoff;
                number dspexpr_22_in1;
                number dspexpr_22_in2;
                number selector_22_onoff;
                number dspexpr_23_in1;
                number dspexpr_23_in2;
                number selector_23_onoff;
                number selector_24_onoff;
                MillisecondTime _currentTime;
                SampleIndex audioProcessSampleCount;
                SampleIndex sampleOffsetIntoNextAudioBuffer;
                signal zeroBuffer;
                signal dummyBuffer;
                SampleValue * signals[8];
                bool didAllocateSignals;
                Index vs;
                Index maxvs;
                number sr;
                number invsr;
                number stackprotect_count;
                Index _voiceIndex;
                Int _noteNumber;
                Index isMuted;
                ParameterIndex parameterOffset;
            
    };
    
    class RNBOSubpatcher_758 : public PatcherInterfaceImpl {
            
            friend class RNBOSubpatcher_760;
            friend class rnbomatic;
            
            public:
            
            RNBOSubpatcher_758()
            {
            }
            
            ~RNBOSubpatcher_758()
            {
            }
            
            virtual RNBOSubpatcher_760* getPatcher() const {
                return static_cast<RNBOSubpatcher_760 *>(_parentPatcher);
            }
            
            rnbomatic* getTopLevelPatcher() {
                return this->getPatcher()->getTopLevelPatcher();
            }
            
            void cancelClockEvents()
            {
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
                SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
                SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
                const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
                const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
                const SampleValue * in3 = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
                const SampleValue * in4 = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
                const SampleValue * in5 = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
                const SampleValue * in6 = (numInputs >= 6 && inputs[5] ? inputs[5] : this->zeroBuffer);
                const SampleValue * in7 = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
                const SampleValue * in8 = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
                const SampleValue * in9 = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
                const SampleValue * in10 = (numInputs >= 10 && inputs[9] ? inputs[9] : this->zeroBuffer);
                const SampleValue * in11 = (numInputs >= 11 && inputs[10] ? inputs[10] : this->zeroBuffer);
                const SampleValue * in12 = (numInputs >= 12 && inputs[11] ? inputs[11] : this->zeroBuffer);
                const SampleValue * in13 = (numInputs >= 13 && inputs[12] ? inputs[12] : this->zeroBuffer);
                const SampleValue * in14 = (numInputs >= 14 && inputs[13] ? inputs[13] : this->zeroBuffer);
                const SampleValue * in15 = (numInputs >= 15 && inputs[14] ? inputs[14] : this->zeroBuffer);
                const SampleValue * in16 = (numInputs >= 16 && inputs[15] ? inputs[15] : this->zeroBuffer);
                const SampleValue * in17 = (numInputs >= 17 && inputs[16] ? inputs[16] : this->zeroBuffer);
                const SampleValue * in18 = (numInputs >= 18 && inputs[17] ? inputs[17] : this->zeroBuffer);
                const SampleValue * in19 = (numInputs >= 19 && inputs[18] ? inputs[18] : this->zeroBuffer);
                const SampleValue * in20 = (numInputs >= 20 && inputs[19] ? inputs[19] : this->zeroBuffer);
                const SampleValue * in21 = (numInputs >= 21 && inputs[20] ? inputs[20] : this->zeroBuffer);
                this->selector_25_perform(in1, in2, in3, in4, in5, in6, in7, in8, in9, in10, in11, out1, n);
                this->selector_26_perform(in1, in12, in13, in14, in15, in16, in17, in18, in19, in20, in21, out2, n);
                this->stackprotect_perform(n);
                this->audioProcessSampleCount += this->vs;
            }
            
            void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
                if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
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
            
                RNBO_UNUSED(forceDSPSetup);
            
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
            
            ParameterIndex getNumSignalInParameters() const {
                return 0;
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
                this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
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
            
            void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
            
            void initialize() {
                this->assign_defaults();
                this->setState();
            }
            
            protected:
            
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
                return 21;
            }
            
            Index getNumOutputChannels() const {
                return 2;
            }
            
            void initializeObjects() {}
            
            void sendOutlet(OutletIndex index, ParameterValue value) {
                this->getEngine()->sendOutlet(this, index, value);
            }
            
            void startup() {}
            
            void allocateDataRefs() {}
            
            void selector_25_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void selector_26_perform(
                const Sample * onoff,
                const SampleValue * in1,
                const SampleValue * in2,
                const SampleValue * in3,
                const SampleValue * in4,
                const SampleValue * in5,
                const SampleValue * in6,
                const SampleValue * in7,
                const SampleValue * in8,
                const SampleValue * in9,
                const SampleValue * in10,
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
                    else if (onoff[(Index)i] >= 5 && onoff[(Index)i] < 6)
                        out[(Index)i] = in5[(Index)i];
                    else if (onoff[(Index)i] >= 6 && onoff[(Index)i] < 7)
                        out[(Index)i] = in6[(Index)i];
                    else if (onoff[(Index)i] >= 7 && onoff[(Index)i] < 8)
                        out[(Index)i] = in7[(Index)i];
                    else if (onoff[(Index)i] >= 8 && onoff[(Index)i] < 9)
                        out[(Index)i] = in8[(Index)i];
                    else if (onoff[(Index)i] >= 9 && onoff[(Index)i] < 10)
                        out[(Index)i] = in9[(Index)i];
                    else if (onoff[(Index)i] >= 10 && onoff[(Index)i] < 11)
                        out[(Index)i] = in10[(Index)i];
                    else
                        out[(Index)i] = 0;
                }
            }
            
            void stackprotect_perform(Index n) {
                RNBO_UNUSED(n);
                auto __stackprotect_count = this->stackprotect_count;
                __stackprotect_count = 0;
                this->stackprotect_count = __stackprotect_count;
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
                selector_25_onoff = 1;
                selector_26_onoff = 1;
                _currentTime = 0;
                audioProcessSampleCount = 0;
                sampleOffsetIntoNextAudioBuffer = 0;
                zeroBuffer = nullptr;
                dummyBuffer = nullptr;
                didAllocateSignals = 0;
                vs = 0;
                maxvs = 0;
                sr = 44100;
                invsr = 0.00002267573696;
                stackprotect_count = 0;
                _voiceIndex = 0;
                _noteNumber = 0;
                isMuted = 1;
                parameterOffset = 0;
            }
            
            // member variables
            
                number selector_25_onoff;
                number selector_26_onoff;
                MillisecondTime _currentTime;
                SampleIndex audioProcessSampleCount;
                SampleIndex sampleOffsetIntoNextAudioBuffer;
                signal zeroBuffer;
                signal dummyBuffer;
                bool didAllocateSignals;
                Index vs;
                Index maxvs;
                number sr;
                number invsr;
                number stackprotect_count;
                Index _voiceIndex;
                Int _noteNumber;
                Index isMuted;
                ParameterIndex parameterOffset;
            
    };
    
    class RNBOSubpatcher_759 : public PatcherInterfaceImpl {
            
            friend class RNBOSubpatcher_760;
            friend class rnbomatic;
            
            public:
            
            RNBOSubpatcher_759()
            {
            }
            
            ~RNBOSubpatcher_759()
            {
            }
            
            virtual RNBOSubpatcher_760* getPatcher() const {
                return static_cast<RNBOSubpatcher_760 *>(_parentPatcher);
            }
            
            rnbomatic* getTopLevelPatcher() {
                return this->getPatcher()->getTopLevelPatcher();
            }
            
            void cancelClockEvents()
            {
            }
            
            inline number safediv(number num, number denom) {
                return (denom == 0.0 ? 0.0 : num / denom);
            }
            
            number safepow(number base, number exponent) {
                return fixnan(rnbo_pow(base, exponent));
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
                SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
                SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
                const SampleValue * in1 = (numInputs >= 1 && inputs[0] ? inputs[0] : this->zeroBuffer);
                const SampleValue * in2 = (numInputs >= 2 && inputs[1] ? inputs[1] : this->zeroBuffer);
                const SampleValue * in3 = (numInputs >= 3 && inputs[2] ? inputs[2] : this->zeroBuffer);
                const SampleValue * in4 = (numInputs >= 4 && inputs[3] ? inputs[3] : this->zeroBuffer);
                const SampleValue * in5 = (numInputs >= 5 && inputs[4] ? inputs[4] : this->zeroBuffer);
                const SampleValue * in6 = (numInputs >= 6 && inputs[5] ? inputs[5] : this->zeroBuffer);
                const SampleValue * in7 = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
                this->ip_01_perform(this->signals[0], n);
            
                this->scale_tilde_03_perform(
                    this->signals[0],
                    this->scale_tilde_03_lowin,
                    this->scale_tilde_03_hiin,
                    in2,
                    in6,
                    this->scale_tilde_03_pow,
                    this->signals[1],
                    n
                );
            
                this->dspexpr_24_perform(this->signals[1], in4, this->signals[2], n);
            
                this->scale_tilde_06_perform(
                    in1,
                    this->scale_tilde_06_lowin,
                    this->scale_tilde_06_hiin,
                    this->signals[2],
                    in6,
                    this->scale_tilde_06_pow,
                    this->signals[1],
                    n
                );
            
                this->scale_tilde_02_perform(
                    in1,
                    this->scale_tilde_02_lowin,
                    this->scale_tilde_02_hiin,
                    in2,
                    this->signals[2],
                    this->scale_tilde_02_pow,
                    this->signals[3],
                    n
                );
            
                this->scale_tilde_01_perform(
                    in1,
                    this->scale_tilde_01_lowin,
                    this->scale_tilde_01_hiin,
                    this->signals[3],
                    this->signals[1],
                    this->scale_tilde_01_pow,
                    out1,
                    n
                );
            
                this->scale_tilde_05_perform(
                    this->signals[0],
                    this->scale_tilde_05_lowin,
                    this->scale_tilde_05_hiin,
                    in3,
                    in7,
                    this->scale_tilde_05_pow,
                    this->signals[1],
                    n
                );
            
                this->dspexpr_25_perform(this->signals[1], in5, this->signals[0], n);
            
                this->scale_tilde_08_perform(
                    in1,
                    this->scale_tilde_08_lowin,
                    this->scale_tilde_08_hiin,
                    this->signals[0],
                    in7,
                    this->scale_tilde_08_pow,
                    this->signals[1],
                    n
                );
            
                this->scale_tilde_04_perform(
                    in1,
                    this->scale_tilde_04_lowin,
                    this->scale_tilde_04_hiin,
                    in3,
                    this->signals[0],
                    this->scale_tilde_04_pow,
                    this->signals[3],
                    n
                );
            
                this->scale_tilde_07_perform(
                    in1,
                    this->scale_tilde_07_lowin,
                    this->scale_tilde_07_hiin,
                    this->signals[3],
                    this->signals[1],
                    this->scale_tilde_07_pow,
                    out2,
                    n
                );
            
                this->stackprotect_perform(n);
                this->audioProcessSampleCount += this->vs;
            }
            
            void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
                if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
                    Index i;
            
                    for (i = 0; i < 4; i++) {
                        this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
                    }
            
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
            
                this->ip_01_dspsetup(forceDSPSetup);
            
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
            
            ParameterIndex getNumSignalInParameters() const {
                return 0;
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
                this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
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
            
            void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
            
            void initialize() {
                this->assign_defaults();
                this->setState();
            }
            
            protected:
            
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
                return 7;
            }
            
            Index getNumOutputChannels() const {
                return 2;
            }
            
            void initializeObjects() {
                this->ip_01_init();
            }
            
            void sendOutlet(OutletIndex index, ParameterValue value) {
                this->getEngine()->sendOutlet(this, index, value);
            }
            
            void startup() {}
            
            void allocateDataRefs() {}
            
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
            
            void scale_tilde_03_perform(
                const Sample * x,
                number lowin,
                number hiin,
                const Sample * lowout,
                const Sample * highout,
                number pow,
                SampleValue * out1,
                Index n
            ) {
                RNBO_UNUSED(pow);
                RNBO_UNUSED(hiin);
                RNBO_UNUSED(lowin);
                auto inscale = this->safediv(1., 1 - -1);
                Index i;
            
                for (i = 0; i < n; i++) {
                    number outdiff = highout[(Index)i] - lowout[(Index)i];
                    number value = (x[(Index)i] - -1) * inscale;
                    value = value * outdiff + lowout[(Index)i];
                    out1[(Index)i] = value;
                }
            }
            
            void dspexpr_24_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] + in2[(Index)i];//#map:_###_obj_###_:1
                }
            }
            
            void scale_tilde_06_perform(
                const Sample * x,
                number lowin,
                number hiin,
                const Sample * lowout,
                const Sample * highout,
                number pow,
                SampleValue * out1,
                Index n
            ) {
                RNBO_UNUSED(pow);
                RNBO_UNUSED(hiin);
                RNBO_UNUSED(lowin);
                auto inscale = this->safediv(1., 1 - 0);
                Index i;
            
                for (i = 0; i < n; i++) {
                    number outdiff = highout[(Index)i] - lowout[(Index)i];
                    number value = (x[(Index)i] - 0) * inscale;
                    value = value * outdiff + lowout[(Index)i];
                    out1[(Index)i] = value;
                }
            }
            
            void scale_tilde_02_perform(
                const Sample * x,
                number lowin,
                number hiin,
                const Sample * lowout,
                const Sample * highout,
                number pow,
                SampleValue * out1,
                Index n
            ) {
                RNBO_UNUSED(pow);
                RNBO_UNUSED(hiin);
                RNBO_UNUSED(lowin);
                auto inscale = this->safediv(1., 1 - 0);
                Index i;
            
                for (i = 0; i < n; i++) {
                    number outdiff = highout[(Index)i] - lowout[(Index)i];
                    number value = (x[(Index)i] - 0) * inscale;
                    value = value * outdiff + lowout[(Index)i];
                    out1[(Index)i] = value;
                }
            }
            
            void scale_tilde_01_perform(
                const Sample * x,
                number lowin,
                number hiin,
                const Sample * lowout,
                const Sample * highout,
                number pow,
                SampleValue * out1,
                Index n
            ) {
                RNBO_UNUSED(pow);
                RNBO_UNUSED(hiin);
                RNBO_UNUSED(lowin);
                auto inscale = this->safediv(1., 1 - 0);
                Index i;
            
                for (i = 0; i < n; i++) {
                    number outdiff = highout[(Index)i] - lowout[(Index)i];
                    number value = (x[(Index)i] - 0) * inscale;
                    value = value * outdiff + lowout[(Index)i];
                    out1[(Index)i] = value;
                }
            }
            
            void scale_tilde_05_perform(
                const Sample * x,
                number lowin,
                number hiin,
                const Sample * lowout,
                const Sample * highout,
                number pow,
                SampleValue * out1,
                Index n
            ) {
                RNBO_UNUSED(pow);
                RNBO_UNUSED(hiin);
                RNBO_UNUSED(lowin);
                auto inscale = this->safediv(1., 1 - -1);
                Index i;
            
                for (i = 0; i < n; i++) {
                    number outdiff = highout[(Index)i] - lowout[(Index)i];
                    number value = (x[(Index)i] - -1) * inscale;
                    value = value * outdiff + lowout[(Index)i];
                    out1[(Index)i] = value;
                }
            }
            
            void dspexpr_25_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
                Index i;
            
                for (i = 0; i < n; i++) {
                    out1[(Index)i] = in1[(Index)i] + in2[(Index)i];//#map:_###_obj_###_:1
                }
            }
            
            void scale_tilde_08_perform(
                const Sample * x,
                number lowin,
                number hiin,
                const Sample * lowout,
                const Sample * highout,
                number pow,
                SampleValue * out1,
                Index n
            ) {
                RNBO_UNUSED(pow);
                RNBO_UNUSED(hiin);
                RNBO_UNUSED(lowin);
                auto inscale = this->safediv(1., 1 - 0);
                Index i;
            
                for (i = 0; i < n; i++) {
                    number outdiff = highout[(Index)i] - lowout[(Index)i];
                    number value = (x[(Index)i] - 0) * inscale;
                    value = value * outdiff + lowout[(Index)i];
                    out1[(Index)i] = value;
                }
            }
            
            void scale_tilde_04_perform(
                const Sample * x,
                number lowin,
                number hiin,
                const Sample * lowout,
                const Sample * highout,
                number pow,
                SampleValue * out1,
                Index n
            ) {
                RNBO_UNUSED(pow);
                RNBO_UNUSED(hiin);
                RNBO_UNUSED(lowin);
                auto inscale = this->safediv(1., 1 - 0);
                Index i;
            
                for (i = 0; i < n; i++) {
                    number outdiff = highout[(Index)i] - lowout[(Index)i];
                    number value = (x[(Index)i] - 0) * inscale;
                    value = value * outdiff + lowout[(Index)i];
                    out1[(Index)i] = value;
                }
            }
            
            void scale_tilde_07_perform(
                const Sample * x,
                number lowin,
                number hiin,
                const Sample * lowout,
                const Sample * highout,
                number pow,
                SampleValue * out1,
                Index n
            ) {
                RNBO_UNUSED(pow);
                RNBO_UNUSED(hiin);
                RNBO_UNUSED(lowin);
                auto inscale = this->safediv(1., 1 - 0);
                Index i;
            
                for (i = 0; i < n; i++) {
                    number outdiff = highout[(Index)i] - lowout[(Index)i];
                    number value = (x[(Index)i] - 0) * inscale;
                    value = value * outdiff + lowout[(Index)i];
                    out1[(Index)i] = value;
                }
            }
            
            void stackprotect_perform(Index n) {
                RNBO_UNUSED(n);
                auto __stackprotect_count = this->stackprotect_count;
                __stackprotect_count = 0;
                this->stackprotect_count = __stackprotect_count;
            }
            
            void ip_01_init() {
                this->ip_01_lastValue = this->ip_01_value;
            }
            
            void ip_01_dspsetup(bool force) {
                if ((bool)(this->ip_01_setupDone) && (bool)(!(bool)(force)))
                    return;
            
                this->ip_01_lastIndex = 0;
                this->ip_01_setupDone = true;
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
                scale_tilde_01_x = 0;
                scale_tilde_01_lowin = 0;
                scale_tilde_01_hiin = 1;
                scale_tilde_01_lowout = 0;
                scale_tilde_01_highout = 0;
                scale_tilde_01_pow = 1;
                scale_tilde_02_x = 0;
                scale_tilde_02_lowin = 0;
                scale_tilde_02_hiin = 1;
                scale_tilde_02_lowout = 0;
                scale_tilde_02_highout = 0;
                scale_tilde_02_pow = 1;
                scale_tilde_03_x = 0;
                scale_tilde_03_lowin = -1;
                scale_tilde_03_hiin = 1;
                scale_tilde_03_lowout = 0;
                scale_tilde_03_highout = 0;
                scale_tilde_03_pow = 1;
                dspexpr_24_in1 = 0;
                dspexpr_24_in2 = 0;
                scale_tilde_04_x = 0;
                scale_tilde_04_lowin = 0;
                scale_tilde_04_hiin = 1;
                scale_tilde_04_lowout = 0;
                scale_tilde_04_highout = 0;
                scale_tilde_04_pow = 1;
                ip_01_value = 0;
                ip_01_impulse = 0;
                scale_tilde_05_x = 0;
                scale_tilde_05_lowin = -1;
                scale_tilde_05_hiin = 1;
                scale_tilde_05_lowout = 0;
                scale_tilde_05_highout = 0;
                scale_tilde_05_pow = 1;
                dspexpr_25_in1 = 0;
                dspexpr_25_in2 = 0;
                scale_tilde_06_x = 0;
                scale_tilde_06_lowin = 0;
                scale_tilde_06_hiin = 1;
                scale_tilde_06_lowout = 0;
                scale_tilde_06_highout = 0;
                scale_tilde_06_pow = 1;
                scale_tilde_07_x = 0;
                scale_tilde_07_lowin = 0;
                scale_tilde_07_hiin = 1;
                scale_tilde_07_lowout = 0;
                scale_tilde_07_highout = 0;
                scale_tilde_07_pow = 1;
                scale_tilde_08_x = 0;
                scale_tilde_08_lowin = 0;
                scale_tilde_08_hiin = 1;
                scale_tilde_08_lowout = 0;
                scale_tilde_08_highout = 0;
                scale_tilde_08_pow = 1;
                _currentTime = 0;
                audioProcessSampleCount = 0;
                sampleOffsetIntoNextAudioBuffer = 0;
                zeroBuffer = nullptr;
                dummyBuffer = nullptr;
                signals[0] = nullptr;
                signals[1] = nullptr;
                signals[2] = nullptr;
                signals[3] = nullptr;
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
                stackprotect_count = 0;
                _voiceIndex = 0;
                _noteNumber = 0;
                isMuted = 1;
                parameterOffset = 0;
            }
            
            // member variables
            
                number scale_tilde_01_x;
                number scale_tilde_01_lowin;
                number scale_tilde_01_hiin;
                number scale_tilde_01_lowout;
                number scale_tilde_01_highout;
                number scale_tilde_01_pow;
                number scale_tilde_02_x;
                number scale_tilde_02_lowin;
                number scale_tilde_02_hiin;
                number scale_tilde_02_lowout;
                number scale_tilde_02_highout;
                number scale_tilde_02_pow;
                number scale_tilde_03_x;
                number scale_tilde_03_lowin;
                number scale_tilde_03_hiin;
                number scale_tilde_03_lowout;
                number scale_tilde_03_highout;
                number scale_tilde_03_pow;
                number dspexpr_24_in1;
                number dspexpr_24_in2;
                number scale_tilde_04_x;
                number scale_tilde_04_lowin;
                number scale_tilde_04_hiin;
                number scale_tilde_04_lowout;
                number scale_tilde_04_highout;
                number scale_tilde_04_pow;
                number ip_01_value;
                number ip_01_impulse;
                number scale_tilde_05_x;
                number scale_tilde_05_lowin;
                number scale_tilde_05_hiin;
                number scale_tilde_05_lowout;
                number scale_tilde_05_highout;
                number scale_tilde_05_pow;
                number dspexpr_25_in1;
                number dspexpr_25_in2;
                number scale_tilde_06_x;
                number scale_tilde_06_lowin;
                number scale_tilde_06_hiin;
                number scale_tilde_06_lowout;
                number scale_tilde_06_highout;
                number scale_tilde_06_pow;
                number scale_tilde_07_x;
                number scale_tilde_07_lowin;
                number scale_tilde_07_hiin;
                number scale_tilde_07_lowout;
                number scale_tilde_07_highout;
                number scale_tilde_07_pow;
                number scale_tilde_08_x;
                number scale_tilde_08_lowin;
                number scale_tilde_08_hiin;
                number scale_tilde_08_lowout;
                number scale_tilde_08_highout;
                number scale_tilde_08_pow;
                MillisecondTime _currentTime;
                SampleIndex audioProcessSampleCount;
                SampleIndex sampleOffsetIntoNextAudioBuffer;
                signal zeroBuffer;
                signal dummyBuffer;
                SampleValue * signals[4];
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
                number stackprotect_count;
                Index _voiceIndex;
                Int _noteNumber;
                Index isMuted;
                ParameterIndex parameterOffset;
            
    };
    
    RNBOSubpatcher_760()
    {
    }
    
    ~RNBOSubpatcher_760()
    {
        delete this->p_03;
        delete this->p_04;
        delete this->p_05;
        delete this->p_06;
        delete this->p_07;
        delete this->p_08;
        delete this->p_09;
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
    
    inline number safemod(number f, number m) {
        if (m != 0) {
            if (m < 0) {
                m = -m;
            }
    
            if (f >= m) {
                if (f >= m * 2.0) {
                    number d = f / m;
                    int i = (int)(rnbo_trunc(d));
                    d = d - i;
                    f = d * m;
                } else {
                    f -= m;
                }
            } else if (f <= -m) {
                if (f <= -m * 2.0) {
                    number d = f / m;
                    int i = (int)(rnbo_trunc(d));
                    d = d - i;
                    f = d * m;
                } else {
                    f += m;
                }
            }
        } else {
            f = 0.0;
        }
    
        return f;
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
        const SampleValue * target_p = (numInputs >= 7 && inputs[6] ? inputs[6] : this->zeroBuffer);
        const SampleValue * target_p0x = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
        const SampleValue * target_p1x = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
        const SampleValue * target_p2x = (numInputs >= 10 && inputs[9] ? inputs[9] : this->zeroBuffer);
        const SampleValue * target_p3x = (numInputs >= 11 && inputs[10] ? inputs[10] : this->zeroBuffer);
        const SampleValue * target_p4x = (numInputs >= 12 && inputs[11] ? inputs[11] : this->zeroBuffer);
        const SampleValue * target_p5x = (numInputs >= 13 && inputs[12] ? inputs[12] : this->zeroBuffer);
        const SampleValue * target_p6x = (numInputs >= 14 && inputs[13] ? inputs[13] : this->zeroBuffer);
        const SampleValue * target_p7x = (numInputs >= 15 && inputs[14] ? inputs[14] : this->zeroBuffer);
        const SampleValue * target_p8x = (numInputs >= 16 && inputs[15] ? inputs[15] : this->zeroBuffer);
        const SampleValue * target_p9x = (numInputs >= 17 && inputs[16] ? inputs[16] : this->zeroBuffer);
        const SampleValue * target_p0y = (numInputs >= 18 && inputs[17] ? inputs[17] : this->zeroBuffer);
        const SampleValue * target_p1y = (numInputs >= 19 && inputs[18] ? inputs[18] : this->zeroBuffer);
        const SampleValue * target_p2y = (numInputs >= 20 && inputs[19] ? inputs[19] : this->zeroBuffer);
        const SampleValue * target_p3y = (numInputs >= 21 && inputs[20] ? inputs[20] : this->zeroBuffer);
        const SampleValue * target_p4y = (numInputs >= 22 && inputs[21] ? inputs[21] : this->zeroBuffer);
        const SampleValue * target_p5y = (numInputs >= 23 && inputs[22] ? inputs[22] : this->zeroBuffer);
        const SampleValue * target_p6y = (numInputs >= 24 && inputs[23] ? inputs[23] : this->zeroBuffer);
        const SampleValue * target_p7y = (numInputs >= 25 && inputs[24] ? inputs[24] : this->zeroBuffer);
        const SampleValue * target_p8y = (numInputs >= 26 && inputs[25] ? inputs[25] : this->zeroBuffer);
        const SampleValue * target_p9y = (numInputs >= 27 && inputs[26] ? inputs[26] : this->zeroBuffer);
        const SampleValue * target_scale = (numInputs >= 28 && inputs[27] ? inputs[27] : this->zeroBuffer);
        const SampleValue * target_b1r = (numInputs >= 29 && inputs[28] ? inputs[28] : this->zeroBuffer);
        const SampleValue * target_b2r = (numInputs >= 30 && inputs[29] ? inputs[29] : this->zeroBuffer);
        const SampleValue * target_b3r = (numInputs >= 31 && inputs[30] ? inputs[30] : this->zeroBuffer);
        const SampleValue * target_b4r = (numInputs >= 32 && inputs[31] ? inputs[31] : this->zeroBuffer);
        const SampleValue * target_b5r = (numInputs >= 33 && inputs[32] ? inputs[32] : this->zeroBuffer);
        const SampleValue * target_b6r = (numInputs >= 34 && inputs[33] ? inputs[33] : this->zeroBuffer);
        const SampleValue * target_b7r = (numInputs >= 35 && inputs[34] ? inputs[34] : this->zeroBuffer);
        const SampleValue * target_b8r = (numInputs >= 36 && inputs[35] ? inputs[35] : this->zeroBuffer);
        const SampleValue * target_b9r = (numInputs >= 37 && inputs[36] ? inputs[36] : this->zeroBuffer);
        const SampleValue * target_b1t = (numInputs >= 38 && inputs[37] ? inputs[37] : this->zeroBuffer);
        const SampleValue * target_b2t = (numInputs >= 39 && inputs[38] ? inputs[38] : this->zeroBuffer);
        const SampleValue * target_b3t = (numInputs >= 40 && inputs[39] ? inputs[39] : this->zeroBuffer);
        const SampleValue * target_b4t = (numInputs >= 41 && inputs[40] ? inputs[40] : this->zeroBuffer);
        const SampleValue * target_b5t = (numInputs >= 42 && inputs[41] ? inputs[41] : this->zeroBuffer);
        const SampleValue * target_b6t = (numInputs >= 43 && inputs[42] ? inputs[42] : this->zeroBuffer);
        const SampleValue * target_b7t = (numInputs >= 44 && inputs[43] ? inputs[43] : this->zeroBuffer);
        const SampleValue * target_b8t = (numInputs >= 45 && inputs[44] ? inputs[44] : this->zeroBuffer);
        const SampleValue * target_b9t = (numInputs >= 46 && inputs[45] ? inputs[45] : this->zeroBuffer);
        SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
        SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
    
        if (this->getIsMuted())
            return;
    
        this->mtof_tilde_01_perform(this->mtof_tilde_01_midivalue, this->signals[0], n);
        this->phasor_01_perform(this->signals[0], this->signals[1], n);
        this->ip_02_perform(this->signals[0], n);
        this->ip_03_perform(this->signals[2], n);
        this->stackprotect_perform(n);
        this->signalreceive_01_perform(target_A, this->signals[3], n);
        this->signalreceive_02_perform(target_duty, this->signals[4], n);
        this->triangle_tilde_01_perform(this->signals[1], this->signals[4], this->signals[5], n);
        this->signalreceive_03_perform(target_r, this->signals[4], n);
        this->signalreceive_04_perform(target_D, this->signals[1], n);
        this->signalreceive_05_perform(target_S, this->signals[6], n);
        this->signalreceive_06_perform(target_R, this->signals[7], n);
    
        this->adsr_01_perform(
            this->signals[3],
            this->signals[1],
            this->signals[6],
            this->signals[7],
            this->signals[0],
            this->signals[8],
            n
        );
    
        this->signalreceive_07_perform(target_p, this->signals[7], n);
        this->dspexpr_32_perform(this->signals[7], this->dspexpr_32_in2, this->signals[6], n);
        this->dspexpr_31_perform(this->signals[5], this->signals[6], this->signals[1], n);
        this->dspexpr_30_perform(this->signals[1], this->dspexpr_30_in2, this->signals[6], n);
        this->dspexpr_35_perform(this->signals[1], this->signals[5], n);
        this->dspexpr_34_perform(this->signals[5], this->dspexpr_34_in2, this->signals[1], n);
        this->dspexpr_33_perform(this->signals[1], this->dspexpr_33_in2, this->signals[5], n);
        this->signalreceive_08_perform(target_p0x, this->signals[3], n);
        this->signalreceive_09_perform(target_p1x, this->signals[0], n);
        this->signalreceive_10_perform(target_p2x, this->signals[9], n);
        this->signalreceive_11_perform(target_p3x, this->signals[10], n);
        this->signalreceive_12_perform(target_p4x, this->signals[11], n);
        this->signalreceive_13_perform(target_p5x, this->signals[12], n);
        this->signalreceive_14_perform(target_p6x, this->signals[13], n);
        this->signalreceive_15_perform(target_p7x, this->signals[14], n);
        this->signalreceive_16_perform(target_p8x, this->signals[15], n);
        this->signalreceive_17_perform(target_p9x, this->signals[16], n);
        this->signalreceive_18_perform(target_p0y, this->signals[17], n);
        this->signalreceive_19_perform(target_p1y, this->signals[18], n);
        this->signalreceive_20_perform(target_p2y, this->signals[19], n);
        this->signalreceive_21_perform(target_p3y, this->signals[20], n);
        this->signalreceive_22_perform(target_p4y, this->signals[21], n);
        this->signalreceive_23_perform(target_p5y, this->signals[22], n);
        this->signalreceive_24_perform(target_p6y, this->signals[23], n);
        this->signalreceive_25_perform(target_p7y, this->signals[24], n);
        this->signalreceive_26_perform(target_p8y, this->signals[25], n);
        this->signalreceive_27_perform(target_p9y, this->signals[26], n);
    
        this->p_03_perform(
            this->signals[5],
            this->signals[3],
            this->signals[0],
            this->signals[9],
            this->signals[10],
            this->signals[11],
            this->signals[12],
            this->signals[13],
            this->signals[14],
            this->signals[15],
            this->signals[16],
            this->signals[17],
            this->signals[18],
            this->signals[19],
            this->signals[20],
            this->signals[21],
            this->signals[22],
            this->signals[23],
            this->signals[24],
            this->signals[25],
            this->signals[26],
            this->signals[27],
            this->signals[28],
            n
        );
    
        this->p_04_perform(
            this->signals[1],
            this->signals[3],
            this->signals[0],
            this->signals[9],
            this->signals[10],
            this->signals[11],
            this->signals[12],
            this->signals[13],
            this->signals[14],
            this->signals[15],
            this->signals[16],
            this->signals[17],
            this->signals[18],
            this->signals[19],
            this->signals[20],
            this->signals[21],
            this->signals[22],
            this->signals[23],
            this->signals[24],
            this->signals[25],
            this->signals[26],
            this->signals[29],
            this->signals[30],
            n
        );
    
        this->p_06_perform(
            this->signals[5],
            this->signals[3],
            this->signals[0],
            this->signals[9],
            this->signals[10],
            this->signals[11],
            this->signals[12],
            this->signals[13],
            this->signals[14],
            this->signals[15],
            this->signals[16],
            this->signals[17],
            this->signals[18],
            this->signals[19],
            this->signals[20],
            this->signals[21],
            this->signals[22],
            this->signals[23],
            this->signals[24],
            this->signals[25],
            this->signals[26],
            this->signals[7],
            this->signals[31],
            this->signals[32],
            n
        );
    
        this->p_07_perform(
            this->signals[1],
            this->signals[3],
            this->signals[0],
            this->signals[9],
            this->signals[10],
            this->signals[11],
            this->signals[12],
            this->signals[13],
            this->signals[14],
            this->signals[15],
            this->signals[16],
            this->signals[17],
            this->signals[18],
            this->signals[19],
            this->signals[20],
            this->signals[21],
            this->signals[22],
            this->signals[23],
            this->signals[24],
            this->signals[25],
            this->signals[26],
            this->signals[7],
            this->signals[33],
            this->signals[34],
            n
        );
    
        this->signalreceive_28_perform(target_scale, this->signals[7], n);
        this->dspexpr_38_perform(this->signals[32], this->signals[7], this->signals[26], n);
        this->dspexpr_39_perform(this->signals[34], this->signals[7], this->signals[32], n);
        this->dspexpr_36_perform(this->signals[33], this->signals[7], this->signals[34], n);
        this->dspexpr_37_perform(this->signals[31], this->signals[7], this->signals[33], n);
    
        this->p_05_perform(
            this->signals[6],
            this->signals[29],
            this->signals[34],
            this->signals[27],
            this->signals[33],
            this->signals[30],
            this->signals[32],
            this->signals[28],
            this->signals[26],
            this->signals[7],
            this->signals[31],
            n
        );
    
        this->signalreceive_29_perform(target_b1r, this->signals[26], n);
        this->signalreceive_30_perform(target_b2r, this->signals[32], n);
        this->signalreceive_31_perform(target_b3r, this->signals[33], n);
        this->signalreceive_32_perform(target_b4r, this->signals[34], n);
        this->signalreceive_33_perform(target_b5r, this->signals[25], n);
        this->signalreceive_34_perform(target_b6r, this->signals[24], n);
        this->signalreceive_35_perform(target_b7r, this->signals[23], n);
        this->signalreceive_36_perform(target_b8r, this->signals[22], n);
        this->signalreceive_37_perform(target_b9r, this->signals[21], n);
        this->signalreceive_38_perform(target_b1t, this->signals[20], n);
        this->signalreceive_39_perform(target_b2t, this->signals[19], n);
        this->signalreceive_40_perform(target_b3t, this->signals[18], n);
        this->signalreceive_41_perform(target_b4t, this->signals[17], n);
        this->signalreceive_42_perform(target_b5t, this->signals[16], n);
        this->signalreceive_43_perform(target_b6t, this->signals[15], n);
        this->signalreceive_44_perform(target_b7t, this->signals[14], n);
        this->signalreceive_45_perform(target_b8t, this->signals[13], n);
        this->signalreceive_46_perform(target_b9t, this->signals[12], n);
    
        this->p_08_perform(
            this->signals[5],
            this->zeroBuffer,
            this->signals[26],
            this->signals[32],
            this->signals[33],
            this->signals[34],
            this->signals[25],
            this->signals[24],
            this->signals[23],
            this->signals[22],
            this->signals[21],
            this->zeroBuffer,
            this->signals[20],
            this->signals[19],
            this->signals[18],
            this->signals[17],
            this->signals[16],
            this->signals[15],
            this->signals[14],
            this->signals[13],
            this->signals[12],
            this->signals[11],
            this->signals[10],
            n
        );
    
        this->poltocar_tilde_02_perform(
            this->signals[11],
            this->signals[10],
            this->signals[12],
            this->signals[13],
            n
        );
    
        this->p_09_perform(
            this->signals[6],
            this->signals[29],
            this->signals[30],
            this->signals[12],
            this->signals[13],
            this->signals[27],
            this->signals[28],
            this->signals[10],
            this->signals[11],
            n
        );
    
        this->selector_27_perform(
            this->signals[2],
            this->signals[7],
            this->signals[10],
            this->signals[28],
            n
        );
    
        this->selector_28_perform(
            this->signals[2],
            this->signals[31],
            this->signals[11],
            this->signals[10],
            n
        );
    
        this->cartopol_tilde_01_perform(
            this->signals[28],
            this->signals[10],
            this->signals[11],
            this->signals[31],
            n
        );
    
        this->dspexpr_26_perform(
            this->signals[11],
            this->dspexpr_26_in2,
            this->dspexpr_26_in3,
            this->signals[10],
            n
        );
    
        this->dspexpr_29_perform(this->signals[31], this->signals[4], this->signals[11], n);
    
        this->poltocar_tilde_01_perform(
            this->signals[10],
            this->signals[11],
            this->signals[4],
            this->signals[31],
            n
        );
    
        this->dspexpr_27_perform(this->signals[4], this->signals[8], this->signals[11], n);
        this->signaladder_01_perform(this->signals[11], out1, out1, n);
        this->dspexpr_28_perform(this->signals[31], this->signals[8], this->signals[11], n);
        this->signaladder_02_perform(this->signals[11], out2, out2, n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            Index i;
    
            for (i = 0; i < 35; i++) {
                this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
            }
    
            this->phasor_01_sigbuf = resizeSignal(this->phasor_01_sigbuf, this->maxvs, maxBlockSize);
            this->adsr_01_triggerBuf = resizeSignal(this->adsr_01_triggerBuf, this->maxvs, maxBlockSize);
            this->adsr_01_triggerValueBuf = resizeSignal(this->adsr_01_triggerValueBuf, this->maxvs, maxBlockSize);
            this->ip_02_sigbuf = resizeSignal(this->ip_02_sigbuf, this->maxvs, maxBlockSize);
            this->ip_03_sigbuf = resizeSignal(this->ip_03_sigbuf, this->maxvs, maxBlockSize);
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
        this->ip_02_dspsetup(forceDSPSetup);
        this->ip_03_dspsetup(forceDSPSetup);
        this->adsr_01_dspsetup(forceDSPSetup);
        this->p_03->prepareToProcess(sampleRate, maxBlockSize, force);
        this->p_04->prepareToProcess(sampleRate, maxBlockSize, force);
        this->p_05->prepareToProcess(sampleRate, maxBlockSize, force);
        this->p_06->prepareToProcess(sampleRate, maxBlockSize, force);
        this->p_07->prepareToProcess(sampleRate, maxBlockSize, force);
        this->p_08->prepareToProcess(sampleRate, maxBlockSize, force);
        this->p_09->prepareToProcess(sampleRate, maxBlockSize, force);
    
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
        this->p_03->setVoiceIndex(index);
        this->p_04->setVoiceIndex(index);
        this->p_05->setVoiceIndex(index);
        this->p_06->setVoiceIndex(index);
        this->p_07->setVoiceIndex(index);
        this->p_08->setVoiceIndex(index);
        this->p_09->setVoiceIndex(index);
    }
    
    void setNoteNumber(Int noteNumber)  {
        this->_noteNumber = noteNumber;
        this->p_03->setNoteNumber(noteNumber);
        this->p_04->setNoteNumber(noteNumber);
        this->p_05->setNoteNumber(noteNumber);
        this->p_06->setNoteNumber(noteNumber);
        this->p_07->setNoteNumber(noteNumber);
        this->p_08->setNoteNumber(noteNumber);
        this->p_09->setNoteNumber(noteNumber);
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
        this->p_03 = new RNBOSubpatcher_753();
        this->p_03->setEngineAndPatcher(this->getEngine(), this);
        this->p_03->initialize();
        this->p_03->setParameterOffset(this->getParameterOffset(this->p_03));
        this->p_04 = new RNBOSubpatcher_754();
        this->p_04->setEngineAndPatcher(this->getEngine(), this);
        this->p_04->initialize();
        this->p_04->setParameterOffset(this->getParameterOffset(this->p_04));
        this->p_05 = new RNBOSubpatcher_755();
        this->p_05->setEngineAndPatcher(this->getEngine(), this);
        this->p_05->initialize();
        this->p_05->setParameterOffset(this->getParameterOffset(this->p_05));
        this->p_06 = new RNBOSubpatcher_756();
        this->p_06->setEngineAndPatcher(this->getEngine(), this);
        this->p_06->initialize();
        this->p_06->setParameterOffset(this->getParameterOffset(this->p_06));
        this->p_07 = new RNBOSubpatcher_757();
        this->p_07->setEngineAndPatcher(this->getEngine(), this);
        this->p_07->initialize();
        this->p_07->setParameterOffset(this->getParameterOffset(this->p_07));
        this->p_08 = new RNBOSubpatcher_758();
        this->p_08->setEngineAndPatcher(this->getEngine(), this);
        this->p_08->initialize();
        this->p_08->setParameterOffset(this->getParameterOffset(this->p_08));
        this->p_09 = new RNBOSubpatcher_759();
        this->p_09->setEngineAndPatcher(this->getEngine(), this);
        this->p_09->initialize();
        this->p_09->setParameterOffset(this->getParameterOffset(this->p_09));
    }
    
    void getPreset(PatcherStateInterface& preset) {
        this->p_03->getPreset(getSubState(getSubState(preset, "__sps"), "P1"));
        this->p_04->getPreset(getSubState(getSubState(preset, "__sps"), "P0"));
        this->p_05->getPreset(getSubState(getSubState(preset, "__sps"), "Cardinal"));
        this->p_06->getPreset(getSubState(getSubState(preset, "__sps"), "V1"));
        this->p_07->getPreset(getSubState(getSubState(preset, "__sps"), "V0"));
        this->p_08->getPreset(getSubState(getSubState(preset, "__sps"), "PCurve"));
        this->p_09->getPreset(getSubState(getSubState(preset, "__sps"), "Bezier"));
    }
    
    void processTempoEvent(MillisecondTime time, Tempo tempo) {
        this->updateTime(time);
        this->p_03->processTempoEvent(time, tempo);
        this->p_04->processTempoEvent(time, tempo);
        this->p_05->processTempoEvent(time, tempo);
        this->p_06->processTempoEvent(time, tempo);
        this->p_07->processTempoEvent(time, tempo);
        this->p_08->processTempoEvent(time, tempo);
        this->p_09->processTempoEvent(time, tempo);
    }
    
    void processTransportEvent(MillisecondTime time, TransportState state) {
        this->updateTime(time);
        this->p_03->processTransportEvent(time, state);
        this->p_04->processTransportEvent(time, state);
        this->p_05->processTransportEvent(time, state);
        this->p_06->processTransportEvent(time, state);
        this->p_07->processTransportEvent(time, state);
        this->p_08->processTransportEvent(time, state);
        this->p_09->processTransportEvent(time, state);
    }
    
    void processBeatTimeEvent(MillisecondTime time, BeatTime beattime) {
        this->updateTime(time);
        this->p_03->processBeatTimeEvent(time, beattime);
        this->p_04->processBeatTimeEvent(time, beattime);
        this->p_05->processBeatTimeEvent(time, beattime);
        this->p_06->processBeatTimeEvent(time, beattime);
        this->p_07->processBeatTimeEvent(time, beattime);
        this->p_08->processBeatTimeEvent(time, beattime);
        this->p_09->processBeatTimeEvent(time, beattime);
    }
    
    void onSampleRateChanged(double ) {}
    
    void processTimeSignatureEvent(MillisecondTime time, int numerator, int denominator) {
        this->updateTime(time);
        this->p_03->processTimeSignatureEvent(time, numerator, denominator);
        this->p_04->processTimeSignatureEvent(time, numerator, denominator);
        this->p_05->processTimeSignatureEvent(time, numerator, denominator);
        this->p_06->processTimeSignatureEvent(time, numerator, denominator);
        this->p_07->processTimeSignatureEvent(time, numerator, denominator);
        this->p_08->processTimeSignatureEvent(time, numerator, denominator);
        this->p_09->processTimeSignatureEvent(time, numerator, denominator);
    }
    
    void setParameterValue(ParameterIndex index, ParameterValue v, MillisecondTime time) {
        RNBO_UNUSED(v);
        this->updateTime(time);
    
        switch (index) {
        default:
            {
            index -= 0;
    
            if (index < this->p_03->getNumParameters())
                this->p_03->setParameterValue(index, v, time);
    
            index -= this->p_03->getNumParameters();
    
            if (index < this->p_04->getNumParameters())
                this->p_04->setParameterValue(index, v, time);
    
            index -= this->p_04->getNumParameters();
    
            if (index < this->p_05->getNumParameters())
                this->p_05->setParameterValue(index, v, time);
    
            index -= this->p_05->getNumParameters();
    
            if (index < this->p_06->getNumParameters())
                this->p_06->setParameterValue(index, v, time);
    
            index -= this->p_06->getNumParameters();
    
            if (index < this->p_07->getNumParameters())
                this->p_07->setParameterValue(index, v, time);
    
            index -= this->p_07->getNumParameters();
    
            if (index < this->p_08->getNumParameters())
                this->p_08->setParameterValue(index, v, time);
    
            index -= this->p_08->getNumParameters();
    
            if (index < this->p_09->getNumParameters())
                this->p_09->setParameterValue(index, v, time);
    
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
        default:
            {
            index -= 0;
    
            if (index < this->p_03->getNumParameters())
                return this->p_03->getParameterValue(index);
    
            index -= this->p_03->getNumParameters();
    
            if (index < this->p_04->getNumParameters())
                return this->p_04->getParameterValue(index);
    
            index -= this->p_04->getNumParameters();
    
            if (index < this->p_05->getNumParameters())
                return this->p_05->getParameterValue(index);
    
            index -= this->p_05->getNumParameters();
    
            if (index < this->p_06->getNumParameters())
                return this->p_06->getParameterValue(index);
    
            index -= this->p_06->getNumParameters();
    
            if (index < this->p_07->getNumParameters())
                return this->p_07->getParameterValue(index);
    
            index -= this->p_07->getNumParameters();
    
            if (index < this->p_08->getNumParameters())
                return this->p_08->getParameterValue(index);
    
            index -= this->p_08->getNumParameters();
    
            if (index < this->p_09->getNumParameters())
                return this->p_09->getParameterValue(index);
    
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
        return 46;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 0 + this->p_03->getNumParameters() + this->p_04->getNumParameters() + this->p_05->getNumParameters() + this->p_06->getNumParameters() + this->p_07->getNumParameters() + this->p_08->getNumParameters() + this->p_09->getNumParameters();
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        default:
            {
            index -= 0;
    
            if (index < this->p_03->getNumParameters())
                return this->p_03->getParameterName(index);
    
            index -= this->p_03->getNumParameters();
    
            if (index < this->p_04->getNumParameters())
                return this->p_04->getParameterName(index);
    
            index -= this->p_04->getNumParameters();
    
            if (index < this->p_05->getNumParameters())
                return this->p_05->getParameterName(index);
    
            index -= this->p_05->getNumParameters();
    
            if (index < this->p_06->getNumParameters())
                return this->p_06->getParameterName(index);
    
            index -= this->p_06->getNumParameters();
    
            if (index < this->p_07->getNumParameters())
                return this->p_07->getParameterName(index);
    
            index -= this->p_07->getNumParameters();
    
            if (index < this->p_08->getNumParameters())
                return this->p_08->getParameterName(index);
    
            index -= this->p_08->getNumParameters();
    
            if (index < this->p_09->getNumParameters())
                return this->p_09->getParameterName(index);
    
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        default:
            {
            index -= 0;
    
            if (index < this->p_03->getNumParameters())
                return this->p_03->getParameterId(index);
    
            index -= this->p_03->getNumParameters();
    
            if (index < this->p_04->getNumParameters())
                return this->p_04->getParameterId(index);
    
            index -= this->p_04->getNumParameters();
    
            if (index < this->p_05->getNumParameters())
                return this->p_05->getParameterId(index);
    
            index -= this->p_05->getNumParameters();
    
            if (index < this->p_06->getNumParameters())
                return this->p_06->getParameterId(index);
    
            index -= this->p_06->getNumParameters();
    
            if (index < this->p_07->getNumParameters())
                return this->p_07->getParameterId(index);
    
            index -= this->p_07->getNumParameters();
    
            if (index < this->p_08->getNumParameters())
                return this->p_08->getParameterId(index);
    
            index -= this->p_08->getNumParameters();
    
            if (index < this->p_09->getNumParameters())
                return this->p_09->getParameterId(index);
    
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex index, ParameterInfo * info) const {
        {
            switch (index) {
            default:
                {
                index -= 0;
    
                if (index < this->p_03->getNumParameters())
                    this->p_03->getParameterInfo(index, info);
    
                index -= this->p_03->getNumParameters();
    
                if (index < this->p_04->getNumParameters())
                    this->p_04->getParameterInfo(index, info);
    
                index -= this->p_04->getNumParameters();
    
                if (index < this->p_05->getNumParameters())
                    this->p_05->getParameterInfo(index, info);
    
                index -= this->p_05->getNumParameters();
    
                if (index < this->p_06->getNumParameters())
                    this->p_06->getParameterInfo(index, info);
    
                index -= this->p_06->getNumParameters();
    
                if (index < this->p_07->getNumParameters())
                    this->p_07->getParameterInfo(index, info);
    
                index -= this->p_07->getNumParameters();
    
                if (index < this->p_08->getNumParameters())
                    this->p_08->getParameterInfo(index, info);
    
                index -= this->p_08->getNumParameters();
    
                if (index < this->p_09->getNumParameters())
                    this->p_09->getParameterInfo(index, info);
    
                break;
                }
            }
        }
    }
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        if (this->_voiceIndex == 1)
            this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void sendPolyParameter(ParameterIndex index, Index voiceIndex, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset + voiceIndex - 1, ignoreValue);
    }
    
    ParameterIndex getParameterOffset(BaseInterface* subpatcher) const {
        if (subpatcher == this->p_03)
            return 0;
    
        if (subpatcher == this->p_04)
            return 0 + this->p_03->getNumParameters();
    
        if (subpatcher == this->p_05)
            return 0 + this->p_03->getNumParameters() + this->p_04->getNumParameters();
    
        if (subpatcher == this->p_06)
            return 0 + this->p_03->getNumParameters() + this->p_04->getNumParameters() + this->p_05->getNumParameters();
    
        if (subpatcher == this->p_07)
            return 0 + this->p_03->getNumParameters() + this->p_04->getNumParameters() + this->p_05->getNumParameters() + this->p_06->getNumParameters();
    
        if (subpatcher == this->p_08)
            return 0 + this->p_03->getNumParameters() + this->p_04->getNumParameters() + this->p_05->getNumParameters() + this->p_06->getNumParameters() + this->p_07->getNumParameters();
    
        if (subpatcher == this->p_09)
            return 0 + this->p_03->getNumParameters() + this->p_04->getNumParameters() + this->p_05->getNumParameters() + this->p_06->getNumParameters() + this->p_07->getNumParameters() + this->p_08->getNumParameters();
    
        return 0;
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
            index -= 0;
    
            if (index < this->p_03->getNumParameters())
                return this->p_03->convertToNormalizedParameterValue(index, value);
    
            index -= this->p_03->getNumParameters();
    
            if (index < this->p_04->getNumParameters())
                return this->p_04->convertToNormalizedParameterValue(index, value);
    
            index -= this->p_04->getNumParameters();
    
            if (index < this->p_05->getNumParameters())
                return this->p_05->convertToNormalizedParameterValue(index, value);
    
            index -= this->p_05->getNumParameters();
    
            if (index < this->p_06->getNumParameters())
                return this->p_06->convertToNormalizedParameterValue(index, value);
    
            index -= this->p_06->getNumParameters();
    
            if (index < this->p_07->getNumParameters())
                return this->p_07->convertToNormalizedParameterValue(index, value);
    
            index -= this->p_07->getNumParameters();
    
            if (index < this->p_08->getNumParameters())
                return this->p_08->convertToNormalizedParameterValue(index, value);
    
            index -= this->p_08->getNumParameters();
    
            if (index < this->p_09->getNumParameters())
                return this->p_09->convertToNormalizedParameterValue(index, value);
    
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        default:
            {
            index -= 0;
    
            if (index < this->p_03->getNumParameters())
                return this->p_03->convertFromNormalizedParameterValue(index, value);
    
            index -= this->p_03->getNumParameters();
    
            if (index < this->p_04->getNumParameters())
                return this->p_04->convertFromNormalizedParameterValue(index, value);
    
            index -= this->p_04->getNumParameters();
    
            if (index < this->p_05->getNumParameters())
                return this->p_05->convertFromNormalizedParameterValue(index, value);
    
            index -= this->p_05->getNumParameters();
    
            if (index < this->p_06->getNumParameters())
                return this->p_06->convertFromNormalizedParameterValue(index, value);
    
            index -= this->p_06->getNumParameters();
    
            if (index < this->p_07->getNumParameters())
                return this->p_07->convertFromNormalizedParameterValue(index, value);
    
            index -= this->p_07->getNumParameters();
    
            if (index < this->p_08->getNumParameters())
                return this->p_08->convertFromNormalizedParameterValue(index, value);
    
            index -= this->p_08->getNumParameters();
    
            if (index < this->p_09->getNumParameters())
                return this->p_09->convertFromNormalizedParameterValue(index, value);
    
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            index -= 0;
    
            if (index < this->p_03->getNumParameters())
                return this->p_03->constrainParameterValue(index, value);
    
            index -= this->p_03->getNumParameters();
    
            if (index < this->p_04->getNumParameters())
                return this->p_04->constrainParameterValue(index, value);
    
            index -= this->p_04->getNumParameters();
    
            if (index < this->p_05->getNumParameters())
                return this->p_05->constrainParameterValue(index, value);
    
            index -= this->p_05->getNumParameters();
    
            if (index < this->p_06->getNumParameters())
                return this->p_06->constrainParameterValue(index, value);
    
            index -= this->p_06->getNumParameters();
    
            if (index < this->p_07->getNumParameters())
                return this->p_07->constrainParameterValue(index, value);
    
            index -= this->p_07->getNumParameters();
    
            if (index < this->p_08->getNumParameters())
                return this->p_08->constrainParameterValue(index, value);
    
            index -= this->p_08->getNumParameters();
    
            if (index < this->p_09->getNumParameters())
                return this->p_09->constrainParameterValue(index, value);
    
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
    
    void processNumMessage(MessageTag tag, MessageTag objectId, MillisecondTime time, number payload) {
        RNBO_UNUSED(objectId);
        this->updateTime(time);
        this->p_03->processNumMessage(tag, objectId, time, payload);
        this->p_04->processNumMessage(tag, objectId, time, payload);
        this->p_05->processNumMessage(tag, objectId, time, payload);
        this->p_06->processNumMessage(tag, objectId, time, payload);
        this->p_07->processNumMessage(tag, objectId, time, payload);
        this->p_08->processNumMessage(tag, objectId, time, payload);
        this->p_09->processNumMessage(tag, objectId, time, payload);
    }
    
    void processListMessage(
        MessageTag tag,
        MessageTag objectId,
        MillisecondTime time,
        const list& payload
    ) {
        RNBO_UNUSED(objectId);
        this->updateTime(time);
        this->p_03->processListMessage(tag, objectId, time, payload);
        this->p_04->processListMessage(tag, objectId, time, payload);
        this->p_05->processListMessage(tag, objectId, time, payload);
        this->p_06->processListMessage(tag, objectId, time, payload);
        this->p_07->processListMessage(tag, objectId, time, payload);
        this->p_08->processListMessage(tag, objectId, time, payload);
        this->p_09->processListMessage(tag, objectId, time, payload);
    }
    
    void processBangMessage(MessageTag tag, MessageTag objectId, MillisecondTime time) {
        RNBO_UNUSED(objectId);
        this->updateTime(time);
        this->p_03->processBangMessage(tag, objectId, time);
        this->p_04->processBangMessage(tag, objectId, time);
        this->p_05->processBangMessage(tag, objectId, time);
        this->p_06->processBangMessage(tag, objectId, time);
        this->p_07->processBangMessage(tag, objectId, time);
        this->p_08->processBangMessage(tag, objectId, time);
        this->p_09->processBangMessage(tag, objectId, time);
    }
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        auto subpatchResult_0 = this->p_03->resolveTag(tag);
    
        if (subpatchResult_0)
            return subpatchResult_0;
    
        auto subpatchResult_1 = this->p_04->resolveTag(tag);
    
        if (subpatchResult_1)
            return subpatchResult_1;
    
        auto subpatchResult_2 = this->p_05->resolveTag(tag);
    
        if (subpatchResult_2)
            return subpatchResult_2;
    
        auto subpatchResult_3 = this->p_06->resolveTag(tag);
    
        if (subpatchResult_3)
            return subpatchResult_3;
    
        auto subpatchResult_4 = this->p_07->resolveTag(tag);
    
        if (subpatchResult_4)
            return subpatchResult_4;
    
        auto subpatchResult_5 = this->p_08->resolveTag(tag);
    
        if (subpatchResult_5)
            return subpatchResult_5;
    
        auto subpatchResult_6 = this->p_09->resolveTag(tag);
    
        if (subpatchResult_6)
            return subpatchResult_6;
    
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
    
        this->p_03->processDataViewUpdate(index, time);
        this->p_04->processDataViewUpdate(index, time);
        this->p_05->processDataViewUpdate(index, time);
        this->p_06->processDataViewUpdate(index, time);
        this->p_07->processDataViewUpdate(index, time);
        this->p_08->processDataViewUpdate(index, time);
        this->p_09->processDataViewUpdate(index, time);
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
        this->ip_02_init();
        this->ip_03_init();
        this->p_03->initializeObjects();
        this->p_04->initializeObjects();
        this->p_05->initializeObjects();
        this->p_06->initializeObjects();
        this->p_07->initializeObjects();
        this->p_08->initializeObjects();
        this->p_09->initializeObjects();
    }
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {
        this->updateTime(this->getEngine()->getCurrentTime());
        this->p_03->startup();
        this->p_04->startup();
        this->p_05->startup();
        this->p_06->startup();
        this->p_07->startup();
        this->p_08->startup();
        this->p_09->startup();
    }
    
    void allocateDataRefs() {
        this->p_03->allocateDataRefs();
        this->p_04->allocateDataRefs();
        this->p_05->allocateDataRefs();
        this->p_06->allocateDataRefs();
        this->p_07->allocateDataRefs();
        this->p_08->allocateDataRefs();
        this->p_09->allocateDataRefs();
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
        this->expr_03_out1_set(this->expr_03_in1 * this->expr_03_in2);//#map:Spline/*_obj-200:1
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
        this->getPatcher()->p_10_out3_list_set((list)v);
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
        this->expr_01_out1_set(this->expr_01_in1 + this->expr_01_in2);//#map:Spline/+_obj-52:1
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
    
    void ip_03_value_set(number v) {
        this->ip_03_value = v;
        this->ip_03_fillSigBuf();
        this->ip_03_lastValue = v;
    }
    
    void receive_02_output_number_set(number v) {
        this->receive_02_output_number = v;
        this->ip_03_value_set(v);
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
    
    void ip_02_value_set(number v) {
        this->ip_02_value = v;
        this->ip_02_fillSigBuf();
        this->ip_02_lastValue = v;
    }
    
    void expr_02_out1_set(number v) {
        this->expr_02_out1 = v;
        this->ip_02_value_set(this->expr_02_out1);
    }
    
    void expr_02_in1_set(number in1) {
        this->expr_02_in1 = in1;
    
        this->expr_02_out1_set(
            (this->expr_02_in2 == 0 ? 0 : (this->expr_02_in2 == 0. ? 0. : this->expr_02_in1 / this->expr_02_in2))
        );//#map:Spline//_obj-93:1
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
        this->getPatcher()->p_10_midiout_set(v);
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
        this->getPatcher()->p_10_mute_set(v);
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
    
    void dspexpr_32_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] - 1;//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_31_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_30_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = this->safemod(in1[(Index)i], 1);//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_35_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_floor(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_34_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] + 1;//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_33_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] + 1;//#map:_###_obj_###_:1
        }
    }
    
    void signalreceive_08_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_09_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_10_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
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
    
    void signalreceive_13_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
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
    
    void signalreceive_16_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
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
    
    void signalreceive_19_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
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
    
    void signalreceive_22_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_23_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_24_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_25_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_26_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_27_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void p_03_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        const SampleValue * in3,
        const SampleValue * in4,
        const SampleValue * in5,
        const SampleValue * in6,
        const SampleValue * in7,
        const SampleValue * in8,
        const SampleValue * in9,
        const SampleValue * in10,
        const SampleValue * in11,
        const SampleValue * in12,
        const SampleValue * in13,
        const SampleValue * in14,
        const SampleValue * in15,
        const SampleValue * in16,
        const SampleValue * in17,
        const SampleValue * in18,
        const SampleValue * in19,
        const SampleValue * in20,
        const SampleValue * in21,
        SampleValue * out1,
        SampleValue * out2,
        Index n
    ) {
        // subpatcher: P1
        ConstSampleArray<21> ins = {
            in1,
            in2,
            in3,
            in4,
            in5,
            in6,
            in7,
            in8,
            in9,
            in10,
            in11,
            in12,
            in13,
            in14,
            in15,
            in16,
            in17,
            in18,
            in19,
            in20,
            in21
        };
    
        SampleArray<2> outs = {out1, out2};
        this->p_03->process(ins, 21, outs, 2, n);
    }
    
    void p_04_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        const SampleValue * in3,
        const SampleValue * in4,
        const SampleValue * in5,
        const SampleValue * in6,
        const SampleValue * in7,
        const SampleValue * in8,
        const SampleValue * in9,
        const SampleValue * in10,
        const SampleValue * in11,
        const SampleValue * in12,
        const SampleValue * in13,
        const SampleValue * in14,
        const SampleValue * in15,
        const SampleValue * in16,
        const SampleValue * in17,
        const SampleValue * in18,
        const SampleValue * in19,
        const SampleValue * in20,
        const SampleValue * in21,
        SampleValue * out1,
        SampleValue * out2,
        Index n
    ) {
        // subpatcher: P0
        ConstSampleArray<21> ins = {
            in1,
            in2,
            in3,
            in4,
            in5,
            in6,
            in7,
            in8,
            in9,
            in10,
            in11,
            in12,
            in13,
            in14,
            in15,
            in16,
            in17,
            in18,
            in19,
            in20,
            in21
        };
    
        SampleArray<2> outs = {out1, out2};
        this->p_04->process(ins, 21, outs, 2, n);
    }
    
    void p_06_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        const SampleValue * in3,
        const SampleValue * in4,
        const SampleValue * in5,
        const SampleValue * in6,
        const SampleValue * in7,
        const SampleValue * in8,
        const SampleValue * in9,
        const SampleValue * in10,
        const SampleValue * in11,
        const SampleValue * in12,
        const SampleValue * in13,
        const SampleValue * in14,
        const SampleValue * in15,
        const SampleValue * in16,
        const SampleValue * in17,
        const SampleValue * in18,
        const SampleValue * in19,
        const SampleValue * in20,
        const SampleValue * in21,
        const SampleValue * in22,
        SampleValue * out1,
        SampleValue * out2,
        Index n
    ) {
        // subpatcher: V1
        ConstSampleArray<22> ins = {
            in1,
            in2,
            in3,
            in4,
            in5,
            in6,
            in7,
            in8,
            in9,
            in10,
            in11,
            in12,
            in13,
            in14,
            in15,
            in16,
            in17,
            in18,
            in19,
            in20,
            in21,
            in22
        };
    
        SampleArray<2> outs = {out1, out2};
        this->p_06->process(ins, 22, outs, 2, n);
    }
    
    void p_07_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        const SampleValue * in3,
        const SampleValue * in4,
        const SampleValue * in5,
        const SampleValue * in6,
        const SampleValue * in7,
        const SampleValue * in8,
        const SampleValue * in9,
        const SampleValue * in10,
        const SampleValue * in11,
        const SampleValue * in12,
        const SampleValue * in13,
        const SampleValue * in14,
        const SampleValue * in15,
        const SampleValue * in16,
        const SampleValue * in17,
        const SampleValue * in18,
        const SampleValue * in19,
        const SampleValue * in20,
        const SampleValue * in21,
        const SampleValue * in22,
        SampleValue * out1,
        SampleValue * out2,
        Index n
    ) {
        // subpatcher: V0
        ConstSampleArray<22> ins = {
            in1,
            in2,
            in3,
            in4,
            in5,
            in6,
            in7,
            in8,
            in9,
            in10,
            in11,
            in12,
            in13,
            in14,
            in15,
            in16,
            in17,
            in18,
            in19,
            in20,
            in21,
            in22
        };
    
        SampleArray<2> outs = {out1, out2};
        this->p_07->process(ins, 22, outs, 2, n);
    }
    
    void signalreceive_28_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void dspexpr_38_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_39_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_36_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_37_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void p_05_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        const SampleValue * in3,
        const SampleValue * in4,
        const SampleValue * in5,
        const SampleValue * in6,
        const SampleValue * in7,
        const SampleValue * in8,
        const SampleValue * in9,
        SampleValue * out1,
        SampleValue * out2,
        Index n
    ) {
        // subpatcher: Cardinal
        ConstSampleArray<9> ins = {in1, in2, in3, in4, in5, in6, in7, in8, in9};
    
        SampleArray<2> outs = {out1, out2};
        this->p_05->process(ins, 9, outs, 2, n);
    }
    
    void signalreceive_29_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_30_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_31_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_32_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_33_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_34_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_35_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_36_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_37_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_38_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_39_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_40_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_41_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_42_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_43_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_44_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_45_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void signalreceive_46_perform(const SampleValue * receive, SampleValue * output, Index n) {
        for (Index i = 0; i < n; i++) {
            output[(Index)i] = receive[(Index)i];
        }
    }
    
    void p_08_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        const SampleValue * in3,
        const SampleValue * in4,
        const SampleValue * in5,
        const SampleValue * in6,
        const SampleValue * in7,
        const SampleValue * in8,
        const SampleValue * in9,
        const SampleValue * in10,
        const SampleValue * in11,
        const SampleValue * in12,
        const SampleValue * in13,
        const SampleValue * in14,
        const SampleValue * in15,
        const SampleValue * in16,
        const SampleValue * in17,
        const SampleValue * in18,
        const SampleValue * in19,
        const SampleValue * in20,
        const SampleValue * in21,
        SampleValue * out1,
        SampleValue * out2,
        Index n
    ) {
        // subpatcher: PCurve
        ConstSampleArray<21> ins = {
            in1,
            in2,
            in3,
            in4,
            in5,
            in6,
            in7,
            in8,
            in9,
            in10,
            in11,
            in12,
            in13,
            in14,
            in15,
            in16,
            in17,
            in18,
            in19,
            in20,
            in21
        };
    
        SampleArray<2> outs = {out1, out2};
        this->p_08->process(ins, 21, outs, 2, n);
    }
    
    void poltocar_tilde_02_perform(
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
    
    void p_09_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        const SampleValue * in3,
        const SampleValue * in4,
        const SampleValue * in5,
        const SampleValue * in6,
        const SampleValue * in7,
        SampleValue * out1,
        SampleValue * out2,
        Index n
    ) {
        // subpatcher: Bezier
        ConstSampleArray<7> ins = {in1, in2, in3, in4, in5, in6, in7};
    
        SampleArray<2> outs = {out1, out2};
        this->p_09->process(ins, 7, outs, 2, n);
    }
    
    void selector_27_perform(
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
    
    void selector_28_perform(
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
    
    void dspexpr_26_perform(const Sample * in1, number in2, number in3, SampleValue * out1, Index n) {
        RNBO_UNUSED(in3);
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = (in1[(Index)i] > 2 ? 2 : (in1[(Index)i] < -2 ? -2 : in1[(Index)i]));//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_29_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
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
    
    void dspexpr_27_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
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
    
    void dspexpr_28_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
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
        dspexpr_26_in1 = 0;
        dspexpr_26_in2 = -2;
        dspexpr_26_in3 = 2;
        midiin_01_port = 0;
        dspexpr_27_in1 = 0;
        dspexpr_27_in2 = 0;
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
        adsr_01_trigger_number = 0;
        adsr_01_attack = 10;
        adsr_01_decay = 10;
        adsr_01_sustain = 1;
        adsr_01_release = 10;
        adsr_01_legato = 0;
        ip_02_value = 0;
        ip_02_impulse = 0;
        expr_02_in1 = 0;
        expr_02_in2 = 127;
        expr_02_out1 = 0;
        dspexpr_28_in1 = 0;
        dspexpr_28_in2 = 0;
        dspexpr_29_in1 = 0;
        dspexpr_29_in2 = 0;
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
        dspexpr_30_in1 = 0;
        dspexpr_30_in2 = 1;
        dspexpr_31_in1 = 0;
        dspexpr_31_in2 = 0;
        dspexpr_32_in1 = 0;
        dspexpr_32_in2 = 1;
        receive_02_output_number = 0;
        ip_03_value = 1;
        ip_03_impulse = 0;
        selector_27_onoff = 1;
        cartopol_tilde_01_x = 0;
        cartopol_tilde_01_y = 0;
        dspexpr_33_in1 = 0;
        dspexpr_33_in2 = 1;
        dspexpr_34_in1 = 0;
        dspexpr_34_in2 = 1;
        dspexpr_35_in1 = 0;
        midiout_01_port = 0;
        p_03_target = 0;
        p_04_target = 0;
        selector_28_onoff = 1;
        p_05_target = 0;
        dspexpr_36_in1 = 0;
        dspexpr_36_in2 = 0;
        dspexpr_37_in1 = 0;
        dspexpr_37_in2 = 0;
        p_06_target = 0;
        p_07_target = 0;
        dspexpr_38_in1 = 0;
        dspexpr_38_in2 = 0;
        dspexpr_39_in1 = 0;
        dspexpr_39_in2 = 0;
        poltocar_tilde_02_radius = 0;
        poltocar_tilde_02_angle = 0;
        p_08_target = 0;
        p_09_target = 0;
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
        signals[24] = nullptr;
        signals[25] = nullptr;
        signals[26] = nullptr;
        signals[27] = nullptr;
        signals[28] = nullptr;
        signals[29] = nullptr;
        signals[30] = nullptr;
        signals[31] = nullptr;
        signals[32] = nullptr;
        signals[33] = nullptr;
        signals[34] = nullptr;
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
        ip_02_lastIndex = 0;
        ip_02_lastValue = 0;
        ip_02_resetCount = 0;
        ip_02_sigbuf = nullptr;
        ip_02_setupDone = false;
        floatnum_02_stored = 0;
        ip_03_lastIndex = 0;
        ip_03_lastValue = 0;
        ip_03_resetCount = 0;
        ip_03_sigbuf = nullptr;
        ip_03_setupDone = false;
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
    
        number dspexpr_26_in1;
        number dspexpr_26_in2;
        number dspexpr_26_in3;
        number midiin_01_port;
        number dspexpr_27_in1;
        number dspexpr_27_in2;
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
        number adsr_01_trigger_number;
        number adsr_01_attack;
        number adsr_01_decay;
        number adsr_01_sustain;
        number adsr_01_release;
        number adsr_01_legato;
        number ip_02_value;
        number ip_02_impulse;
        number expr_02_in1;
        number expr_02_in2;
        number expr_02_out1;
        number dspexpr_28_in1;
        number dspexpr_28_in2;
        number dspexpr_29_in1;
        number dspexpr_29_in2;
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
        number dspexpr_30_in1;
        number dspexpr_30_in2;
        number dspexpr_31_in1;
        number dspexpr_31_in2;
        number dspexpr_32_in1;
        number dspexpr_32_in2;
        number receive_02_output_number;
        list receive_02_output_list;
        number ip_03_value;
        number ip_03_impulse;
        number selector_27_onoff;
        number cartopol_tilde_01_x;
        number cartopol_tilde_01_y;
        number dspexpr_33_in1;
        number dspexpr_33_in2;
        number dspexpr_34_in1;
        number dspexpr_34_in2;
        number dspexpr_35_in1;
        number midiout_01_port;
        number p_03_target;
        number p_04_target;
        number selector_28_onoff;
        number p_05_target;
        number dspexpr_36_in1;
        number dspexpr_36_in2;
        number dspexpr_37_in1;
        number dspexpr_37_in2;
        number p_06_target;
        number p_07_target;
        number dspexpr_38_in1;
        number dspexpr_38_in2;
        number dspexpr_39_in1;
        number dspexpr_39_in2;
        number poltocar_tilde_02_radius;
        number poltocar_tilde_02_angle;
        number p_08_target;
        number p_09_target;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        SampleValue * signals[35];
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
        SampleIndex ip_02_lastIndex;
        number ip_02_lastValue;
        SampleIndex ip_02_resetCount;
        signal ip_02_sigbuf;
        bool ip_02_setupDone;
        number floatnum_02_stored;
        SampleIndex ip_03_lastIndex;
        number ip_03_lastValue;
        SampleIndex ip_03_resetCount;
        signal ip_03_sigbuf;
        bool ip_03_setupDone;
        int midiout_01_currentStatus;
        int midiout_01_status;
        int midiout_01_byte1;
        list midiout_01_sysex;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
        RNBOSubpatcher_753* p_03;
        RNBOSubpatcher_754* p_04;
        RNBOSubpatcher_755* p_05;
        RNBOSubpatcher_756* p_06;
        RNBOSubpatcher_757* p_07;
        RNBOSubpatcher_758* p_08;
        RNBOSubpatcher_759* p_09;
    
};

rnbomatic()
{
}

~rnbomatic()
{
    for (int i = 0; i < 32; i++) {
        delete p_10[i];
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
    const SampleValue * P9X = (numInputs >= 8 && inputs[7] ? inputs[7] : this->zeroBuffer);
    const SampleValue * P8X = (numInputs >= 9 && inputs[8] ? inputs[8] : this->zeroBuffer);
    const SampleValue * P7X = (numInputs >= 10 && inputs[9] ? inputs[9] : this->zeroBuffer);
    const SampleValue * P6X = (numInputs >= 11 && inputs[10] ? inputs[10] : this->zeroBuffer);
    const SampleValue * P5X = (numInputs >= 12 && inputs[11] ? inputs[11] : this->zeroBuffer);
    const SampleValue * P4X = (numInputs >= 13 && inputs[12] ? inputs[12] : this->zeroBuffer);
    const SampleValue * P3X = (numInputs >= 14 && inputs[13] ? inputs[13] : this->zeroBuffer);
    const SampleValue * P2X = (numInputs >= 15 && inputs[14] ? inputs[14] : this->zeroBuffer);
    const SampleValue * P1X = (numInputs >= 16 && inputs[15] ? inputs[15] : this->zeroBuffer);
    const SampleValue * P0X = (numInputs >= 17 && inputs[16] ? inputs[16] : this->zeroBuffer);
    const SampleValue * P9Y = (numInputs >= 18 && inputs[17] ? inputs[17] : this->zeroBuffer);
    const SampleValue * P8Y = (numInputs >= 19 && inputs[18] ? inputs[18] : this->zeroBuffer);
    const SampleValue * P7Y = (numInputs >= 20 && inputs[19] ? inputs[19] : this->zeroBuffer);
    const SampleValue * P6Y = (numInputs >= 21 && inputs[20] ? inputs[20] : this->zeroBuffer);
    const SampleValue * P5Y = (numInputs >= 22 && inputs[21] ? inputs[21] : this->zeroBuffer);
    const SampleValue * P4Y = (numInputs >= 23 && inputs[22] ? inputs[22] : this->zeroBuffer);
    const SampleValue * P3Y = (numInputs >= 24 && inputs[23] ? inputs[23] : this->zeroBuffer);
    const SampleValue * P2Y = (numInputs >= 25 && inputs[24] ? inputs[24] : this->zeroBuffer);
    const SampleValue * P1Y = (numInputs >= 26 && inputs[25] ? inputs[25] : this->zeroBuffer);
    const SampleValue * P0Y = (numInputs >= 27 && inputs[26] ? inputs[26] : this->zeroBuffer);
    const SampleValue * B9R = (numInputs >= 28 && inputs[27] ? inputs[27] : this->zeroBuffer);
    const SampleValue * B8R = (numInputs >= 29 && inputs[28] ? inputs[28] : this->zeroBuffer);
    const SampleValue * B7R = (numInputs >= 30 && inputs[29] ? inputs[29] : this->zeroBuffer);
    const SampleValue * B6R = (numInputs >= 31 && inputs[30] ? inputs[30] : this->zeroBuffer);
    const SampleValue * B5R = (numInputs >= 32 && inputs[31] ? inputs[31] : this->zeroBuffer);
    const SampleValue * B4R = (numInputs >= 33 && inputs[32] ? inputs[32] : this->zeroBuffer);
    const SampleValue * B2R = (numInputs >= 34 && inputs[33] ? inputs[33] : this->zeroBuffer);
    const SampleValue * B1R = (numInputs >= 35 && inputs[34] ? inputs[34] : this->zeroBuffer);
    const SampleValue * B3R = (numInputs >= 36 && inputs[35] ? inputs[35] : this->zeroBuffer);
    const SampleValue * B9T = (numInputs >= 37 && inputs[36] ? inputs[36] : this->zeroBuffer);
    const SampleValue * B8T = (numInputs >= 38 && inputs[37] ? inputs[37] : this->zeroBuffer);
    const SampleValue * B7T = (numInputs >= 39 && inputs[38] ? inputs[38] : this->zeroBuffer);
    const SampleValue * B6T = (numInputs >= 40 && inputs[39] ? inputs[39] : this->zeroBuffer);
    const SampleValue * B5T = (numInputs >= 41 && inputs[40] ? inputs[40] : this->zeroBuffer);
    const SampleValue * B4T = (numInputs >= 42 && inputs[41] ? inputs[41] : this->zeroBuffer);
    const SampleValue * B2T = (numInputs >= 43 && inputs[42] ? inputs[42] : this->zeroBuffer);
    const SampleValue * B1T = (numInputs >= 44 && inputs[43] ? inputs[43] : this->zeroBuffer);
    const SampleValue * B3T = (numInputs >= 45 && inputs[44] ? inputs[44] : this->zeroBuffer);
    SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
    SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
    this->paramtilde_01_perform(Rotation, this->signals[0], n);
    this->dspexpr_40_perform(this->signals[0], this->signals[1], n);
    this->signalsend_03_perform(this->signals[1], this->signals[0], n);
    this->paramtilde_02_perform(Gain, this->signals[1], n);
    this->dspexpr_41_perform(this->signals[1], this->signals[2], n);
    this->paramtilde_03_perform(Release, this->signals[1], n);
    this->signalsend_06_perform(this->signals[1], this->signals[3], n);
    this->paramtilde_04_perform(Sustain, this->signals[1], n);
    this->dspexpr_42_perform(this->signals[1], this->signals[4], n);
    this->dspexpr_45_perform(this->signals[4], this->dspexpr_45_in2, this->signals[1], n);
    this->signalsend_02_perform(this->signals[1], this->signals[4], n);
    this->paramtilde_05_perform(Decay, this->signals[1], n);
    this->signalsend_04_perform(this->signals[1], this->signals[5], n);
    this->paramtilde_06_perform(Attack, this->signals[1], n);
    this->signalsend_05_perform(this->signals[1], this->signals[6], n);
    this->paramtilde_07_perform(Ramp, this->signals[1], n);
    this->dspexpr_43_perform(this->signals[1], this->dspexpr_43_in2, this->signals[7], n);
    this->signalsend_01_perform(this->signals[7], this->signals[1], n);
    this->paramtilde_08_perform(P9X, this->signals[7], n);
    this->signalsend_07_perform(this->signals[7], this->signals[8], n);
    this->paramtilde_09_perform(P8X, this->signals[7], n);
    this->signalsend_08_perform(this->signals[7], this->signals[9], n);
    this->paramtilde_10_perform(P7X, this->signals[7], n);
    this->signalsend_09_perform(this->signals[7], this->signals[10], n);
    this->paramtilde_11_perform(P6X, this->signals[7], n);
    this->signalsend_10_perform(this->signals[7], this->signals[11], n);
    this->paramtilde_12_perform(P5X, this->signals[7], n);
    this->signalsend_11_perform(this->signals[7], this->signals[12], n);
    this->paramtilde_13_perform(P4X, this->signals[7], n);
    this->signalsend_12_perform(this->signals[7], this->signals[13], n);
    this->paramtilde_14_perform(P3X, this->signals[7], n);
    this->signalsend_13_perform(this->signals[7], this->signals[14], n);
    this->paramtilde_15_perform(P2X, this->signals[7], n);
    this->signalsend_14_perform(this->signals[7], this->signals[15], n);
    this->paramtilde_16_perform(P1X, this->signals[7], n);
    this->signalsend_15_perform(this->signals[7], this->signals[16], n);
    this->paramtilde_17_perform(P0X, this->signals[7], n);
    this->signalsend_16_perform(this->signals[7], this->signals[17], n);
    this->ip_04_perform(this->signals[7], n);
    this->signalsend_17_perform(this->signals[7], this->signals[18], n);
    this->paramtilde_18_perform(P9Y, this->signals[7], n);
    this->signalsend_18_perform(this->signals[7], this->signals[19], n);
    this->paramtilde_19_perform(P8Y, this->signals[7], n);
    this->signalsend_19_perform(this->signals[7], this->signals[20], n);
    this->paramtilde_20_perform(P7Y, this->signals[7], n);
    this->signalsend_20_perform(this->signals[7], this->signals[21], n);
    this->paramtilde_21_perform(P6Y, this->signals[7], n);
    this->signalsend_21_perform(this->signals[7], this->signals[22], n);
    this->paramtilde_22_perform(P5Y, this->signals[7], n);
    this->signalsend_22_perform(this->signals[7], this->signals[23], n);
    this->paramtilde_23_perform(P4Y, this->signals[7], n);
    this->signalsend_23_perform(this->signals[7], this->signals[24], n);
    this->paramtilde_24_perform(P3Y, this->signals[7], n);
    this->signalsend_24_perform(this->signals[7], this->signals[25], n);
    this->paramtilde_25_perform(P2Y, this->signals[7], n);
    this->signalsend_25_perform(this->signals[7], this->signals[26], n);
    this->paramtilde_26_perform(P1Y, this->signals[7], n);
    this->signalsend_26_perform(this->signals[7], this->signals[27], n);
    this->paramtilde_27_perform(P0Y, this->signals[7], n);
    this->signalsend_27_perform(this->signals[7], this->signals[28], n);
    this->paramtilde_28_perform(B9R, this->signals[7], n);
    this->dspexpr_47_perform(this->signals[7], this->dspexpr_47_in2, this->signals[29], n);
    this->signalsend_28_perform(this->signals[29], this->signals[7], n);
    this->paramtilde_29_perform(B8R, this->signals[29], n);
    this->dspexpr_48_perform(this->signals[29], this->dspexpr_48_in2, this->signals[30], n);
    this->signalsend_29_perform(this->signals[30], this->signals[29], n);
    this->paramtilde_30_perform(B7R, this->signals[30], n);
    this->dspexpr_49_perform(this->signals[30], this->dspexpr_49_in2, this->signals[31], n);
    this->signalsend_30_perform(this->signals[31], this->signals[30], n);
    this->paramtilde_31_perform(B6R, this->signals[31], n);
    this->dspexpr_50_perform(this->signals[31], this->dspexpr_50_in2, this->signals[32], n);
    this->signalsend_31_perform(this->signals[32], this->signals[31], n);
    this->paramtilde_32_perform(B5R, this->signals[32], n);
    this->dspexpr_51_perform(this->signals[32], this->dspexpr_51_in2, this->signals[33], n);
    this->signalsend_32_perform(this->signals[33], this->signals[32], n);
    this->paramtilde_33_perform(B4R, this->signals[33], n);
    this->dspexpr_52_perform(this->signals[33], this->dspexpr_52_in2, this->signals[34], n);
    this->signalsend_33_perform(this->signals[34], this->signals[33], n);
    this->paramtilde_34_perform(B2R, this->signals[34], n);
    this->dspexpr_54_perform(this->signals[34], this->dspexpr_54_in2, this->signals[35], n);
    this->signalsend_34_perform(this->signals[35], this->signals[34], n);
    this->paramtilde_35_perform(B1R, this->signals[35], n);
    this->dspexpr_55_perform(this->signals[35], this->dspexpr_55_in2, this->signals[36], n);
    this->signalsend_35_perform(this->signals[36], this->signals[35], n);
    this->paramtilde_36_perform(B3R, this->signals[36], n);
    this->dspexpr_53_perform(this->signals[36], this->dspexpr_53_in2, this->signals[37], n);
    this->signalsend_36_perform(this->signals[37], this->signals[36], n);
    this->paramtilde_37_perform(B9T, this->signals[37], n);
    this->dspexpr_56_perform(this->signals[37], this->signals[38], n);
    this->signalsend_38_perform(this->signals[38], this->signals[37], n);
    this->paramtilde_38_perform(B8T, this->signals[38], n);
    this->dspexpr_57_perform(this->signals[38], this->signals[39], n);
    this->signalsend_39_perform(this->signals[39], this->signals[38], n);
    this->paramtilde_39_perform(B7T, this->signals[39], n);
    this->dspexpr_58_perform(this->signals[39], this->signals[40], n);
    this->signalsend_40_perform(this->signals[40], this->signals[39], n);
    this->paramtilde_40_perform(B6T, this->signals[40], n);
    this->dspexpr_59_perform(this->signals[40], this->signals[41], n);
    this->signalsend_41_perform(this->signals[41], this->signals[40], n);
    this->paramtilde_41_perform(B5T, this->signals[41], n);
    this->dspexpr_60_perform(this->signals[41], this->signals[42], n);
    this->signalsend_42_perform(this->signals[42], this->signals[41], n);
    this->paramtilde_42_perform(B4T, this->signals[42], n);
    this->dspexpr_61_perform(this->signals[42], this->signals[43], n);
    this->signalsend_43_perform(this->signals[43], this->signals[42], n);
    this->paramtilde_43_perform(B2T, this->signals[43], n);
    this->dspexpr_62_perform(this->signals[43], this->signals[44], n);
    this->signalsend_44_perform(this->signals[44], this->signals[43], n);
    this->paramtilde_44_perform(B1T, this->signals[44], n);
    this->dspexpr_63_perform(this->signals[44], this->signals[45], n);
    this->signalsend_45_perform(this->signals[45], this->signals[44], n);
    this->paramtilde_45_perform(B3T, this->signals[45], n);
    this->dspexpr_64_perform(this->signals[45], this->signals[46], n);
    this->signalsend_46_perform(this->signals[46], this->signals[45], n);
    this->ip_05_perform(this->signals[46], n);
    this->signalsend_37_perform(this->signals[46], this->signals[47], n);

    this->p_10_perform(
        this->signals[6],
        this->signals[1],
        this->signals[0],
        this->signals[5],
        this->signals[4],
        this->signals[3],
        this->signals[18],
        this->signals[17],
        this->signals[16],
        this->signals[15],
        this->signals[14],
        this->signals[13],
        this->signals[12],
        this->signals[11],
        this->signals[10],
        this->signals[9],
        this->signals[8],
        this->signals[28],
        this->signals[27],
        this->signals[26],
        this->signals[25],
        this->signals[24],
        this->signals[23],
        this->signals[22],
        this->signals[21],
        this->signals[20],
        this->signals[19],
        this->signals[47],
        this->signals[35],
        this->signals[34],
        this->signals[36],
        this->signals[33],
        this->signals[32],
        this->signals[31],
        this->signals[30],
        this->signals[29],
        this->signals[7],
        this->signals[44],
        this->signals[43],
        this->signals[45],
        this->signals[42],
        this->signals[41],
        this->signals[40],
        this->signals[39],
        this->signals[38],
        this->signals[37],
        this->signals[46],
        this->signals[48],
        n
    );

    this->dspexpr_44_perform(this->signals[46], this->signals[2], out1, n);
    this->dspexpr_46_perform(this->signals[48], this->signals[2], out2, n);
    this->stackprotect_perform(n);
    this->globaltransport_advance();
    this->audioProcessSampleCount += this->vs;
}

void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
    if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
        Index i;

        for (i = 0; i < 49; i++) {
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
        this->ip_04_sigbuf = resizeSignal(this->ip_04_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_18_sigbuf = resizeSignal(this->paramtilde_18_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_19_sigbuf = resizeSignal(this->paramtilde_19_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_20_sigbuf = resizeSignal(this->paramtilde_20_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_21_sigbuf = resizeSignal(this->paramtilde_21_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_22_sigbuf = resizeSignal(this->paramtilde_22_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_23_sigbuf = resizeSignal(this->paramtilde_23_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_24_sigbuf = resizeSignal(this->paramtilde_24_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_25_sigbuf = resizeSignal(this->paramtilde_25_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_26_sigbuf = resizeSignal(this->paramtilde_26_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_27_sigbuf = resizeSignal(this->paramtilde_27_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_28_sigbuf = resizeSignal(this->paramtilde_28_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_29_sigbuf = resizeSignal(this->paramtilde_29_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_30_sigbuf = resizeSignal(this->paramtilde_30_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_31_sigbuf = resizeSignal(this->paramtilde_31_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_32_sigbuf = resizeSignal(this->paramtilde_32_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_33_sigbuf = resizeSignal(this->paramtilde_33_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_34_sigbuf = resizeSignal(this->paramtilde_34_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_35_sigbuf = resizeSignal(this->paramtilde_35_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_36_sigbuf = resizeSignal(this->paramtilde_36_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_37_sigbuf = resizeSignal(this->paramtilde_37_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_38_sigbuf = resizeSignal(this->paramtilde_38_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_39_sigbuf = resizeSignal(this->paramtilde_39_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_40_sigbuf = resizeSignal(this->paramtilde_40_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_41_sigbuf = resizeSignal(this->paramtilde_41_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_42_sigbuf = resizeSignal(this->paramtilde_42_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_43_sigbuf = resizeSignal(this->paramtilde_43_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_44_sigbuf = resizeSignal(this->paramtilde_44_sigbuf, this->maxvs, maxBlockSize);
        this->paramtilde_45_sigbuf = resizeSignal(this->paramtilde_45_sigbuf, this->maxvs, maxBlockSize);
        this->ip_05_sigbuf = resizeSignal(this->ip_05_sigbuf, this->maxvs, maxBlockSize);
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
    this->ip_04_dspsetup(forceDSPSetup);
    this->paramtilde_18_dspsetup(forceDSPSetup);
    this->paramtilde_19_dspsetup(forceDSPSetup);
    this->paramtilde_20_dspsetup(forceDSPSetup);
    this->paramtilde_21_dspsetup(forceDSPSetup);
    this->paramtilde_22_dspsetup(forceDSPSetup);
    this->paramtilde_23_dspsetup(forceDSPSetup);
    this->paramtilde_24_dspsetup(forceDSPSetup);
    this->paramtilde_25_dspsetup(forceDSPSetup);
    this->paramtilde_26_dspsetup(forceDSPSetup);
    this->paramtilde_27_dspsetup(forceDSPSetup);
    this->paramtilde_28_dspsetup(forceDSPSetup);
    this->paramtilde_29_dspsetup(forceDSPSetup);
    this->paramtilde_30_dspsetup(forceDSPSetup);
    this->paramtilde_31_dspsetup(forceDSPSetup);
    this->paramtilde_32_dspsetup(forceDSPSetup);
    this->paramtilde_33_dspsetup(forceDSPSetup);
    this->paramtilde_34_dspsetup(forceDSPSetup);
    this->paramtilde_35_dspsetup(forceDSPSetup);
    this->paramtilde_36_dspsetup(forceDSPSetup);
    this->paramtilde_37_dspsetup(forceDSPSetup);
    this->paramtilde_38_dspsetup(forceDSPSetup);
    this->paramtilde_39_dspsetup(forceDSPSetup);
    this->paramtilde_40_dspsetup(forceDSPSetup);
    this->paramtilde_41_dspsetup(forceDSPSetup);
    this->paramtilde_42_dspsetup(forceDSPSetup);
    this->paramtilde_43_dspsetup(forceDSPSetup);
    this->paramtilde_44_dspsetup(forceDSPSetup);
    this->paramtilde_45_dspsetup(forceDSPSetup);
    this->ip_05_dspsetup(forceDSPSetup);
    this->globaltransport_dspsetup(forceDSPSetup);

    for (Index i = 0; i < 32; i++) {
        this->p_10[i]->prepareToProcess(sampleRate, maxBlockSize, force);
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
        this->p_10[i]->processDataViewUpdate(index, time);
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
        this->p_10[(Index)i] = new RNBOSubpatcher_760();
        this->p_10[(Index)i]->setEngineAndPatcher(this->getEngine(), this);
        this->p_10[(Index)i]->initialize();
        this->p_10[(Index)i]->setParameterOffset(this->getParameterOffset(this->p_10[0]));
        this->p_10[(Index)i]->setVoiceIndex(i + 1);
    }
}

void getPreset(PatcherStateInterface& preset) {
    preset["__presetid"] = "rnbo";
    this->param_01_getPresetValue(getSubState(preset, "PitchBendRange"));
    this->param_02_getPresetValue(getSubState(preset, "PitchBend"));
    this->param_03_getPresetValue(getSubState(preset, "Points"));
    this->param_04_getPresetValue(getSubState(preset, "Mode"));
    this->param_05_getPresetValue(getSubState(preset, "Curvature"));

    for (Index i = 0; i < 32; i++)
        this->p_10[i]->getPreset(getSubStateAt(getSubState(preset, "__sps"), "Spline", i));
}

void setPreset(MillisecondTime time, PatcherStateInterface& preset) {
    this->updateTime(time);
    this->param_01_setPresetValue(getSubState(preset, "PitchBendRange"));
    this->param_02_setPresetValue(getSubState(preset, "PitchBend"));
    this->param_03_setPresetValue(getSubState(preset, "Points"));
    this->param_04_setPresetValue(getSubState(preset, "Mode"));
    this->param_05_setPresetValue(getSubState(preset, "Curvature"));
}

void processTempoEvent(MillisecondTime time, Tempo tempo) {
    this->updateTime(time);

    if (this->globaltransport_setTempo(tempo, false)) {
        for (Index i = 0; i < 32; i++) {
            this->p_10[i]->processTempoEvent(time, tempo);
        }
    }
}

void processTransportEvent(MillisecondTime time, TransportState state) {
    this->updateTime(time);

    if (this->globaltransport_setState(state, false)) {
        for (Index i = 0; i < 32; i++) {
            this->p_10[i]->processTransportEvent(time, state);
        }
    }
}

void processBeatTimeEvent(MillisecondTime time, BeatTime beattime) {
    this->updateTime(time);

    if (this->globaltransport_setBeatTime(beattime, false)) {
        for (Index i = 0; i < 32; i++) {
            this->p_10[i]->processBeatTimeEvent(time, beattime);
        }
    }
}

void onSampleRateChanged(double ) {}

void processTimeSignatureEvent(MillisecondTime time, int numerator, int denominator) {
    this->updateTime(time);

    if (this->globaltransport_setTimeSignature(numerator, denominator, false)) {
        for (Index i = 0; i < 32; i++) {
            this->p_10[i]->processTimeSignatureEvent(time, numerator, denominator);
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
        this->paramtilde_01_value_set(v);
        break;
        }
    case 6:
        {
        this->paramtilde_02_value_set(v);
        break;
        }
    case 7:
        {
        this->paramtilde_03_value_set(v);
        break;
        }
    case 8:
        {
        this->paramtilde_04_value_set(v);
        break;
        }
    case 9:
        {
        this->paramtilde_05_value_set(v);
        break;
        }
    case 10:
        {
        this->paramtilde_06_value_set(v);
        break;
        }
    case 11:
        {
        this->paramtilde_07_value_set(v);
        break;
        }
    case 12:
        {
        this->paramtilde_08_value_set(v);
        break;
        }
    case 13:
        {
        this->paramtilde_09_value_set(v);
        break;
        }
    case 14:
        {
        this->paramtilde_10_value_set(v);
        break;
        }
    case 15:
        {
        this->paramtilde_11_value_set(v);
        break;
        }
    case 16:
        {
        this->paramtilde_12_value_set(v);
        break;
        }
    case 17:
        {
        this->paramtilde_13_value_set(v);
        break;
        }
    case 18:
        {
        this->paramtilde_14_value_set(v);
        break;
        }
    case 19:
        {
        this->paramtilde_15_value_set(v);
        break;
        }
    case 20:
        {
        this->paramtilde_16_value_set(v);
        break;
        }
    case 21:
        {
        this->paramtilde_17_value_set(v);
        break;
        }
    case 22:
        {
        this->paramtilde_18_value_set(v);
        break;
        }
    case 23:
        {
        this->paramtilde_19_value_set(v);
        break;
        }
    case 24:
        {
        this->paramtilde_20_value_set(v);
        break;
        }
    case 25:
        {
        this->paramtilde_21_value_set(v);
        break;
        }
    case 26:
        {
        this->paramtilde_22_value_set(v);
        break;
        }
    case 27:
        {
        this->paramtilde_23_value_set(v);
        break;
        }
    case 28:
        {
        this->paramtilde_24_value_set(v);
        break;
        }
    case 29:
        {
        this->paramtilde_25_value_set(v);
        break;
        }
    case 30:
        {
        this->paramtilde_26_value_set(v);
        break;
        }
    case 31:
        {
        this->paramtilde_27_value_set(v);
        break;
        }
    case 32:
        {
        this->paramtilde_28_value_set(v);
        break;
        }
    case 33:
        {
        this->paramtilde_29_value_set(v);
        break;
        }
    case 34:
        {
        this->paramtilde_30_value_set(v);
        break;
        }
    case 35:
        {
        this->paramtilde_31_value_set(v);
        break;
        }
    case 36:
        {
        this->paramtilde_32_value_set(v);
        break;
        }
    case 37:
        {
        this->paramtilde_33_value_set(v);
        break;
        }
    case 38:
        {
        this->paramtilde_34_value_set(v);
        break;
        }
    case 39:
        {
        this->paramtilde_35_value_set(v);
        break;
        }
    case 40:
        {
        this->paramtilde_36_value_set(v);
        break;
        }
    case 41:
        {
        this->paramtilde_37_value_set(v);
        break;
        }
    case 42:
        {
        this->paramtilde_38_value_set(v);
        break;
        }
    case 43:
        {
        this->paramtilde_39_value_set(v);
        break;
        }
    case 44:
        {
        this->paramtilde_40_value_set(v);
        break;
        }
    case 45:
        {
        this->paramtilde_41_value_set(v);
        break;
        }
    case 46:
        {
        this->paramtilde_42_value_set(v);
        break;
        }
    case 47:
        {
        this->paramtilde_43_value_set(v);
        break;
        }
    case 48:
        {
        this->paramtilde_44_value_set(v);
        break;
        }
    case 49:
        {
        this->paramtilde_45_value_set(v);
        break;
        }
    case 50:
        {
        // namedAudioIn: Rotation
        break;
        }
    case 51:
        {
        // namedAudioIn: Gain
        break;
        }
    case 52:
        {
        // namedAudioIn: Release
        break;
        }
    case 53:
        {
        // namedAudioIn: Sustain
        break;
        }
    case 54:
        {
        // namedAudioIn: Decay
        break;
        }
    case 55:
        {
        // namedAudioIn: Attack
        break;
        }
    case 56:
        {
        // namedAudioIn: Ramp
        break;
        }
    case 57:
        {
        // namedAudioIn: P9X
        break;
        }
    case 58:
        {
        // namedAudioIn: P8X
        break;
        }
    case 59:
        {
        // namedAudioIn: P7X
        break;
        }
    case 60:
        {
        // namedAudioIn: P6X
        break;
        }
    case 61:
        {
        // namedAudioIn: P5X
        break;
        }
    case 62:
        {
        // namedAudioIn: P4X
        break;
        }
    case 63:
        {
        // namedAudioIn: P3X
        break;
        }
    case 64:
        {
        // namedAudioIn: P2X
        break;
        }
    case 65:
        {
        // namedAudioIn: P1X
        break;
        }
    case 66:
        {
        // namedAudioIn: P0X
        break;
        }
    case 67:
        {
        // namedAudioIn: P9Y
        break;
        }
    case 68:
        {
        // namedAudioIn: P8Y
        break;
        }
    case 69:
        {
        // namedAudioIn: P7Y
        break;
        }
    case 70:
        {
        // namedAudioIn: P6Y
        break;
        }
    case 71:
        {
        // namedAudioIn: P5Y
        break;
        }
    case 72:
        {
        // namedAudioIn: P4Y
        break;
        }
    case 73:
        {
        // namedAudioIn: P3Y
        break;
        }
    case 74:
        {
        // namedAudioIn: P2Y
        break;
        }
    case 75:
        {
        // namedAudioIn: P1Y
        break;
        }
    case 76:
        {
        // namedAudioIn: P0Y
        break;
        }
    case 77:
        {
        // namedAudioIn: B9R
        break;
        }
    case 78:
        {
        // namedAudioIn: B8R
        break;
        }
    case 79:
        {
        // namedAudioIn: B7R
        break;
        }
    case 80:
        {
        // namedAudioIn: B6R
        break;
        }
    case 81:
        {
        // namedAudioIn: B5R
        break;
        }
    case 82:
        {
        // namedAudioIn: B4R
        break;
        }
    case 83:
        {
        // namedAudioIn: B2R
        break;
        }
    case 84:
        {
        // namedAudioIn: B1R
        break;
        }
    case 85:
        {
        // namedAudioIn: B3R
        break;
        }
    case 86:
        {
        // namedAudioIn: B9T
        break;
        }
    case 87:
        {
        // namedAudioIn: B8T
        break;
        }
    case 88:
        {
        // namedAudioIn: B7T
        break;
        }
    case 89:
        {
        // namedAudioIn: B6T
        break;
        }
    case 90:
        {
        // namedAudioIn: B5T
        break;
        }
    case 91:
        {
        // namedAudioIn: B4T
        break;
        }
    case 92:
        {
        // namedAudioIn: B2T
        break;
        }
    case 93:
        {
        // namedAudioIn: B1T
        break;
        }
    case 94:
        {
        // namedAudioIn: B3T
        break;
        }
    default:
        {
        index -= 95;

        if (index < this->p_10[0]->getNumParameters())
            this->p_10[0]->setPolyParameterValue((PatcherInterface**)this->p_10, index, v, time);

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
        return this->paramtilde_01_value;
        }
    case 6:
        {
        return this->paramtilde_02_value;
        }
    case 7:
        {
        return this->paramtilde_03_value;
        }
    case 8:
        {
        return this->paramtilde_04_value;
        }
    case 9:
        {
        return this->paramtilde_05_value;
        }
    case 10:
        {
        return this->paramtilde_06_value;
        }
    case 11:
        {
        return this->paramtilde_07_value;
        }
    case 12:
        {
        return this->paramtilde_08_value;
        }
    case 13:
        {
        return this->paramtilde_09_value;
        }
    case 14:
        {
        return this->paramtilde_10_value;
        }
    case 15:
        {
        return this->paramtilde_11_value;
        }
    case 16:
        {
        return this->paramtilde_12_value;
        }
    case 17:
        {
        return this->paramtilde_13_value;
        }
    case 18:
        {
        return this->paramtilde_14_value;
        }
    case 19:
        {
        return this->paramtilde_15_value;
        }
    case 20:
        {
        return this->paramtilde_16_value;
        }
    case 21:
        {
        return this->paramtilde_17_value;
        }
    case 22:
        {
        return this->paramtilde_18_value;
        }
    case 23:
        {
        return this->paramtilde_19_value;
        }
    case 24:
        {
        return this->paramtilde_20_value;
        }
    case 25:
        {
        return this->paramtilde_21_value;
        }
    case 26:
        {
        return this->paramtilde_22_value;
        }
    case 27:
        {
        return this->paramtilde_23_value;
        }
    case 28:
        {
        return this->paramtilde_24_value;
        }
    case 29:
        {
        return this->paramtilde_25_value;
        }
    case 30:
        {
        return this->paramtilde_26_value;
        }
    case 31:
        {
        return this->paramtilde_27_value;
        }
    case 32:
        {
        return this->paramtilde_28_value;
        }
    case 33:
        {
        return this->paramtilde_29_value;
        }
    case 34:
        {
        return this->paramtilde_30_value;
        }
    case 35:
        {
        return this->paramtilde_31_value;
        }
    case 36:
        {
        return this->paramtilde_32_value;
        }
    case 37:
        {
        return this->paramtilde_33_value;
        }
    case 38:
        {
        return this->paramtilde_34_value;
        }
    case 39:
        {
        return this->paramtilde_35_value;
        }
    case 40:
        {
        return this->paramtilde_36_value;
        }
    case 41:
        {
        return this->paramtilde_37_value;
        }
    case 42:
        {
        return this->paramtilde_38_value;
        }
    case 43:
        {
        return this->paramtilde_39_value;
        }
    case 44:
        {
        return this->paramtilde_40_value;
        }
    case 45:
        {
        return this->paramtilde_41_value;
        }
    case 46:
        {
        return this->paramtilde_42_value;
        }
    case 47:
        {
        return this->paramtilde_43_value;
        }
    case 48:
        {
        return this->paramtilde_44_value;
        }
    case 49:
        {
        return this->paramtilde_45_value;
        }
    case 50:
        {
        // namedAudioIn: Rotation
        return 0;
        }
    case 51:
        {
        // namedAudioIn: Gain
        return 0;
        }
    case 52:
        {
        // namedAudioIn: Release
        return 0;
        }
    case 53:
        {
        // namedAudioIn: Sustain
        return 0;
        }
    case 54:
        {
        // namedAudioIn: Decay
        return 0;
        }
    case 55:
        {
        // namedAudioIn: Attack
        return 0;
        }
    case 56:
        {
        // namedAudioIn: Ramp
        return 0;
        }
    case 57:
        {
        // namedAudioIn: P9X
        return 0;
        }
    case 58:
        {
        // namedAudioIn: P8X
        return 0;
        }
    case 59:
        {
        // namedAudioIn: P7X
        return 0;
        }
    case 60:
        {
        // namedAudioIn: P6X
        return 0;
        }
    case 61:
        {
        // namedAudioIn: P5X
        return 0;
        }
    case 62:
        {
        // namedAudioIn: P4X
        return 0;
        }
    case 63:
        {
        // namedAudioIn: P3X
        return 0;
        }
    case 64:
        {
        // namedAudioIn: P2X
        return 0;
        }
    case 65:
        {
        // namedAudioIn: P1X
        return 0;
        }
    case 66:
        {
        // namedAudioIn: P0X
        return 0;
        }
    case 67:
        {
        // namedAudioIn: P9Y
        return 0;
        }
    case 68:
        {
        // namedAudioIn: P8Y
        return 0;
        }
    case 69:
        {
        // namedAudioIn: P7Y
        return 0;
        }
    case 70:
        {
        // namedAudioIn: P6Y
        return 0;
        }
    case 71:
        {
        // namedAudioIn: P5Y
        return 0;
        }
    case 72:
        {
        // namedAudioIn: P4Y
        return 0;
        }
    case 73:
        {
        // namedAudioIn: P3Y
        return 0;
        }
    case 74:
        {
        // namedAudioIn: P2Y
        return 0;
        }
    case 75:
        {
        // namedAudioIn: P1Y
        return 0;
        }
    case 76:
        {
        // namedAudioIn: P0Y
        return 0;
        }
    case 77:
        {
        // namedAudioIn: B9R
        return 0;
        }
    case 78:
        {
        // namedAudioIn: B8R
        return 0;
        }
    case 79:
        {
        // namedAudioIn: B7R
        return 0;
        }
    case 80:
        {
        // namedAudioIn: B6R
        return 0;
        }
    case 81:
        {
        // namedAudioIn: B5R
        return 0;
        }
    case 82:
        {
        // namedAudioIn: B4R
        return 0;
        }
    case 83:
        {
        // namedAudioIn: B2R
        return 0;
        }
    case 84:
        {
        // namedAudioIn: B1R
        return 0;
        }
    case 85:
        {
        // namedAudioIn: B3R
        return 0;
        }
    case 86:
        {
        // namedAudioIn: B9T
        return 0;
        }
    case 87:
        {
        // namedAudioIn: B8T
        return 0;
        }
    case 88:
        {
        // namedAudioIn: B7T
        return 0;
        }
    case 89:
        {
        // namedAudioIn: B6T
        return 0;
        }
    case 90:
        {
        // namedAudioIn: B5T
        return 0;
        }
    case 91:
        {
        // namedAudioIn: B4T
        return 0;
        }
    case 92:
        {
        // namedAudioIn: B2T
        return 0;
        }
    case 93:
        {
        // namedAudioIn: B1T
        return 0;
        }
    case 94:
        {
        // namedAudioIn: B3T
        return 0;
        }
    default:
        {
        index -= 95;

        if (index < this->p_10[0]->getNumParameters())
            return this->p_10[0]->getPolyParameterValue((PatcherInterface**)this->p_10, index);

        return 0;
        }
    }
}

ParameterIndex getNumSignalInParameters() const {
    return 45;
}

ParameterIndex getNumSignalOutParameters() const {
    return 0;
}

ParameterIndex getNumParameters() const {
    return 95 + this->p_10[0]->getNumParameters();
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
        return "Points";
        }
    case 3:
        {
        return "Mode";
        }
    case 4:
        {
        return "Curvature";
        }
    case 5:
        {
        return "Rotation";
        }
    case 6:
        {
        return "Gain";
        }
    case 7:
        {
        return "Release";
        }
    case 8:
        {
        return "Sustain";
        }
    case 9:
        {
        return "Decay";
        }
    case 10:
        {
        return "Attack";
        }
    case 11:
        {
        return "Ramp";
        }
    case 12:
        {
        return "P9X";
        }
    case 13:
        {
        return "P8X";
        }
    case 14:
        {
        return "P7X";
        }
    case 15:
        {
        return "P6X";
        }
    case 16:
        {
        return "P5X";
        }
    case 17:
        {
        return "P4X";
        }
    case 18:
        {
        return "P3X";
        }
    case 19:
        {
        return "P2X";
        }
    case 20:
        {
        return "P1X";
        }
    case 21:
        {
        return "P0X";
        }
    case 22:
        {
        return "P9Y";
        }
    case 23:
        {
        return "P8Y";
        }
    case 24:
        {
        return "P7Y";
        }
    case 25:
        {
        return "P6Y";
        }
    case 26:
        {
        return "P5Y";
        }
    case 27:
        {
        return "P4Y";
        }
    case 28:
        {
        return "P3Y";
        }
    case 29:
        {
        return "P2Y";
        }
    case 30:
        {
        return "P1Y";
        }
    case 31:
        {
        return "P0Y";
        }
    case 32:
        {
        return "B9R";
        }
    case 33:
        {
        return "B8R";
        }
    case 34:
        {
        return "B7R";
        }
    case 35:
        {
        return "B6R";
        }
    case 36:
        {
        return "B5R";
        }
    case 37:
        {
        return "B4R";
        }
    case 38:
        {
        return "B2R";
        }
    case 39:
        {
        return "B1R";
        }
    case 40:
        {
        return "B3R";
        }
    case 41:
        {
        return "B9T";
        }
    case 42:
        {
        return "B8T";
        }
    case 43:
        {
        return "B7T";
        }
    case 44:
        {
        return "B6T";
        }
    case 45:
        {
        return "B5T";
        }
    case 46:
        {
        return "B4T";
        }
    case 47:
        {
        return "B2T";
        }
    case 48:
        {
        return "B1T";
        }
    case 49:
        {
        return "B3T";
        }
    case 50:
        {
        return "Rotation";
        }
    case 51:
        {
        return "Gain";
        }
    case 52:
        {
        return "Release";
        }
    case 53:
        {
        return "Sustain";
        }
    case 54:
        {
        return "Decay";
        }
    case 55:
        {
        return "Attack";
        }
    case 56:
        {
        return "Ramp";
        }
    case 57:
        {
        return "P9X";
        }
    case 58:
        {
        return "P8X";
        }
    case 59:
        {
        return "P7X";
        }
    case 60:
        {
        return "P6X";
        }
    case 61:
        {
        return "P5X";
        }
    case 62:
        {
        return "P4X";
        }
    case 63:
        {
        return "P3X";
        }
    case 64:
        {
        return "P2X";
        }
    case 65:
        {
        return "P1X";
        }
    case 66:
        {
        return "P0X";
        }
    case 67:
        {
        return "P9Y";
        }
    case 68:
        {
        return "P8Y";
        }
    case 69:
        {
        return "P7Y";
        }
    case 70:
        {
        return "P6Y";
        }
    case 71:
        {
        return "P5Y";
        }
    case 72:
        {
        return "P4Y";
        }
    case 73:
        {
        return "P3Y";
        }
    case 74:
        {
        return "P2Y";
        }
    case 75:
        {
        return "P1Y";
        }
    case 76:
        {
        return "P0Y";
        }
    case 77:
        {
        return "B9R";
        }
    case 78:
        {
        return "B8R";
        }
    case 79:
        {
        return "B7R";
        }
    case 80:
        {
        return "B6R";
        }
    case 81:
        {
        return "B5R";
        }
    case 82:
        {
        return "B4R";
        }
    case 83:
        {
        return "B2R";
        }
    case 84:
        {
        return "B1R";
        }
    case 85:
        {
        return "B3R";
        }
    case 86:
        {
        return "B9T";
        }
    case 87:
        {
        return "B8T";
        }
    case 88:
        {
        return "B7T";
        }
    case 89:
        {
        return "B6T";
        }
    case 90:
        {
        return "B5T";
        }
    case 91:
        {
        return "B4T";
        }
    case 92:
        {
        return "B2T";
        }
    case 93:
        {
        return "B1T";
        }
    case 94:
        {
        return "B3T";
        }
    default:
        {
        index -= 95;

        if (index < this->p_10[0]->getNumParameters()) {
            {
                return this->p_10[0]->getParameterName(index);
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
        return "Points";
        }
    case 3:
        {
        return "Mode";
        }
    case 4:
        {
        return "Curvature";
        }
    case 5:
        {
        return "Rotation";
        }
    case 6:
        {
        return "Gain";
        }
    case 7:
        {
        return "Release";
        }
    case 8:
        {
        return "Sustain";
        }
    case 9:
        {
        return "Decay";
        }
    case 10:
        {
        return "Attack";
        }
    case 11:
        {
        return "Ramp";
        }
    case 12:
        {
        return "P9X";
        }
    case 13:
        {
        return "P8X";
        }
    case 14:
        {
        return "P7X";
        }
    case 15:
        {
        return "P6X";
        }
    case 16:
        {
        return "P5X";
        }
    case 17:
        {
        return "P4X";
        }
    case 18:
        {
        return "P3X";
        }
    case 19:
        {
        return "P2X";
        }
    case 20:
        {
        return "P1X";
        }
    case 21:
        {
        return "P0X";
        }
    case 22:
        {
        return "P9Y";
        }
    case 23:
        {
        return "P8Y";
        }
    case 24:
        {
        return "P7Y";
        }
    case 25:
        {
        return "P6Y";
        }
    case 26:
        {
        return "P5Y";
        }
    case 27:
        {
        return "P4Y";
        }
    case 28:
        {
        return "P3Y";
        }
    case 29:
        {
        return "P2Y";
        }
    case 30:
        {
        return "P1Y";
        }
    case 31:
        {
        return "P0Y";
        }
    case 32:
        {
        return "B9R";
        }
    case 33:
        {
        return "B8R";
        }
    case 34:
        {
        return "B7R";
        }
    case 35:
        {
        return "B6R";
        }
    case 36:
        {
        return "B5R";
        }
    case 37:
        {
        return "B4R";
        }
    case 38:
        {
        return "B2R";
        }
    case 39:
        {
        return "B1R";
        }
    case 40:
        {
        return "B3R";
        }
    case 41:
        {
        return "B9T";
        }
    case 42:
        {
        return "B8T";
        }
    case 43:
        {
        return "B7T";
        }
    case 44:
        {
        return "B6T";
        }
    case 45:
        {
        return "B5T";
        }
    case 46:
        {
        return "B4T";
        }
    case 47:
        {
        return "B2T";
        }
    case 48:
        {
        return "B1T";
        }
    case 49:
        {
        return "B3T";
        }
    case 50:
        {
        return "/signals/Rotation";
        }
    case 51:
        {
        return "/signals/Gain";
        }
    case 52:
        {
        return "/signals/Release";
        }
    case 53:
        {
        return "/signals/Sustain";
        }
    case 54:
        {
        return "/signals/Decay";
        }
    case 55:
        {
        return "/signals/Attack";
        }
    case 56:
        {
        return "/signals/Ramp";
        }
    case 57:
        {
        return "/signals/P9X";
        }
    case 58:
        {
        return "/signals/P8X";
        }
    case 59:
        {
        return "/signals/P7X";
        }
    case 60:
        {
        return "/signals/P6X";
        }
    case 61:
        {
        return "/signals/P5X";
        }
    case 62:
        {
        return "/signals/P4X";
        }
    case 63:
        {
        return "/signals/P3X";
        }
    case 64:
        {
        return "/signals/P2X";
        }
    case 65:
        {
        return "/signals/P1X";
        }
    case 66:
        {
        return "/signals/P0X";
        }
    case 67:
        {
        return "/signals/P9Y";
        }
    case 68:
        {
        return "/signals/P8Y";
        }
    case 69:
        {
        return "/signals/P7Y";
        }
    case 70:
        {
        return "/signals/P6Y";
        }
    case 71:
        {
        return "/signals/P5Y";
        }
    case 72:
        {
        return "/signals/P4Y";
        }
    case 73:
        {
        return "/signals/P3Y";
        }
    case 74:
        {
        return "/signals/P2Y";
        }
    case 75:
        {
        return "/signals/P1Y";
        }
    case 76:
        {
        return "/signals/P0Y";
        }
    case 77:
        {
        return "/signals/B9R";
        }
    case 78:
        {
        return "/signals/B8R";
        }
    case 79:
        {
        return "/signals/B7R";
        }
    case 80:
        {
        return "/signals/B6R";
        }
    case 81:
        {
        return "/signals/B5R";
        }
    case 82:
        {
        return "/signals/B4R";
        }
    case 83:
        {
        return "/signals/B2R";
        }
    case 84:
        {
        return "/signals/B1R";
        }
    case 85:
        {
        return "/signals/B3R";
        }
    case 86:
        {
        return "/signals/B9T";
        }
    case 87:
        {
        return "/signals/B8T";
        }
    case 88:
        {
        return "/signals/B7T";
        }
    case 89:
        {
        return "/signals/B6T";
        }
    case 90:
        {
        return "/signals/B5T";
        }
    case 91:
        {
        return "/signals/B4T";
        }
    case 92:
        {
        return "/signals/B2T";
        }
    case 93:
        {
        return "/signals/B1T";
        }
    case 94:
        {
        return "/signals/B3T";
        }
    default:
        {
        index -= 95;

        if (index < this->p_10[0]->getNumParameters()) {
            {
                return this->p_10[0]->getParameterId(index);
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
            info->initialValue = 10;
            info->min = 2;
            info->max = 10;
            info->exponent = 1;
            info->steps = 9;
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
            info->min = 0;
            info->max = 1;
            info->exponent = 1;
            info->steps = 2;
            static const char * eVal3[] = {"Cardinal", "Bèzier"};
            info->enumValues = eVal3;
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
            info->min = -100;
            info->max = 100;
            info->exponent = 1;
            info->steps = 201;
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
        case 5:
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
        case 6:
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
        case 7:
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
        case 8:
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
        case 9:
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
        case 10:
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
        case 11:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 50;
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
        case 12:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = 0.5;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = 0.5;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = 0.5;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = 0.5;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = 0;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = -1;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = -0.5;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = 0;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = -1;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = 1;
            info->min = -1;
            info->max = 1;
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
            info->initialValue = 0.5;
            info->min = -1;
            info->max = 1;
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
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = -1;
            info->max = 1;
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
        case 25:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -1;
            info->min = -1;
            info->max = 1;
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
        case 26:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0.5;
            info->min = -1;
            info->max = 1;
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
        case 27:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = -1;
            info->max = 1;
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
        case 28:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = -1;
            info->max = 1;
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
        case 29:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -1;
            info->min = -1;
            info->max = 1;
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
        case 30:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = -1;
            info->max = 1;
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
        case 31:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = -1;
            info->max = 1;
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
        case 32:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
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
        case 33:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
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
        case 34:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
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
        case 35:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
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
        case 36:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
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
        case 37:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
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
        case 38:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
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
        case 39:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
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
        case 40:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
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
        case 41:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -45;
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
        case 42:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -180;
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
        case 43:
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
        case 44:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -180;
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
        case 45:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 45;
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
        case 46:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 135;
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
        case 47:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -45;
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
        case 48:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 45;
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
        case 49:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = -135;
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
        case 50:
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
        case 51:
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
        case 52:
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
        case 53:
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
        case 54:
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
        case 55:
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
        case 56:
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
        case 57:
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
        case 58:
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
        case 59:
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
        case 60:
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
        case 61:
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
        case 62:
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
        case 63:
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
        case 64:
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
        case 65:
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
        case 66:
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
        case 67:
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
        case 68:
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
        case 69:
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
        case 70:
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
        case 71:
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
        case 72:
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
            info->signalIndex = 22;
            break;
            }
        case 73:
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
            info->signalIndex = 23;
            break;
            }
        case 74:
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
            info->signalIndex = 24;
            break;
            }
        case 75:
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
            info->signalIndex = 25;
            break;
            }
        case 76:
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
            info->signalIndex = 26;
            break;
            }
        case 77:
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
            info->signalIndex = 27;
            break;
            }
        case 78:
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
            info->signalIndex = 28;
            break;
            }
        case 79:
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
            info->signalIndex = 29;
            break;
            }
        case 80:
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
            info->signalIndex = 30;
            break;
            }
        case 81:
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
            info->signalIndex = 31;
            break;
            }
        case 82:
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
            info->signalIndex = 32;
            break;
            }
        case 83:
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
            info->signalIndex = 33;
            break;
            }
        case 84:
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
            info->signalIndex = 34;
            break;
            }
        case 85:
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
            info->signalIndex = 35;
            break;
            }
        case 86:
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
            info->signalIndex = 36;
            break;
            }
        case 87:
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
            info->signalIndex = 37;
            break;
            }
        case 88:
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
            info->signalIndex = 38;
            break;
            }
        case 89:
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
            info->signalIndex = 39;
            break;
            }
        case 90:
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
            info->signalIndex = 40;
            break;
            }
        case 91:
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
            info->signalIndex = 41;
            break;
            }
        case 92:
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
            info->signalIndex = 42;
            break;
            }
        case 93:
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
            info->signalIndex = 43;
            break;
            }
        case 94:
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
            info->signalIndex = 44;
            break;
            }
        default:
            {
            index -= 95;

            if (index < this->p_10[0]->getNumParameters()) {
                for (Index i = 0; i < 32; i++) {
                    this->p_10[i]->getParameterInfo(index, info);
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
    if (subpatcher == this->p_10[0])
        return 95;

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
    case 3:
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
    case 11:
        {
        {
            value = (value < 0 ? 0 : (value > 100 ? 100 : value));
            ParameterValue normalizedValue = (value - 0) / (100 - 0);
            return normalizedValue;
        }
        }
    case 7:
    case 9:
    case 10:
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
    case 2:
        {
        {
            value = (value < 2 ? 2 : (value > 10 ? 10 : value));
            ParameterValue normalizedValue = (value - 2) / (10 - 2);

            {
                normalizedValue = this->applyStepsToNormalizedParameterValue(normalizedValue, 9);
            }

            return normalizedValue;
        }
        }
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
        {
        {
            value = (value < -1 ? -1 : (value > 1 ? 1 : value));
            ParameterValue normalizedValue = (value - -1) / (1 - -1);
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
    case 4:
        {
        {
            value = (value < -100 ? -100 : (value > 100 ? 100 : value));
            ParameterValue normalizedValue = (value - -100) / (100 - -100);

            {
                normalizedValue = this->applyStepsToNormalizedParameterValue(normalizedValue, 201);
            }

            return normalizedValue;
        }
        }
    case 5:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
        {
        {
            value = (value < -180 ? -180 : (value > 180 ? 180 : value));
            ParameterValue normalizedValue = (value - -180) / (180 - -180);
            return normalizedValue;
        }
        }
    case 8:
        {
        {
            value = (value < -70 ? -70 : (value > 0 ? 0 : value));
            ParameterValue normalizedValue = (value - -70) / (0 - -70);
            return normalizedValue;
        }
        }
    case 6:
        {
        {
            value = (value < -70 ? -70 : (value > 6 ? 6 : value));
            ParameterValue normalizedValue = (value - -70) / (6 - -70);
            return normalizedValue;
        }
        }
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
        {
        {
            value = (value < -2 ? -2 : (value > 2 ? 2 : value));
            ParameterValue normalizedValue = (value - -2) / (2 - -2);
            return normalizedValue;
        }
        }
    default:
        {
        index -= 95;

        if (index < this->p_10[0]->getNumParameters()) {
            {
                return this->p_10[0]->convertToNormalizedParameterValue(index, value);
            }
        }

        return value;
        }
    }
}

ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
    value = (value < 0 ? 0 : (value > 1 ? 1 : value));

    switch (index) {
    case 3:
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
    case 11:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (100 - 0);
            }
        }
        }
    case 7:
    case 9:
    case 10:
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
    case 2:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                value = this->applyStepsToNormalizedParameterValue(value, 9);
            }

            {
                return 2 + value * (10 - 2);
            }
        }
        }
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -1 + value * (1 - -1);
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
    case 4:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                value = this->applyStepsToNormalizedParameterValue(value, 201);
            }

            {
                return -100 + value * (100 - -100);
            }
        }
        }
    case 5:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -180 + value * (180 - -180);
            }
        }
        }
    case 8:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -70 + value * (0 - -70);
            }
        }
        }
    case 6:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -70 + value * (6 - -70);
            }
        }
        }
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return -2 + value * (2 - -2);
            }
        }
        }
    default:
        {
        index -= 95;

        if (index < this->p_10[0]->getNumParameters()) {
            {
                return this->p_10[0]->convertFromNormalizedParameterValue(index, value);
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
    default:
        {
        index -= 95;

        if (index < this->p_10[0]->getNumParameters()) {
            {
                return this->p_10[0]->constrainParameterValue(index, value);
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
        this->p_10[i]->processNumMessage(tag, objectId, time, payload);
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
        this->p_10[i]->processListMessage(tag, objectId, time, payload);
    }
}

void processBangMessage(MessageTag tag, MessageTag objectId, MillisecondTime time) {
    RNBO_UNUSED(objectId);
    this->updateTime(time);

    for (Index i = 0; i < 32; i++) {
        this->p_10[i]->processBangMessage(tag, objectId, time);
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

    auto subpatchResult_0 = this->p_10[0]->resolveTag(tag);

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

void param_03_value_set(number v) {
    v = this->param_03_value_constrain(v);
    this->param_03_value = v;
    this->sendParameter(2, false);

    if (this->param_03_value != this->param_03_lastValue) {
        this->getEngine()->presetTouched();
        this->param_03_lastValue = this->param_03_value;
    }

    this->ip_04_value_set(v);
}

void param_04_value_set(number v) {
    v = this->param_04_value_constrain(v);
    this->param_04_value = v;
    this->sendParameter(3, false);

    if (this->param_04_value != this->param_04_lastValue) {
        this->getEngine()->presetTouched();
        this->param_04_lastValue = this->param_04_value;
    }

    this->expr_04_in1_set(v);
}

void param_05_value_set(number v) {
    v = this->param_05_value_constrain(v);
    this->param_05_value = v;
    this->sendParameter(4, false);

    if (this->param_05_value != this->param_05_lastValue) {
        this->getEngine()->presetTouched();
        this->param_05_lastValue = this->param_05_value;
    }

    this->expr_06_in1_set(v);
}

void paramtilde_01_value_set(number v) {
    this->paramtilde_01_value_setter(v);
    v = this->paramtilde_01_value;
    this->sendParameter(5, false);
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
    this->sendParameter(6, false);
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
    this->sendParameter(7, false);
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
    this->sendParameter(8, false);
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
    this->sendParameter(9, false);
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
    this->sendParameter(10, false);
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
    this->sendParameter(11, false);
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
    this->sendParameter(12, false);
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
    this->sendParameter(13, false);
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
    this->sendParameter(14, false);
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
    this->sendParameter(15, false);
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
    this->sendParameter(16, false);
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
    this->sendParameter(17, false);
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
    this->sendParameter(18, false);
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
    this->sendParameter(19, false);
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
    this->sendParameter(20, false);
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
    this->sendParameter(21, false);
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
    this->sendParameter(22, false);
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
    this->sendParameter(23, false);
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
    this->sendParameter(24, false);
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
    this->sendParameter(25, false);
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
    this->sendParameter(26, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_22_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_22_lastIndex); i < k; i++) {
            this->paramtilde_22_sigbuf[(Index)i] = v;
            this->paramtilde_22_lastIndex = k;
        }
    }
}

void paramtilde_23_value_set(number v) {
    this->paramtilde_23_value_setter(v);
    v = this->paramtilde_23_value;
    this->sendParameter(27, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_23_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_23_lastIndex); i < k; i++) {
            this->paramtilde_23_sigbuf[(Index)i] = v;
            this->paramtilde_23_lastIndex = k;
        }
    }
}

void paramtilde_24_value_set(number v) {
    this->paramtilde_24_value_setter(v);
    v = this->paramtilde_24_value;
    this->sendParameter(28, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_24_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_24_lastIndex); i < k; i++) {
            this->paramtilde_24_sigbuf[(Index)i] = v;
            this->paramtilde_24_lastIndex = k;
        }
    }
}

void paramtilde_25_value_set(number v) {
    this->paramtilde_25_value_setter(v);
    v = this->paramtilde_25_value;
    this->sendParameter(29, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_25_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_25_lastIndex); i < k; i++) {
            this->paramtilde_25_sigbuf[(Index)i] = v;
            this->paramtilde_25_lastIndex = k;
        }
    }
}

void paramtilde_26_value_set(number v) {
    this->paramtilde_26_value_setter(v);
    v = this->paramtilde_26_value;
    this->sendParameter(30, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_26_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_26_lastIndex); i < k; i++) {
            this->paramtilde_26_sigbuf[(Index)i] = v;
            this->paramtilde_26_lastIndex = k;
        }
    }
}

void paramtilde_27_value_set(number v) {
    this->paramtilde_27_value_setter(v);
    v = this->paramtilde_27_value;
    this->sendParameter(31, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_27_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_27_lastIndex); i < k; i++) {
            this->paramtilde_27_sigbuf[(Index)i] = v;
            this->paramtilde_27_lastIndex = k;
        }
    }
}

void paramtilde_28_value_set(number v) {
    this->paramtilde_28_value_setter(v);
    v = this->paramtilde_28_value;
    this->sendParameter(32, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_28_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_28_lastIndex); i < k; i++) {
            this->paramtilde_28_sigbuf[(Index)i] = v;
            this->paramtilde_28_lastIndex = k;
        }
    }
}

void paramtilde_29_value_set(number v) {
    this->paramtilde_29_value_setter(v);
    v = this->paramtilde_29_value;
    this->sendParameter(33, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_29_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_29_lastIndex); i < k; i++) {
            this->paramtilde_29_sigbuf[(Index)i] = v;
            this->paramtilde_29_lastIndex = k;
        }
    }
}

void paramtilde_30_value_set(number v) {
    this->paramtilde_30_value_setter(v);
    v = this->paramtilde_30_value;
    this->sendParameter(34, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_30_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_30_lastIndex); i < k; i++) {
            this->paramtilde_30_sigbuf[(Index)i] = v;
            this->paramtilde_30_lastIndex = k;
        }
    }
}

void paramtilde_31_value_set(number v) {
    this->paramtilde_31_value_setter(v);
    v = this->paramtilde_31_value;
    this->sendParameter(35, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_31_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_31_lastIndex); i < k; i++) {
            this->paramtilde_31_sigbuf[(Index)i] = v;
            this->paramtilde_31_lastIndex = k;
        }
    }
}

void paramtilde_32_value_set(number v) {
    this->paramtilde_32_value_setter(v);
    v = this->paramtilde_32_value;
    this->sendParameter(36, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_32_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_32_lastIndex); i < k; i++) {
            this->paramtilde_32_sigbuf[(Index)i] = v;
            this->paramtilde_32_lastIndex = k;
        }
    }
}

void paramtilde_33_value_set(number v) {
    this->paramtilde_33_value_setter(v);
    v = this->paramtilde_33_value;
    this->sendParameter(37, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_33_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_33_lastIndex); i < k; i++) {
            this->paramtilde_33_sigbuf[(Index)i] = v;
            this->paramtilde_33_lastIndex = k;
        }
    }
}

void paramtilde_34_value_set(number v) {
    this->paramtilde_34_value_setter(v);
    v = this->paramtilde_34_value;
    this->sendParameter(38, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_34_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_34_lastIndex); i < k; i++) {
            this->paramtilde_34_sigbuf[(Index)i] = v;
            this->paramtilde_34_lastIndex = k;
        }
    }
}

void paramtilde_35_value_set(number v) {
    this->paramtilde_35_value_setter(v);
    v = this->paramtilde_35_value;
    this->sendParameter(39, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_35_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_35_lastIndex); i < k; i++) {
            this->paramtilde_35_sigbuf[(Index)i] = v;
            this->paramtilde_35_lastIndex = k;
        }
    }
}

void paramtilde_36_value_set(number v) {
    this->paramtilde_36_value_setter(v);
    v = this->paramtilde_36_value;
    this->sendParameter(40, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_36_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_36_lastIndex); i < k; i++) {
            this->paramtilde_36_sigbuf[(Index)i] = v;
            this->paramtilde_36_lastIndex = k;
        }
    }
}

void paramtilde_37_value_set(number v) {
    this->paramtilde_37_value_setter(v);
    v = this->paramtilde_37_value;
    this->sendParameter(41, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_37_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_37_lastIndex); i < k; i++) {
            this->paramtilde_37_sigbuf[(Index)i] = v;
            this->paramtilde_37_lastIndex = k;
        }
    }
}

void paramtilde_38_value_set(number v) {
    this->paramtilde_38_value_setter(v);
    v = this->paramtilde_38_value;
    this->sendParameter(42, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_38_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_38_lastIndex); i < k; i++) {
            this->paramtilde_38_sigbuf[(Index)i] = v;
            this->paramtilde_38_lastIndex = k;
        }
    }
}

void paramtilde_39_value_set(number v) {
    this->paramtilde_39_value_setter(v);
    v = this->paramtilde_39_value;
    this->sendParameter(43, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_39_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_39_lastIndex); i < k; i++) {
            this->paramtilde_39_sigbuf[(Index)i] = v;
            this->paramtilde_39_lastIndex = k;
        }
    }
}

void paramtilde_40_value_set(number v) {
    this->paramtilde_40_value_setter(v);
    v = this->paramtilde_40_value;
    this->sendParameter(44, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_40_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_40_lastIndex); i < k; i++) {
            this->paramtilde_40_sigbuf[(Index)i] = v;
            this->paramtilde_40_lastIndex = k;
        }
    }
}

void paramtilde_41_value_set(number v) {
    this->paramtilde_41_value_setter(v);
    v = this->paramtilde_41_value;
    this->sendParameter(45, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_41_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_41_lastIndex); i < k; i++) {
            this->paramtilde_41_sigbuf[(Index)i] = v;
            this->paramtilde_41_lastIndex = k;
        }
    }
}

void paramtilde_42_value_set(number v) {
    this->paramtilde_42_value_setter(v);
    v = this->paramtilde_42_value;
    this->sendParameter(46, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_42_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_42_lastIndex); i < k; i++) {
            this->paramtilde_42_sigbuf[(Index)i] = v;
            this->paramtilde_42_lastIndex = k;
        }
    }
}

void paramtilde_43_value_set(number v) {
    this->paramtilde_43_value_setter(v);
    v = this->paramtilde_43_value;
    this->sendParameter(47, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_43_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_43_lastIndex); i < k; i++) {
            this->paramtilde_43_sigbuf[(Index)i] = v;
            this->paramtilde_43_lastIndex = k;
        }
    }
}

void paramtilde_44_value_set(number v) {
    this->paramtilde_44_value_setter(v);
    v = this->paramtilde_44_value;
    this->sendParameter(48, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_44_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_44_lastIndex); i < k; i++) {
            this->paramtilde_44_sigbuf[(Index)i] = v;
            this->paramtilde_44_lastIndex = k;
        }
    }
}

void paramtilde_45_value_set(number v) {
    this->paramtilde_45_value_setter(v);
    v = this->paramtilde_45_value;
    this->sendParameter(49, false);
    SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

    if ((bool)(this->paramtilde_45_sigbuf)) {
        for (SampleIndex i = (SampleIndex)(this->paramtilde_45_lastIndex); i < k; i++) {
            this->paramtilde_45_sigbuf[(Index)i] = v;
            this->paramtilde_45_lastIndex = k;
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
        this->p_10[i]->allocateDataRefs();
    }

    if (this->RNBODefaultMtofLookupTable256->hasRequestedSize()) {
        if (this->RNBODefaultMtofLookupTable256->wantsFill())
            this->fillRNBODefaultMtofLookupTable256(this->RNBODefaultMtofLookupTable256);

        this->getEngine()->sendDataRefUpdated(0);
    }
}

void initializeObjects() {
    this->ip_04_init();
    this->ip_05_init();
    this->midinotecontroller_01_init();

    for (Index i = 0; i < 32; i++) {
        this->p_10[i]->initializeObjects();
    }
}

void sendOutlet(OutletIndex index, ParameterValue value) {
    this->getEngine()->sendOutlet(this, index, value);
}

void startup() {
    this->updateTime(this->getEngine()->getCurrentTime());

    for (Index i = 0; i < 32; i++) {
        this->p_10[i]->startup();
    }

    {
        this->scheduleParamInit(0, 0);
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

void p_10_out3_list_set(const list& v) {
    this->outport_01_input_list_set(v);
}

void p_10_target_PBR_number_set(number v) {
    for (Index i = 0; i < 32; i++) {
        if (i + 1 == this->p_10_target || 0 == this->p_10_target) {
            this->p_10[i]->updateTime(this->_currentTime);
        }
    }

    for (Index i = 0; i < 32; i++) {
        this->p_10[i]->receive_01_output_number_set(v);
    }
}

void send_01_input_number_set(number v) {
    this->send_01_input_number = v;
    this->p_10_target_PBR_number_set(v);
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

void p_10_target_set(number v) {
    this->p_10_target = v;
    this->midinotecontroller_01_currenttarget_set(v);
}

void midinotecontroller_01_target_set(number v) {
    this->p_10_target_set(v);
}

void p_10_midiininternal_set(number v) {
    Index sendlen = 0;
    this->p_10_currentStatus = parseMidi(this->p_10_currentStatus, (int)(v), this->p_10_mididata[0]);

    switch ((int)this->p_10_currentStatus) {
    case MIDI_StatusByteReceived:
        {
        this->p_10_mididata[0] = (uint8_t)(v);
        this->p_10_mididata[1] = 0;
        break;
        }
    case MIDI_SecondByteReceived:
    case MIDI_ProgramChange:
    case MIDI_ChannelPressure:
        {
        this->p_10_mididata[1] = (uint8_t)(v);

        if (this->p_10_currentStatus == MIDI_ProgramChange || this->p_10_currentStatus == MIDI_ChannelPressure) {
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
        this->p_10_mididata[2] = (uint8_t)(v);
        sendlen = 3;
        break;
        }
    }

    if (sendlen > 0) {
        number i;

        if (this->p_10_target > 0 && this->p_10_target <= 32) {
            i = this->p_10_target - 1;
            this->p_10[(Index)i]->processMidiEvent(_currentTime, 0, this->p_10_mididata, sendlen);
        } else if (this->p_10_target == 0) {
            for (i = 0; i < 32; i++) {
                this->p_10[(Index)i]->processMidiEvent(_currentTime, 0, this->p_10_mididata, sendlen);
            }
        }
    }
}

void midinotecontroller_01_midiout_set(number v) {
    this->p_10_midiininternal_set(v);
}

void p_10_noteNumber_set(number v) {
    if (this->p_10_target > 0) {
        this->p_10[(Index)(this->p_10_target - 1)]->setNoteNumber((int)(v));
    }
}

void midinotecontroller_01_noteNumber_set(number v) {
    this->p_10_noteNumber_set(v);
}

void midinotecontroller_01_voicestatus_set(const list& v) {
    if (v[1] == 1) {
        number currentTarget = this->midinotecontroller_01_currenttarget;
        this->midinotecontroller_01_target_set(v[0]);
        this->midinotecontroller_01_noteNumber_set(0);
        this->midinotecontroller_01_target_set(currentTarget);
    }
}

void p_10_voicestatus_set(const list& v) {
    for (Index i = 0; i < 32; i++) {
        if (i + 1 == this->p_10_target || 0 == this->p_10_target) {
            this->p_10[i]->updateTime(this->_currentTime);
        }
    }

    for (Index i = 0; i < 32; i++) {
        if (i + 1 == this->p_10_target || 0 == this->p_10_target) {
            this->p_10[i]->voice_01_mutein_list_set(v);
        }
    }

    this->midinotecontroller_01_voicestatus_set(v);
}

void p_10_activevoices_set(number v) {
    for (Index i = 0; i < 32; i++) {
        if (i + 1 == this->p_10_target || 0 == this->p_10_target) {
            this->p_10[i]->updateTime(this->_currentTime);
        }
    }

    for (Index i = 0; i < 32; i++) {
        this->p_10[i]->voice_01_activevoices_set(v);
    }
}

void p_10_mute_set(const list& v) {
    Index voiceNumber = (Index)(v[0]);
    Index muteState = (Index)(v[1]);

    if (voiceNumber == 0) {
        for (Index i = 0; i < 32; i++) {
            this->p_10[(Index)i]->setIsMuted(muteState);
        }
    } else {
        Index subpatcherIndex = voiceNumber - 1;

        if (subpatcherIndex >= 0 && subpatcherIndex < 32) {
            this->p_10[(Index)subpatcherIndex]->setIsMuted(muteState);
        }
    }

    list tmp = {v[0], v[1]};
    this->p_10_voicestatus_set(tmp);
    this->p_10_activevoices_set(this->p_10_calcActiveVoices());
}

void midinotecontroller_01_mute_set(const list& v) {
    this->p_10_mute_set(v);
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

void p_10_midiin_set(number v) {
    this->p_10_midiin = v;
    this->midinotecontroller_01_midiin_set(v);
}

void midiformat_02_midimessage_set(number v) {
    this->p_10_midiin_set(v);
}

void midiformat_02_pitchbend_set(number v) {
    this->midiformat_02_pitchbend = v;
    this->midiformat_02_send3byte(this->midiformat_02_innerFormat_pitchbend(v, this->midiformat_02_channel));
}

static number param_03_value_constrain(number v) {
    v = (v > 10 ? 10 : (v < 2 ? 2 : v));

    {
        number oneStep = (number)8 / (number)8;
        number oneStepInv = (oneStep != 0 ? (number)1 / oneStep : 0);
        number numberOfSteps = rnbo_fround(v * oneStepInv * 1 / (number)1) * 1;
        v = numberOfSteps * oneStep;
    }

    return v;
}

void ip_04_value_set(number v) {
    this->ip_04_value = v;
    this->ip_04_fillSigBuf();
    this->ip_04_lastValue = v;
}

static number param_04_value_constrain(number v) {
    v = (v > 1 ? 1 : (v < 0 ? 0 : v));

    {
        number oneStep = (number)1 / (number)1;
        number oneStepInv = (oneStep != 0 ? (number)1 / oneStep : 0);
        number numberOfSteps = rnbo_fround(v * oneStepInv * 1 / (number)1) * 1;
        v = numberOfSteps * oneStep;
    }

    return v;
}

void p_10_target_t_number_set(number v) {
    for (Index i = 0; i < 32; i++) {
        if (i + 1 == this->p_10_target || 0 == this->p_10_target) {
            this->p_10[i]->updateTime(this->_currentTime);
        }
    }

    for (Index i = 0; i < 32; i++) {
        this->p_10[i]->receive_02_output_number_set(v);
    }
}

void send_02_input_number_set(number v) {
    this->send_02_input_number = v;
    this->p_10_target_t_number_set(v);
}

void expr_04_out1_set(number v) {
    this->expr_04_out1 = v;
    this->send_02_input_number_set(this->expr_04_out1);
}

void expr_04_in1_set(number in1) {
    this->expr_04_in1 = in1;
    this->expr_04_out1_set(this->expr_04_in1 + this->expr_04_in2);//#map:+_obj-3:1
}

static number param_05_value_constrain(number v) {
    v = (v > 100 ? 100 : (v < -100 ? -100 : v));

    {
        number oneStep = (number)200 / (number)200;
        number oneStepInv = (oneStep != 0 ? (number)1 / oneStep : 0);
        number numberOfSteps = rnbo_fround(v * oneStepInv * 1 / (number)1) * 1;
        v = numberOfSteps * oneStep;
    }

    return v;
}

void ip_05_value_set(number v) {
    this->ip_05_value = v;
    this->ip_05_fillSigBuf();
    this->ip_05_lastValue = v;
}

void dspexpr_47_in2_set(number v) {
    this->dspexpr_47_in2 = v;
}

void dspexpr_48_in2_set(number v) {
    this->dspexpr_48_in2 = v;
}

void dspexpr_49_in2_set(number v) {
    this->dspexpr_49_in2 = v;
}

void dspexpr_50_in2_set(number v) {
    this->dspexpr_50_in2 = v;
}

void dspexpr_51_in2_set(number v) {
    this->dspexpr_51_in2 = v;
}

void dspexpr_52_in2_set(number v) {
    this->dspexpr_52_in2 = v;
}

void dspexpr_53_in2_set(number v) {
    this->dspexpr_53_in2 = v;
}

void dspexpr_54_in2_set(number v) {
    this->dspexpr_54_in2 = v;
}

void dspexpr_55_in2_set(number v) {
    this->dspexpr_55_in2 = v;
}

void expr_05_out1_set(number v) {
    this->expr_05_out1 = v;
    this->dspexpr_47_in2_set(this->expr_05_out1);
    this->dspexpr_48_in2_set(this->expr_05_out1);
    this->dspexpr_49_in2_set(this->expr_05_out1);
    this->dspexpr_50_in2_set(this->expr_05_out1);
    this->dspexpr_51_in2_set(this->expr_05_out1);
    this->dspexpr_52_in2_set(this->expr_05_out1);
    this->dspexpr_53_in2_set(this->expr_05_out1);
    this->dspexpr_54_in2_set(this->expr_05_out1);
    this->dspexpr_55_in2_set(this->expr_05_out1);
}

void expr_05_in1_set(number in1) {
    this->expr_05_in1 = in1;
    this->expr_05_out1_set(this->expr_05_in1 * this->expr_05_in2);//#map:*_obj-63:1
}

void expr_06_out1_set(number v) {
    this->expr_06_out1 = v;
    this->ip_05_value_set(this->expr_06_out1);
    this->expr_05_in1_set(this->expr_06_out1);
}

void expr_06_in1_set(number in1) {
    this->expr_06_in1 = in1;
    this->expr_06_out1_set(this->expr_06_in1 / (number)100 * -2);//#map:expr_obj-153:1
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

void p_10_midiout_set(number v) {
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

void dspexpr_40_perform(const Sample * in1, SampleValue * out1, Index n) {
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

void dspexpr_41_perform(const Sample * in1, SampleValue * out1, Index n) {
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

void dspexpr_42_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = rnbo_pow(10, in1[(Index)i] * 0.05);//#map:_###_obj_###_:1
    }
}

void dspexpr_45_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
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

void dspexpr_43_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
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

void paramtilde_08_perform(const SampleValue * P9X, SampleValue * out, Index n) {
    auto __paramtilde_08_sigbuf = this->paramtilde_08_sigbuf;
    auto __paramtilde_08_value = this->paramtilde_08_value;
    auto __paramtilde_08_lastIndex = this->paramtilde_08_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_08_lastIndex) {
            out[(Index)i] = P9X[(Index)i] + __paramtilde_08_value;
        } else {
            out[(Index)i] = P9X[(Index)i] + __paramtilde_08_sigbuf[(Index)i];
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

void paramtilde_09_perform(const SampleValue * P8X, SampleValue * out, Index n) {
    auto __paramtilde_09_sigbuf = this->paramtilde_09_sigbuf;
    auto __paramtilde_09_value = this->paramtilde_09_value;
    auto __paramtilde_09_lastIndex = this->paramtilde_09_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_09_lastIndex) {
            out[(Index)i] = P8X[(Index)i] + __paramtilde_09_value;
        } else {
            out[(Index)i] = P8X[(Index)i] + __paramtilde_09_sigbuf[(Index)i];
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

void paramtilde_10_perform(const SampleValue * P7X, SampleValue * out, Index n) {
    auto __paramtilde_10_sigbuf = this->paramtilde_10_sigbuf;
    auto __paramtilde_10_value = this->paramtilde_10_value;
    auto __paramtilde_10_lastIndex = this->paramtilde_10_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_10_lastIndex) {
            out[(Index)i] = P7X[(Index)i] + __paramtilde_10_value;
        } else {
            out[(Index)i] = P7X[(Index)i] + __paramtilde_10_sigbuf[(Index)i];
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

void paramtilde_11_perform(const SampleValue * P6X, SampleValue * out, Index n) {
    auto __paramtilde_11_sigbuf = this->paramtilde_11_sigbuf;
    auto __paramtilde_11_value = this->paramtilde_11_value;
    auto __paramtilde_11_lastIndex = this->paramtilde_11_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_11_lastIndex) {
            out[(Index)i] = P6X[(Index)i] + __paramtilde_11_value;
        } else {
            out[(Index)i] = P6X[(Index)i] + __paramtilde_11_sigbuf[(Index)i];
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

void paramtilde_12_perform(const SampleValue * P5X, SampleValue * out, Index n) {
    auto __paramtilde_12_sigbuf = this->paramtilde_12_sigbuf;
    auto __paramtilde_12_value = this->paramtilde_12_value;
    auto __paramtilde_12_lastIndex = this->paramtilde_12_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_12_lastIndex) {
            out[(Index)i] = P5X[(Index)i] + __paramtilde_12_value;
        } else {
            out[(Index)i] = P5X[(Index)i] + __paramtilde_12_sigbuf[(Index)i];
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

void paramtilde_13_perform(const SampleValue * P4X, SampleValue * out, Index n) {
    auto __paramtilde_13_sigbuf = this->paramtilde_13_sigbuf;
    auto __paramtilde_13_value = this->paramtilde_13_value;
    auto __paramtilde_13_lastIndex = this->paramtilde_13_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_13_lastIndex) {
            out[(Index)i] = P4X[(Index)i] + __paramtilde_13_value;
        } else {
            out[(Index)i] = P4X[(Index)i] + __paramtilde_13_sigbuf[(Index)i];
        }
    }

    __paramtilde_13_lastIndex = 0;
    this->paramtilde_13_lastIndex = __paramtilde_13_lastIndex;
}

void signalsend_12_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_14_perform(const SampleValue * P3X, SampleValue * out, Index n) {
    auto __paramtilde_14_sigbuf = this->paramtilde_14_sigbuf;
    auto __paramtilde_14_value = this->paramtilde_14_value;
    auto __paramtilde_14_lastIndex = this->paramtilde_14_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_14_lastIndex) {
            out[(Index)i] = P3X[(Index)i] + __paramtilde_14_value;
        } else {
            out[(Index)i] = P3X[(Index)i] + __paramtilde_14_sigbuf[(Index)i];
        }
    }

    __paramtilde_14_lastIndex = 0;
    this->paramtilde_14_lastIndex = __paramtilde_14_lastIndex;
}

void signalsend_13_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_15_perform(const SampleValue * P2X, SampleValue * out, Index n) {
    auto __paramtilde_15_sigbuf = this->paramtilde_15_sigbuf;
    auto __paramtilde_15_value = this->paramtilde_15_value;
    auto __paramtilde_15_lastIndex = this->paramtilde_15_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_15_lastIndex) {
            out[(Index)i] = P2X[(Index)i] + __paramtilde_15_value;
        } else {
            out[(Index)i] = P2X[(Index)i] + __paramtilde_15_sigbuf[(Index)i];
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

void paramtilde_16_perform(const SampleValue * P1X, SampleValue * out, Index n) {
    auto __paramtilde_16_sigbuf = this->paramtilde_16_sigbuf;
    auto __paramtilde_16_value = this->paramtilde_16_value;
    auto __paramtilde_16_lastIndex = this->paramtilde_16_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_16_lastIndex) {
            out[(Index)i] = P1X[(Index)i] + __paramtilde_16_value;
        } else {
            out[(Index)i] = P1X[(Index)i] + __paramtilde_16_sigbuf[(Index)i];
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

void paramtilde_17_perform(const SampleValue * P0X, SampleValue * out, Index n) {
    auto __paramtilde_17_sigbuf = this->paramtilde_17_sigbuf;
    auto __paramtilde_17_value = this->paramtilde_17_value;
    auto __paramtilde_17_lastIndex = this->paramtilde_17_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_17_lastIndex) {
            out[(Index)i] = P0X[(Index)i] + __paramtilde_17_value;
        } else {
            out[(Index)i] = P0X[(Index)i] + __paramtilde_17_sigbuf[(Index)i];
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

void signalsend_17_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_18_perform(const SampleValue * P9Y, SampleValue * out, Index n) {
    auto __paramtilde_18_sigbuf = this->paramtilde_18_sigbuf;
    auto __paramtilde_18_value = this->paramtilde_18_value;
    auto __paramtilde_18_lastIndex = this->paramtilde_18_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_18_lastIndex) {
            out[(Index)i] = P9Y[(Index)i] + __paramtilde_18_value;
        } else {
            out[(Index)i] = P9Y[(Index)i] + __paramtilde_18_sigbuf[(Index)i];
        }
    }

    __paramtilde_18_lastIndex = 0;
    this->paramtilde_18_lastIndex = __paramtilde_18_lastIndex;
}

void signalsend_18_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_19_perform(const SampleValue * P8Y, SampleValue * out, Index n) {
    auto __paramtilde_19_sigbuf = this->paramtilde_19_sigbuf;
    auto __paramtilde_19_value = this->paramtilde_19_value;
    auto __paramtilde_19_lastIndex = this->paramtilde_19_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_19_lastIndex) {
            out[(Index)i] = P8Y[(Index)i] + __paramtilde_19_value;
        } else {
            out[(Index)i] = P8Y[(Index)i] + __paramtilde_19_sigbuf[(Index)i];
        }
    }

    __paramtilde_19_lastIndex = 0;
    this->paramtilde_19_lastIndex = __paramtilde_19_lastIndex;
}

void signalsend_19_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_20_perform(const SampleValue * P7Y, SampleValue * out, Index n) {
    auto __paramtilde_20_sigbuf = this->paramtilde_20_sigbuf;
    auto __paramtilde_20_value = this->paramtilde_20_value;
    auto __paramtilde_20_lastIndex = this->paramtilde_20_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_20_lastIndex) {
            out[(Index)i] = P7Y[(Index)i] + __paramtilde_20_value;
        } else {
            out[(Index)i] = P7Y[(Index)i] + __paramtilde_20_sigbuf[(Index)i];
        }
    }

    __paramtilde_20_lastIndex = 0;
    this->paramtilde_20_lastIndex = __paramtilde_20_lastIndex;
}

void signalsend_20_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_21_perform(const SampleValue * P6Y, SampleValue * out, Index n) {
    auto __paramtilde_21_sigbuf = this->paramtilde_21_sigbuf;
    auto __paramtilde_21_value = this->paramtilde_21_value;
    auto __paramtilde_21_lastIndex = this->paramtilde_21_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_21_lastIndex) {
            out[(Index)i] = P6Y[(Index)i] + __paramtilde_21_value;
        } else {
            out[(Index)i] = P6Y[(Index)i] + __paramtilde_21_sigbuf[(Index)i];
        }
    }

    __paramtilde_21_lastIndex = 0;
    this->paramtilde_21_lastIndex = __paramtilde_21_lastIndex;
}

void signalsend_21_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_22_perform(const SampleValue * P5Y, SampleValue * out, Index n) {
    auto __paramtilde_22_sigbuf = this->paramtilde_22_sigbuf;
    auto __paramtilde_22_value = this->paramtilde_22_value;
    auto __paramtilde_22_lastIndex = this->paramtilde_22_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_22_lastIndex) {
            out[(Index)i] = P5Y[(Index)i] + __paramtilde_22_value;
        } else {
            out[(Index)i] = P5Y[(Index)i] + __paramtilde_22_sigbuf[(Index)i];
        }
    }

    __paramtilde_22_lastIndex = 0;
    this->paramtilde_22_lastIndex = __paramtilde_22_lastIndex;
}

void signalsend_22_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_23_perform(const SampleValue * P4Y, SampleValue * out, Index n) {
    auto __paramtilde_23_sigbuf = this->paramtilde_23_sigbuf;
    auto __paramtilde_23_value = this->paramtilde_23_value;
    auto __paramtilde_23_lastIndex = this->paramtilde_23_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_23_lastIndex) {
            out[(Index)i] = P4Y[(Index)i] + __paramtilde_23_value;
        } else {
            out[(Index)i] = P4Y[(Index)i] + __paramtilde_23_sigbuf[(Index)i];
        }
    }

    __paramtilde_23_lastIndex = 0;
    this->paramtilde_23_lastIndex = __paramtilde_23_lastIndex;
}

void signalsend_23_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_24_perform(const SampleValue * P3Y, SampleValue * out, Index n) {
    auto __paramtilde_24_sigbuf = this->paramtilde_24_sigbuf;
    auto __paramtilde_24_value = this->paramtilde_24_value;
    auto __paramtilde_24_lastIndex = this->paramtilde_24_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_24_lastIndex) {
            out[(Index)i] = P3Y[(Index)i] + __paramtilde_24_value;
        } else {
            out[(Index)i] = P3Y[(Index)i] + __paramtilde_24_sigbuf[(Index)i];
        }
    }

    __paramtilde_24_lastIndex = 0;
    this->paramtilde_24_lastIndex = __paramtilde_24_lastIndex;
}

void signalsend_24_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_25_perform(const SampleValue * P2Y, SampleValue * out, Index n) {
    auto __paramtilde_25_sigbuf = this->paramtilde_25_sigbuf;
    auto __paramtilde_25_value = this->paramtilde_25_value;
    auto __paramtilde_25_lastIndex = this->paramtilde_25_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_25_lastIndex) {
            out[(Index)i] = P2Y[(Index)i] + __paramtilde_25_value;
        } else {
            out[(Index)i] = P2Y[(Index)i] + __paramtilde_25_sigbuf[(Index)i];
        }
    }

    __paramtilde_25_lastIndex = 0;
    this->paramtilde_25_lastIndex = __paramtilde_25_lastIndex;
}

void signalsend_25_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_26_perform(const SampleValue * P1Y, SampleValue * out, Index n) {
    auto __paramtilde_26_sigbuf = this->paramtilde_26_sigbuf;
    auto __paramtilde_26_value = this->paramtilde_26_value;
    auto __paramtilde_26_lastIndex = this->paramtilde_26_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_26_lastIndex) {
            out[(Index)i] = P1Y[(Index)i] + __paramtilde_26_value;
        } else {
            out[(Index)i] = P1Y[(Index)i] + __paramtilde_26_sigbuf[(Index)i];
        }
    }

    __paramtilde_26_lastIndex = 0;
    this->paramtilde_26_lastIndex = __paramtilde_26_lastIndex;
}

void signalsend_26_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_27_perform(const SampleValue * P0Y, SampleValue * out, Index n) {
    auto __paramtilde_27_sigbuf = this->paramtilde_27_sigbuf;
    auto __paramtilde_27_value = this->paramtilde_27_value;
    auto __paramtilde_27_lastIndex = this->paramtilde_27_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_27_lastIndex) {
            out[(Index)i] = P0Y[(Index)i] + __paramtilde_27_value;
        } else {
            out[(Index)i] = P0Y[(Index)i] + __paramtilde_27_sigbuf[(Index)i];
        }
    }

    __paramtilde_27_lastIndex = 0;
    this->paramtilde_27_lastIndex = __paramtilde_27_lastIndex;
}

void signalsend_27_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_28_perform(const SampleValue * B9R, SampleValue * out, Index n) {
    auto __paramtilde_28_sigbuf = this->paramtilde_28_sigbuf;
    auto __paramtilde_28_value = this->paramtilde_28_value;
    auto __paramtilde_28_lastIndex = this->paramtilde_28_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_28_lastIndex) {
            out[(Index)i] = B9R[(Index)i] + __paramtilde_28_value;
        } else {
            out[(Index)i] = B9R[(Index)i] + __paramtilde_28_sigbuf[(Index)i];
        }
    }

    __paramtilde_28_lastIndex = 0;
    this->paramtilde_28_lastIndex = __paramtilde_28_lastIndex;
}

void dspexpr_47_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2;//#map:_###_obj_###_:1
    }
}

void signalsend_28_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_29_perform(const SampleValue * B8R, SampleValue * out, Index n) {
    auto __paramtilde_29_sigbuf = this->paramtilde_29_sigbuf;
    auto __paramtilde_29_value = this->paramtilde_29_value;
    auto __paramtilde_29_lastIndex = this->paramtilde_29_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_29_lastIndex) {
            out[(Index)i] = B8R[(Index)i] + __paramtilde_29_value;
        } else {
            out[(Index)i] = B8R[(Index)i] + __paramtilde_29_sigbuf[(Index)i];
        }
    }

    __paramtilde_29_lastIndex = 0;
    this->paramtilde_29_lastIndex = __paramtilde_29_lastIndex;
}

void dspexpr_48_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2;//#map:_###_obj_###_:1
    }
}

void signalsend_29_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_30_perform(const SampleValue * B7R, SampleValue * out, Index n) {
    auto __paramtilde_30_sigbuf = this->paramtilde_30_sigbuf;
    auto __paramtilde_30_value = this->paramtilde_30_value;
    auto __paramtilde_30_lastIndex = this->paramtilde_30_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_30_lastIndex) {
            out[(Index)i] = B7R[(Index)i] + __paramtilde_30_value;
        } else {
            out[(Index)i] = B7R[(Index)i] + __paramtilde_30_sigbuf[(Index)i];
        }
    }

    __paramtilde_30_lastIndex = 0;
    this->paramtilde_30_lastIndex = __paramtilde_30_lastIndex;
}

void dspexpr_49_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2;//#map:_###_obj_###_:1
    }
}

void signalsend_30_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_31_perform(const SampleValue * B6R, SampleValue * out, Index n) {
    auto __paramtilde_31_sigbuf = this->paramtilde_31_sigbuf;
    auto __paramtilde_31_value = this->paramtilde_31_value;
    auto __paramtilde_31_lastIndex = this->paramtilde_31_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_31_lastIndex) {
            out[(Index)i] = B6R[(Index)i] + __paramtilde_31_value;
        } else {
            out[(Index)i] = B6R[(Index)i] + __paramtilde_31_sigbuf[(Index)i];
        }
    }

    __paramtilde_31_lastIndex = 0;
    this->paramtilde_31_lastIndex = __paramtilde_31_lastIndex;
}

void dspexpr_50_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2;//#map:_###_obj_###_:1
    }
}

void signalsend_31_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_32_perform(const SampleValue * B5R, SampleValue * out, Index n) {
    auto __paramtilde_32_sigbuf = this->paramtilde_32_sigbuf;
    auto __paramtilde_32_value = this->paramtilde_32_value;
    auto __paramtilde_32_lastIndex = this->paramtilde_32_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_32_lastIndex) {
            out[(Index)i] = B5R[(Index)i] + __paramtilde_32_value;
        } else {
            out[(Index)i] = B5R[(Index)i] + __paramtilde_32_sigbuf[(Index)i];
        }
    }

    __paramtilde_32_lastIndex = 0;
    this->paramtilde_32_lastIndex = __paramtilde_32_lastIndex;
}

void dspexpr_51_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2;//#map:_###_obj_###_:1
    }
}

void signalsend_32_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_33_perform(const SampleValue * B4R, SampleValue * out, Index n) {
    auto __paramtilde_33_sigbuf = this->paramtilde_33_sigbuf;
    auto __paramtilde_33_value = this->paramtilde_33_value;
    auto __paramtilde_33_lastIndex = this->paramtilde_33_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_33_lastIndex) {
            out[(Index)i] = B4R[(Index)i] + __paramtilde_33_value;
        } else {
            out[(Index)i] = B4R[(Index)i] + __paramtilde_33_sigbuf[(Index)i];
        }
    }

    __paramtilde_33_lastIndex = 0;
    this->paramtilde_33_lastIndex = __paramtilde_33_lastIndex;
}

void dspexpr_52_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2;//#map:_###_obj_###_:1
    }
}

void signalsend_33_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_34_perform(const SampleValue * B2R, SampleValue * out, Index n) {
    auto __paramtilde_34_sigbuf = this->paramtilde_34_sigbuf;
    auto __paramtilde_34_value = this->paramtilde_34_value;
    auto __paramtilde_34_lastIndex = this->paramtilde_34_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_34_lastIndex) {
            out[(Index)i] = B2R[(Index)i] + __paramtilde_34_value;
        } else {
            out[(Index)i] = B2R[(Index)i] + __paramtilde_34_sigbuf[(Index)i];
        }
    }

    __paramtilde_34_lastIndex = 0;
    this->paramtilde_34_lastIndex = __paramtilde_34_lastIndex;
}

void dspexpr_54_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2;//#map:_###_obj_###_:1
    }
}

void signalsend_34_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_35_perform(const SampleValue * B1R, SampleValue * out, Index n) {
    auto __paramtilde_35_sigbuf = this->paramtilde_35_sigbuf;
    auto __paramtilde_35_value = this->paramtilde_35_value;
    auto __paramtilde_35_lastIndex = this->paramtilde_35_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_35_lastIndex) {
            out[(Index)i] = B1R[(Index)i] + __paramtilde_35_value;
        } else {
            out[(Index)i] = B1R[(Index)i] + __paramtilde_35_sigbuf[(Index)i];
        }
    }

    __paramtilde_35_lastIndex = 0;
    this->paramtilde_35_lastIndex = __paramtilde_35_lastIndex;
}

void dspexpr_55_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2;//#map:_###_obj_###_:1
    }
}

void signalsend_35_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_36_perform(const SampleValue * B3R, SampleValue * out, Index n) {
    auto __paramtilde_36_sigbuf = this->paramtilde_36_sigbuf;
    auto __paramtilde_36_value = this->paramtilde_36_value;
    auto __paramtilde_36_lastIndex = this->paramtilde_36_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_36_lastIndex) {
            out[(Index)i] = B3R[(Index)i] + __paramtilde_36_value;
        } else {
            out[(Index)i] = B3R[(Index)i] + __paramtilde_36_sigbuf[(Index)i];
        }
    }

    __paramtilde_36_lastIndex = 0;
    this->paramtilde_36_lastIndex = __paramtilde_36_lastIndex;
}

void dspexpr_53_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] + in2;//#map:_###_obj_###_:1
    }
}

void signalsend_36_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_37_perform(const SampleValue * B9T, SampleValue * out, Index n) {
    auto __paramtilde_37_sigbuf = this->paramtilde_37_sigbuf;
    auto __paramtilde_37_value = this->paramtilde_37_value;
    auto __paramtilde_37_lastIndex = this->paramtilde_37_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_37_lastIndex) {
            out[(Index)i] = B9T[(Index)i] + __paramtilde_37_value;
        } else {
            out[(Index)i] = B9T[(Index)i] + __paramtilde_37_sigbuf[(Index)i];
        }
    }

    __paramtilde_37_lastIndex = 0;
    this->paramtilde_37_lastIndex = __paramtilde_37_lastIndex;
}

void dspexpr_56_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_38_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_38_perform(const SampleValue * B8T, SampleValue * out, Index n) {
    auto __paramtilde_38_sigbuf = this->paramtilde_38_sigbuf;
    auto __paramtilde_38_value = this->paramtilde_38_value;
    auto __paramtilde_38_lastIndex = this->paramtilde_38_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_38_lastIndex) {
            out[(Index)i] = B8T[(Index)i] + __paramtilde_38_value;
        } else {
            out[(Index)i] = B8T[(Index)i] + __paramtilde_38_sigbuf[(Index)i];
        }
    }

    __paramtilde_38_lastIndex = 0;
    this->paramtilde_38_lastIndex = __paramtilde_38_lastIndex;
}

void dspexpr_57_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_39_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_39_perform(const SampleValue * B7T, SampleValue * out, Index n) {
    auto __paramtilde_39_sigbuf = this->paramtilde_39_sigbuf;
    auto __paramtilde_39_value = this->paramtilde_39_value;
    auto __paramtilde_39_lastIndex = this->paramtilde_39_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_39_lastIndex) {
            out[(Index)i] = B7T[(Index)i] + __paramtilde_39_value;
        } else {
            out[(Index)i] = B7T[(Index)i] + __paramtilde_39_sigbuf[(Index)i];
        }
    }

    __paramtilde_39_lastIndex = 0;
    this->paramtilde_39_lastIndex = __paramtilde_39_lastIndex;
}

void dspexpr_58_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_40_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_40_perform(const SampleValue * B6T, SampleValue * out, Index n) {
    auto __paramtilde_40_sigbuf = this->paramtilde_40_sigbuf;
    auto __paramtilde_40_value = this->paramtilde_40_value;
    auto __paramtilde_40_lastIndex = this->paramtilde_40_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_40_lastIndex) {
            out[(Index)i] = B6T[(Index)i] + __paramtilde_40_value;
        } else {
            out[(Index)i] = B6T[(Index)i] + __paramtilde_40_sigbuf[(Index)i];
        }
    }

    __paramtilde_40_lastIndex = 0;
    this->paramtilde_40_lastIndex = __paramtilde_40_lastIndex;
}

void dspexpr_59_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_41_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_41_perform(const SampleValue * B5T, SampleValue * out, Index n) {
    auto __paramtilde_41_sigbuf = this->paramtilde_41_sigbuf;
    auto __paramtilde_41_value = this->paramtilde_41_value;
    auto __paramtilde_41_lastIndex = this->paramtilde_41_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_41_lastIndex) {
            out[(Index)i] = B5T[(Index)i] + __paramtilde_41_value;
        } else {
            out[(Index)i] = B5T[(Index)i] + __paramtilde_41_sigbuf[(Index)i];
        }
    }

    __paramtilde_41_lastIndex = 0;
    this->paramtilde_41_lastIndex = __paramtilde_41_lastIndex;
}

void dspexpr_60_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_42_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_42_perform(const SampleValue * B4T, SampleValue * out, Index n) {
    auto __paramtilde_42_sigbuf = this->paramtilde_42_sigbuf;
    auto __paramtilde_42_value = this->paramtilde_42_value;
    auto __paramtilde_42_lastIndex = this->paramtilde_42_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_42_lastIndex) {
            out[(Index)i] = B4T[(Index)i] + __paramtilde_42_value;
        } else {
            out[(Index)i] = B4T[(Index)i] + __paramtilde_42_sigbuf[(Index)i];
        }
    }

    __paramtilde_42_lastIndex = 0;
    this->paramtilde_42_lastIndex = __paramtilde_42_lastIndex;
}

void dspexpr_61_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_43_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_43_perform(const SampleValue * B2T, SampleValue * out, Index n) {
    auto __paramtilde_43_sigbuf = this->paramtilde_43_sigbuf;
    auto __paramtilde_43_value = this->paramtilde_43_value;
    auto __paramtilde_43_lastIndex = this->paramtilde_43_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_43_lastIndex) {
            out[(Index)i] = B2T[(Index)i] + __paramtilde_43_value;
        } else {
            out[(Index)i] = B2T[(Index)i] + __paramtilde_43_sigbuf[(Index)i];
        }
    }

    __paramtilde_43_lastIndex = 0;
    this->paramtilde_43_lastIndex = __paramtilde_43_lastIndex;
}

void dspexpr_62_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_44_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_44_perform(const SampleValue * B1T, SampleValue * out, Index n) {
    auto __paramtilde_44_sigbuf = this->paramtilde_44_sigbuf;
    auto __paramtilde_44_value = this->paramtilde_44_value;
    auto __paramtilde_44_lastIndex = this->paramtilde_44_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_44_lastIndex) {
            out[(Index)i] = B1T[(Index)i] + __paramtilde_44_value;
        } else {
            out[(Index)i] = B1T[(Index)i] + __paramtilde_44_sigbuf[(Index)i];
        }
    }

    __paramtilde_44_lastIndex = 0;
    this->paramtilde_44_lastIndex = __paramtilde_44_lastIndex;
}

void dspexpr_63_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_45_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void paramtilde_45_perform(const SampleValue * B3T, SampleValue * out, Index n) {
    auto __paramtilde_45_sigbuf = this->paramtilde_45_sigbuf;
    auto __paramtilde_45_value = this->paramtilde_45_value;
    auto __paramtilde_45_lastIndex = this->paramtilde_45_lastIndex;

    for (Index i = 0; i < n; i++) {
        if (i >= __paramtilde_45_lastIndex) {
            out[(Index)i] = B3T[(Index)i] + __paramtilde_45_value;
        } else {
            out[(Index)i] = B3T[(Index)i] + __paramtilde_45_sigbuf[(Index)i];
        }
    }

    __paramtilde_45_lastIndex = 0;
    this->paramtilde_45_lastIndex = __paramtilde_45_lastIndex;
}

void dspexpr_64_perform(const Sample * in1, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] / (number)180 * 3.14159265358979323846;//#map:_###_obj_###_:1
    }
}

void signalsend_46_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void ip_05_perform(SampleValue * out, Index n) {
    auto __ip_05_sigbuf = this->ip_05_sigbuf;
    auto __ip_05_lastValue = this->ip_05_lastValue;
    auto __ip_05_lastIndex = this->ip_05_lastIndex;

    for (Index i = 0; i < n; i++) {
        out[(Index)i] = ((SampleIndex)(i) >= __ip_05_lastIndex ? __ip_05_lastValue : __ip_05_sigbuf[(Index)i]);
    }

    __ip_05_lastIndex = 0;
    this->ip_05_lastIndex = __ip_05_lastIndex;
}

void signalsend_37_perform(const SampleValue * input, SampleValue * send, Index n) {
    for (Index i = 0; i < n; i++) {
        send[(Index)i] = input[(Index)i];
    }
}

void p_10_perform(
    const SampleValue * target_A,
    const SampleValue * target_duty,
    const SampleValue * target_r,
    const SampleValue * target_D,
    const SampleValue * target_S,
    const SampleValue * target_R,
    const SampleValue * target_p,
    const SampleValue * target_p0x,
    const SampleValue * target_p1x,
    const SampleValue * target_p2x,
    const SampleValue * target_p3x,
    const SampleValue * target_p4x,
    const SampleValue * target_p5x,
    const SampleValue * target_p6x,
    const SampleValue * target_p7x,
    const SampleValue * target_p8x,
    const SampleValue * target_p9x,
    const SampleValue * target_p0y,
    const SampleValue * target_p1y,
    const SampleValue * target_p2y,
    const SampleValue * target_p3y,
    const SampleValue * target_p4y,
    const SampleValue * target_p5y,
    const SampleValue * target_p6y,
    const SampleValue * target_p7y,
    const SampleValue * target_p8y,
    const SampleValue * target_p9y,
    const SampleValue * target_scale,
    const SampleValue * target_b1r,
    const SampleValue * target_b2r,
    const SampleValue * target_b3r,
    const SampleValue * target_b4r,
    const SampleValue * target_b5r,
    const SampleValue * target_b6r,
    const SampleValue * target_b7r,
    const SampleValue * target_b8r,
    const SampleValue * target_b9r,
    const SampleValue * target_b1t,
    const SampleValue * target_b2t,
    const SampleValue * target_b3t,
    const SampleValue * target_b4t,
    const SampleValue * target_b5t,
    const SampleValue * target_b6t,
    const SampleValue * target_b7t,
    const SampleValue * target_b8t,
    const SampleValue * target_b9t,
    SampleValue * out1,
    SampleValue * out2,
    Index n
) {
    // subpatcher: Spline
    ConstSampleArray<46> ins = {
        target_A,
        target_duty,
        target_r,
        target_D,
        target_S,
        target_R,
        target_p,
        target_p0x,
        target_p1x,
        target_p2x,
        target_p3x,
        target_p4x,
        target_p5x,
        target_p6x,
        target_p7x,
        target_p8x,
        target_p9x,
        target_p0y,
        target_p1y,
        target_p2y,
        target_p3y,
        target_p4y,
        target_p5y,
        target_p6y,
        target_p7y,
        target_p8y,
        target_p9y,
        target_scale,
        target_b1r,
        target_b2r,
        target_b3r,
        target_b4r,
        target_b5r,
        target_b6r,
        target_b7r,
        target_b8r,
        target_b9r,
        target_b1t,
        target_b2t,
        target_b3t,
        target_b4t,
        target_b5t,
        target_b6t,
        target_b7t,
        target_b8t,
        target_b9t
    };

    SampleArray<2> outs = {out1, out2};

    for (number chan = 0; chan < 2; chan++)
        zeroSignal(outs[(Index)chan], n);

    for (Index i = 0; i < 32; i++)
        this->p_10[(Index)i]->process(ins, 46, outs, 2, n);
}

void dspexpr_44_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
    Index i;

    for (i = 0; i < n; i++) {
        out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
    }
}

void dspexpr_46_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
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
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_08_value = v;
}

void paramtilde_09_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_09_value = v;
}

void paramtilde_10_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_10_value = v;
}

void paramtilde_11_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_11_value = v;
}

void paramtilde_12_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_12_value = v;
}

void paramtilde_13_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_13_value = v;
}

void paramtilde_14_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_14_value = v;
}

void paramtilde_15_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_15_value = v;
}

void paramtilde_16_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_16_value = v;
}

void paramtilde_17_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_17_value = v;
}

void paramtilde_18_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_18_value = v;
}

void paramtilde_19_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_19_value = v;
}

void paramtilde_20_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_20_value = v;
}

void paramtilde_21_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_21_value = v;
}

void paramtilde_22_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_22_value = v;
}

void paramtilde_23_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_23_value = v;
}

void paramtilde_24_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_24_value = v;
}

void paramtilde_25_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_25_value = v;
}

void paramtilde_26_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_26_value = v;
}

void paramtilde_27_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(1))) && v >= 1) {
        v = 1;
    }

    if ((bool)(!(bool)(isNaN(-1))) && v <= -1) {
        v = -1;
    }

    this->paramtilde_27_value = v;
}

void paramtilde_28_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_28_value = v;
}

void paramtilde_29_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_29_value = v;
}

void paramtilde_30_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_30_value = v;
}

void paramtilde_31_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_31_value = v;
}

void paramtilde_32_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_32_value = v;
}

void paramtilde_33_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_33_value = v;
}

void paramtilde_34_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_34_value = v;
}

void paramtilde_35_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_35_value = v;
}

void paramtilde_36_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(2))) && v >= 2) {
        v = 2;
    }

    if ((bool)(!(bool)(isNaN(-2))) && v <= -2) {
        v = -2;
    }

    this->paramtilde_36_value = v;
}

void paramtilde_37_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_37_value = v;
}

void paramtilde_38_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_38_value = v;
}

void paramtilde_39_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_39_value = v;
}

void paramtilde_40_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_40_value = v;
}

void paramtilde_41_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_41_value = v;
}

void paramtilde_42_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_42_value = v;
}

void paramtilde_43_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_43_value = v;
}

void paramtilde_44_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_44_value = v;
}

void paramtilde_45_value_setter(number v) {
    if ((bool)(!(bool)(isNaN(180))) && v >= 180) {
        v = 180;
    }

    if ((bool)(!(bool)(isNaN(-180))) && v <= -180) {
        v = -180;
    }

    this->paramtilde_45_value = v;
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

number p_10_calcActiveVoices() {
    {
        number activeVoices = 0;

        for (Index i = 0; i < 32; i++) {
            if ((bool)(!(bool)(this->p_10[(Index)i]->getIsMuted())))
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

void param_03_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_03_value;
}

void param_03_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_03_value_set(preset["value"]);
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

void paramtilde_23_dspsetup(bool force) {
    if ((bool)(this->paramtilde_23_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_23_lastIndex = 0;
    this->paramtilde_23_setupDone = true;
}

void paramtilde_24_dspsetup(bool force) {
    if ((bool)(this->paramtilde_24_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_24_lastIndex = 0;
    this->paramtilde_24_setupDone = true;
}

void paramtilde_25_dspsetup(bool force) {
    if ((bool)(this->paramtilde_25_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_25_lastIndex = 0;
    this->paramtilde_25_setupDone = true;
}

void paramtilde_26_dspsetup(bool force) {
    if ((bool)(this->paramtilde_26_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_26_lastIndex = 0;
    this->paramtilde_26_setupDone = true;
}

void paramtilde_27_dspsetup(bool force) {
    if ((bool)(this->paramtilde_27_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_27_lastIndex = 0;
    this->paramtilde_27_setupDone = true;
}

void param_04_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_04_value;
}

void param_04_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_04_value_set(preset["value"]);
}

void paramtilde_28_dspsetup(bool force) {
    if ((bool)(this->paramtilde_28_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_28_lastIndex = 0;
    this->paramtilde_28_setupDone = true;
}

void paramtilde_29_dspsetup(bool force) {
    if ((bool)(this->paramtilde_29_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_29_lastIndex = 0;
    this->paramtilde_29_setupDone = true;
}

void paramtilde_30_dspsetup(bool force) {
    if ((bool)(this->paramtilde_30_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_30_lastIndex = 0;
    this->paramtilde_30_setupDone = true;
}

void paramtilde_31_dspsetup(bool force) {
    if ((bool)(this->paramtilde_31_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_31_lastIndex = 0;
    this->paramtilde_31_setupDone = true;
}

void paramtilde_32_dspsetup(bool force) {
    if ((bool)(this->paramtilde_32_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_32_lastIndex = 0;
    this->paramtilde_32_setupDone = true;
}

void paramtilde_33_dspsetup(bool force) {
    if ((bool)(this->paramtilde_33_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_33_lastIndex = 0;
    this->paramtilde_33_setupDone = true;
}

void paramtilde_34_dspsetup(bool force) {
    if ((bool)(this->paramtilde_34_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_34_lastIndex = 0;
    this->paramtilde_34_setupDone = true;
}

void paramtilde_35_dspsetup(bool force) {
    if ((bool)(this->paramtilde_35_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_35_lastIndex = 0;
    this->paramtilde_35_setupDone = true;
}

void paramtilde_36_dspsetup(bool force) {
    if ((bool)(this->paramtilde_36_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_36_lastIndex = 0;
    this->paramtilde_36_setupDone = true;
}

void param_05_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_05_value;
}

void param_05_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_05_value_set(preset["value"]);
}

void paramtilde_37_dspsetup(bool force) {
    if ((bool)(this->paramtilde_37_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_37_lastIndex = 0;
    this->paramtilde_37_setupDone = true;
}

void paramtilde_38_dspsetup(bool force) {
    if ((bool)(this->paramtilde_38_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_38_lastIndex = 0;
    this->paramtilde_38_setupDone = true;
}

void paramtilde_39_dspsetup(bool force) {
    if ((bool)(this->paramtilde_39_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_39_lastIndex = 0;
    this->paramtilde_39_setupDone = true;
}

void paramtilde_40_dspsetup(bool force) {
    if ((bool)(this->paramtilde_40_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_40_lastIndex = 0;
    this->paramtilde_40_setupDone = true;
}

void paramtilde_41_dspsetup(bool force) {
    if ((bool)(this->paramtilde_41_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_41_lastIndex = 0;
    this->paramtilde_41_setupDone = true;
}

void paramtilde_42_dspsetup(bool force) {
    if ((bool)(this->paramtilde_42_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_42_lastIndex = 0;
    this->paramtilde_42_setupDone = true;
}

void paramtilde_43_dspsetup(bool force) {
    if ((bool)(this->paramtilde_43_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_43_lastIndex = 0;
    this->paramtilde_43_setupDone = true;
}

void paramtilde_44_dspsetup(bool force) {
    if ((bool)(this->paramtilde_44_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_44_lastIndex = 0;
    this->paramtilde_44_setupDone = true;
}

void paramtilde_45_dspsetup(bool force) {
    if ((bool)(this->paramtilde_45_setupDone) && (bool)(!(bool)(force)))
        return;

    this->paramtilde_45_lastIndex = 0;
    this->paramtilde_45_setupDone = true;
}

void ip_05_init() {
    this->ip_05_lastValue = this->ip_05_value;
}

void ip_05_fillSigBuf() {
    if ((bool)(this->ip_05_sigbuf)) {
        SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);

        if (k >= (SampleIndex)(this->vs))
            k = (SampleIndex)(this->vs) - 1;

        for (SampleIndex i = (SampleIndex)(this->ip_05_lastIndex); i < k; i++) {
            if (this->ip_05_resetCount > 0) {
                this->ip_05_sigbuf[(Index)i] = 1;
                this->ip_05_resetCount--;
            } else {
                this->ip_05_sigbuf[(Index)i] = this->ip_05_lastValue;
            }
        }

        this->ip_05_lastIndex = k;
    }
}

void ip_05_dspsetup(bool force) {
    if ((bool)(this->ip_05_setupDone) && (bool)(!(bool)(force)))
        return;

    this->ip_05_lastIndex = 0;
    this->ip_05_setupDone = true;
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
    dspexpr_40_in1 = 0;
    paramtilde_01_value = 0;
    paramtilde_01_value_setter(paramtilde_01_value);
    p_10_target = 0;
    p_10_midiin = 0;
    dspexpr_41_in1 = 0;
    paramtilde_02_value = 0;
    paramtilde_02_value_setter(paramtilde_02_value);
    dspexpr_42_in1 = 0;
    paramtilde_03_value = 100;
    paramtilde_03_value_setter(paramtilde_03_value);
    paramtilde_04_value = 0;
    paramtilde_04_value_setter(paramtilde_04_value);
    paramtilde_05_value = 10;
    paramtilde_05_value_setter(paramtilde_05_value);
    paramtilde_06_value = 10;
    paramtilde_06_value_setter(paramtilde_06_value);
    dspexpr_43_in1 = 0;
    dspexpr_43_in2 = 100;
    paramtilde_07_value = 50;
    paramtilde_07_value_setter(paramtilde_07_value);
    dspexpr_44_in1 = 0;
    dspexpr_44_in2 = 1;
    dspexpr_45_in1 = 0;
    dspexpr_45_in2 = 0.01;
    dspexpr_46_in1 = 0;
    dspexpr_46_in2 = 1;
    param_02_value = 0;
    paramtilde_08_value = 1;
    paramtilde_08_value_setter(paramtilde_08_value);
    paramtilde_09_value = 0.5;
    paramtilde_09_value_setter(paramtilde_09_value);
    paramtilde_10_value = 0.5;
    paramtilde_10_value_setter(paramtilde_10_value);
    paramtilde_11_value = 0.5;
    paramtilde_11_value_setter(paramtilde_11_value);
    paramtilde_12_value = 0.5;
    paramtilde_12_value_setter(paramtilde_12_value);
    paramtilde_13_value = 0;
    paramtilde_13_value_setter(paramtilde_13_value);
    paramtilde_14_value = -1;
    paramtilde_14_value_setter(paramtilde_14_value);
    paramtilde_15_value = -0.5;
    paramtilde_15_value_setter(paramtilde_15_value);
    paramtilde_16_value = 0;
    paramtilde_16_value_setter(paramtilde_16_value);
    paramtilde_17_value = -1;
    paramtilde_17_value_setter(paramtilde_17_value);
    ip_04_value = 10;
    ip_04_impulse = 0;
    param_03_value = 10;
    midiout_02_port = 0;
    paramtilde_18_value = 1;
    paramtilde_18_value_setter(paramtilde_18_value);
    paramtilde_19_value = 0.5;
    paramtilde_19_value_setter(paramtilde_19_value);
    paramtilde_20_value = 0;
    paramtilde_20_value_setter(paramtilde_20_value);
    paramtilde_21_value = -1;
    paramtilde_21_value_setter(paramtilde_21_value);
    paramtilde_22_value = 0.5;
    paramtilde_22_value_setter(paramtilde_22_value);
    paramtilde_23_value = 1;
    paramtilde_23_value_setter(paramtilde_23_value);
    paramtilde_24_value = 0;
    paramtilde_24_value_setter(paramtilde_24_value);
    paramtilde_25_value = -1;
    paramtilde_25_value_setter(paramtilde_25_value);
    paramtilde_26_value = 0;
    paramtilde_26_value_setter(paramtilde_26_value);
    paramtilde_27_value = 1;
    paramtilde_27_value_setter(paramtilde_27_value);
    midiin_02_port = 0;
    expr_04_in1 = 0;
    expr_04_in2 = 1;
    expr_04_out1 = 0;
    param_04_value = 0;
    send_02_input_number = 0;
    dspexpr_47_in1 = 0;
    dspexpr_47_in2 = 0;
    dspexpr_48_in1 = 0;
    dspexpr_48_in2 = 0;
    dspexpr_49_in1 = 0;
    dspexpr_49_in2 = 0;
    dspexpr_50_in1 = 0;
    dspexpr_50_in2 = 0;
    dspexpr_51_in1 = 0;
    dspexpr_51_in2 = 0;
    dspexpr_52_in1 = 0;
    dspexpr_52_in2 = 0;
    dspexpr_53_in1 = 0;
    dspexpr_53_in2 = 0;
    dspexpr_54_in1 = 0;
    dspexpr_54_in2 = 0;
    dspexpr_55_in1 = 0;
    dspexpr_55_in2 = 0;
    paramtilde_28_value = 0;
    paramtilde_28_value_setter(paramtilde_28_value);
    paramtilde_29_value = 0;
    paramtilde_29_value_setter(paramtilde_29_value);
    paramtilde_30_value = 0;
    paramtilde_30_value_setter(paramtilde_30_value);
    paramtilde_31_value = 0;
    paramtilde_31_value_setter(paramtilde_31_value);
    paramtilde_32_value = 0;
    paramtilde_32_value_setter(paramtilde_32_value);
    paramtilde_33_value = 0;
    paramtilde_33_value_setter(paramtilde_33_value);
    paramtilde_34_value = 0;
    paramtilde_34_value_setter(paramtilde_34_value);
    paramtilde_35_value = 0;
    paramtilde_35_value_setter(paramtilde_35_value);
    paramtilde_36_value = 0;
    paramtilde_36_value_setter(paramtilde_36_value);
    expr_05_in1 = 0;
    expr_05_in2 = -1;
    expr_05_out1 = 0;
    expr_06_in1 = 0;
    expr_06_out1 = 0;
    param_05_value = 0;
    dspexpr_56_in1 = 0;
    paramtilde_37_value = -45;
    paramtilde_37_value_setter(paramtilde_37_value);
    dspexpr_57_in1 = 0;
    paramtilde_38_value = -180;
    paramtilde_38_value_setter(paramtilde_38_value);
    dspexpr_58_in1 = 0;
    paramtilde_39_value = 0;
    paramtilde_39_value_setter(paramtilde_39_value);
    dspexpr_59_in1 = 0;
    paramtilde_40_value = -180;
    paramtilde_40_value_setter(paramtilde_40_value);
    dspexpr_60_in1 = 0;
    paramtilde_41_value = 45;
    paramtilde_41_value_setter(paramtilde_41_value);
    dspexpr_61_in1 = 0;
    paramtilde_42_value = 135;
    paramtilde_42_value_setter(paramtilde_42_value);
    dspexpr_62_in1 = 0;
    paramtilde_43_value = -45;
    paramtilde_43_value_setter(paramtilde_43_value);
    dspexpr_63_in1 = 0;
    paramtilde_44_value = 45;
    paramtilde_44_value_setter(paramtilde_44_value);
    dspexpr_64_in1 = 0;
    paramtilde_45_value = -135;
    paramtilde_45_value_setter(paramtilde_45_value);
    ip_05_value = 0;
    ip_05_impulse = 0;
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
    signals[24] = nullptr;
    signals[25] = nullptr;
    signals[26] = nullptr;
    signals[27] = nullptr;
    signals[28] = nullptr;
    signals[29] = nullptr;
    signals[30] = nullptr;
    signals[31] = nullptr;
    signals[32] = nullptr;
    signals[33] = nullptr;
    signals[34] = nullptr;
    signals[35] = nullptr;
    signals[36] = nullptr;
    signals[37] = nullptr;
    signals[38] = nullptr;
    signals[39] = nullptr;
    signals[40] = nullptr;
    signals[41] = nullptr;
    signals[42] = nullptr;
    signals[43] = nullptr;
    signals[44] = nullptr;
    signals[45] = nullptr;
    signals[46] = nullptr;
    signals[47] = nullptr;
    signals[48] = nullptr;
    didAllocateSignals = 0;
    vs = 0;
    maxvs = 0;
    sr = 44100;
    invsr = 0.00002267573696;
    param_01_lastValue = 0;
    paramtilde_01_lastIndex = 0;
    paramtilde_01_sigbuf = nullptr;
    paramtilde_01_setupDone = false;
    p_10_currentStatus = -1;
    p_10_mididata[0] = 0;
    p_10_mididata[1] = 0;
    p_10_mididata[2] = 0;
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
    paramtilde_15_lastIndex = 0;
    paramtilde_15_sigbuf = nullptr;
    paramtilde_15_setupDone = false;
    paramtilde_16_lastIndex = 0;
    paramtilde_16_sigbuf = nullptr;
    paramtilde_16_setupDone = false;
    paramtilde_17_lastIndex = 0;
    paramtilde_17_sigbuf = nullptr;
    paramtilde_17_setupDone = false;
    ip_04_lastIndex = 0;
    ip_04_lastValue = 0;
    ip_04_resetCount = 0;
    ip_04_sigbuf = nullptr;
    ip_04_setupDone = false;
    param_03_lastValue = 0;
    midiout_02_currentStatus = -1;
    midiout_02_status = -1;
    midiout_02_byte1 = -1;
    midiparse_02_parser_status = -1;
    midiparse_02_parser_byte1 = -1;
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
    paramtilde_23_lastIndex = 0;
    paramtilde_23_sigbuf = nullptr;
    paramtilde_23_setupDone = false;
    paramtilde_24_lastIndex = 0;
    paramtilde_24_sigbuf = nullptr;
    paramtilde_24_setupDone = false;
    paramtilde_25_lastIndex = 0;
    paramtilde_25_sigbuf = nullptr;
    paramtilde_25_setupDone = false;
    paramtilde_26_lastIndex = 0;
    paramtilde_26_sigbuf = nullptr;
    paramtilde_26_setupDone = false;
    paramtilde_27_lastIndex = 0;
    paramtilde_27_sigbuf = nullptr;
    paramtilde_27_setupDone = false;
    param_04_lastValue = 0;
    paramtilde_28_lastIndex = 0;
    paramtilde_28_sigbuf = nullptr;
    paramtilde_28_setupDone = false;
    paramtilde_29_lastIndex = 0;
    paramtilde_29_sigbuf = nullptr;
    paramtilde_29_setupDone = false;
    paramtilde_30_lastIndex = 0;
    paramtilde_30_sigbuf = nullptr;
    paramtilde_30_setupDone = false;
    paramtilde_31_lastIndex = 0;
    paramtilde_31_sigbuf = nullptr;
    paramtilde_31_setupDone = false;
    paramtilde_32_lastIndex = 0;
    paramtilde_32_sigbuf = nullptr;
    paramtilde_32_setupDone = false;
    paramtilde_33_lastIndex = 0;
    paramtilde_33_sigbuf = nullptr;
    paramtilde_33_setupDone = false;
    paramtilde_34_lastIndex = 0;
    paramtilde_34_sigbuf = nullptr;
    paramtilde_34_setupDone = false;
    paramtilde_35_lastIndex = 0;
    paramtilde_35_sigbuf = nullptr;
    paramtilde_35_setupDone = false;
    paramtilde_36_lastIndex = 0;
    paramtilde_36_sigbuf = nullptr;
    paramtilde_36_setupDone = false;
    param_05_lastValue = 0;
    paramtilde_37_lastIndex = 0;
    paramtilde_37_sigbuf = nullptr;
    paramtilde_37_setupDone = false;
    paramtilde_38_lastIndex = 0;
    paramtilde_38_sigbuf = nullptr;
    paramtilde_38_setupDone = false;
    paramtilde_39_lastIndex = 0;
    paramtilde_39_sigbuf = nullptr;
    paramtilde_39_setupDone = false;
    paramtilde_40_lastIndex = 0;
    paramtilde_40_sigbuf = nullptr;
    paramtilde_40_setupDone = false;
    paramtilde_41_lastIndex = 0;
    paramtilde_41_sigbuf = nullptr;
    paramtilde_41_setupDone = false;
    paramtilde_42_lastIndex = 0;
    paramtilde_42_sigbuf = nullptr;
    paramtilde_42_setupDone = false;
    paramtilde_43_lastIndex = 0;
    paramtilde_43_sigbuf = nullptr;
    paramtilde_43_setupDone = false;
    paramtilde_44_lastIndex = 0;
    paramtilde_44_sigbuf = nullptr;
    paramtilde_44_setupDone = false;
    paramtilde_45_lastIndex = 0;
    paramtilde_45_sigbuf = nullptr;
    paramtilde_45_setupDone = false;
    ip_05_lastIndex = 0;
    ip_05_lastValue = 0;
    ip_05_resetCount = 0;
    ip_05_sigbuf = nullptr;
    ip_05_setupDone = false;
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
    number dspexpr_40_in1;
    number paramtilde_01_value;
    number p_10_target;
    number p_10_midiin;
    number dspexpr_41_in1;
    number paramtilde_02_value;
    number dspexpr_42_in1;
    number paramtilde_03_value;
    number paramtilde_04_value;
    number paramtilde_05_value;
    number paramtilde_06_value;
    number dspexpr_43_in1;
    number dspexpr_43_in2;
    number paramtilde_07_value;
    number dspexpr_44_in1;
    number dspexpr_44_in2;
    number dspexpr_45_in1;
    number dspexpr_45_in2;
    number dspexpr_46_in1;
    number dspexpr_46_in2;
    number param_02_value;
    number paramtilde_08_value;
    number paramtilde_09_value;
    number paramtilde_10_value;
    number paramtilde_11_value;
    number paramtilde_12_value;
    number paramtilde_13_value;
    number paramtilde_14_value;
    number paramtilde_15_value;
    number paramtilde_16_value;
    number paramtilde_17_value;
    number ip_04_value;
    number ip_04_impulse;
    number param_03_value;
    number midiout_02_port;
    number paramtilde_18_value;
    number paramtilde_19_value;
    number paramtilde_20_value;
    number paramtilde_21_value;
    number paramtilde_22_value;
    number paramtilde_23_value;
    number paramtilde_24_value;
    number paramtilde_25_value;
    number paramtilde_26_value;
    number paramtilde_27_value;
    number midiin_02_port;
    number expr_04_in1;
    number expr_04_in2;
    number expr_04_out1;
    number param_04_value;
    number send_02_input_number;
    list send_02_input_list;
    number dspexpr_47_in1;
    number dspexpr_47_in2;
    number dspexpr_48_in1;
    number dspexpr_48_in2;
    number dspexpr_49_in1;
    number dspexpr_49_in2;
    number dspexpr_50_in1;
    number dspexpr_50_in2;
    number dspexpr_51_in1;
    number dspexpr_51_in2;
    number dspexpr_52_in1;
    number dspexpr_52_in2;
    number dspexpr_53_in1;
    number dspexpr_53_in2;
    number dspexpr_54_in1;
    number dspexpr_54_in2;
    number dspexpr_55_in1;
    number dspexpr_55_in2;
    number paramtilde_28_value;
    number paramtilde_29_value;
    number paramtilde_30_value;
    number paramtilde_31_value;
    number paramtilde_32_value;
    number paramtilde_33_value;
    number paramtilde_34_value;
    number paramtilde_35_value;
    number paramtilde_36_value;
    number expr_05_in1;
    number expr_05_in2;
    number expr_05_out1;
    number expr_06_in1;
    number expr_06_out1;
    number param_05_value;
    number dspexpr_56_in1;
    number paramtilde_37_value;
    number dspexpr_57_in1;
    number paramtilde_38_value;
    number dspexpr_58_in1;
    number paramtilde_39_value;
    number dspexpr_59_in1;
    number paramtilde_40_value;
    number dspexpr_60_in1;
    number paramtilde_41_value;
    number dspexpr_61_in1;
    number paramtilde_42_value;
    number dspexpr_62_in1;
    number paramtilde_43_value;
    number dspexpr_63_in1;
    number paramtilde_44_value;
    number dspexpr_64_in1;
    number paramtilde_45_value;
    number ip_05_value;
    number ip_05_impulse;
    number midinotecontroller_01_currenttarget;
    number midinotecontroller_01_midiin;
    MillisecondTime _currentTime;
    SampleIndex audioProcessSampleCount;
    SampleIndex sampleOffsetIntoNextAudioBuffer;
    signal zeroBuffer;
    signal dummyBuffer;
    SampleValue * signals[49];
    bool didAllocateSignals;
    Index vs;
    Index maxvs;
    number sr;
    number invsr;
    number param_01_lastValue;
    SampleIndex paramtilde_01_lastIndex;
    signal paramtilde_01_sigbuf;
    bool paramtilde_01_setupDone;
    int p_10_currentStatus;
    uint8_t p_10_mididata[3];
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
    SampleIndex paramtilde_15_lastIndex;
    signal paramtilde_15_sigbuf;
    bool paramtilde_15_setupDone;
    SampleIndex paramtilde_16_lastIndex;
    signal paramtilde_16_sigbuf;
    bool paramtilde_16_setupDone;
    SampleIndex paramtilde_17_lastIndex;
    signal paramtilde_17_sigbuf;
    bool paramtilde_17_setupDone;
    SampleIndex ip_04_lastIndex;
    number ip_04_lastValue;
    SampleIndex ip_04_resetCount;
    signal ip_04_sigbuf;
    bool ip_04_setupDone;
    number param_03_lastValue;
    int midiout_02_currentStatus;
    int midiout_02_status;
    int midiout_02_byte1;
    list midiout_02_sysex;
    int midiparse_02_parser_status;
    int midiparse_02_parser_byte1;
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
    SampleIndex paramtilde_23_lastIndex;
    signal paramtilde_23_sigbuf;
    bool paramtilde_23_setupDone;
    SampleIndex paramtilde_24_lastIndex;
    signal paramtilde_24_sigbuf;
    bool paramtilde_24_setupDone;
    SampleIndex paramtilde_25_lastIndex;
    signal paramtilde_25_sigbuf;
    bool paramtilde_25_setupDone;
    SampleIndex paramtilde_26_lastIndex;
    signal paramtilde_26_sigbuf;
    bool paramtilde_26_setupDone;
    SampleIndex paramtilde_27_lastIndex;
    signal paramtilde_27_sigbuf;
    bool paramtilde_27_setupDone;
    number param_04_lastValue;
    SampleIndex paramtilde_28_lastIndex;
    signal paramtilde_28_sigbuf;
    bool paramtilde_28_setupDone;
    SampleIndex paramtilde_29_lastIndex;
    signal paramtilde_29_sigbuf;
    bool paramtilde_29_setupDone;
    SampleIndex paramtilde_30_lastIndex;
    signal paramtilde_30_sigbuf;
    bool paramtilde_30_setupDone;
    SampleIndex paramtilde_31_lastIndex;
    signal paramtilde_31_sigbuf;
    bool paramtilde_31_setupDone;
    SampleIndex paramtilde_32_lastIndex;
    signal paramtilde_32_sigbuf;
    bool paramtilde_32_setupDone;
    SampleIndex paramtilde_33_lastIndex;
    signal paramtilde_33_sigbuf;
    bool paramtilde_33_setupDone;
    SampleIndex paramtilde_34_lastIndex;
    signal paramtilde_34_sigbuf;
    bool paramtilde_34_setupDone;
    SampleIndex paramtilde_35_lastIndex;
    signal paramtilde_35_sigbuf;
    bool paramtilde_35_setupDone;
    SampleIndex paramtilde_36_lastIndex;
    signal paramtilde_36_sigbuf;
    bool paramtilde_36_setupDone;
    number param_05_lastValue;
    SampleIndex paramtilde_37_lastIndex;
    signal paramtilde_37_sigbuf;
    bool paramtilde_37_setupDone;
    SampleIndex paramtilde_38_lastIndex;
    signal paramtilde_38_sigbuf;
    bool paramtilde_38_setupDone;
    SampleIndex paramtilde_39_lastIndex;
    signal paramtilde_39_sigbuf;
    bool paramtilde_39_setupDone;
    SampleIndex paramtilde_40_lastIndex;
    signal paramtilde_40_sigbuf;
    bool paramtilde_40_setupDone;
    SampleIndex paramtilde_41_lastIndex;
    signal paramtilde_41_sigbuf;
    bool paramtilde_41_setupDone;
    SampleIndex paramtilde_42_lastIndex;
    signal paramtilde_42_sigbuf;
    bool paramtilde_42_setupDone;
    SampleIndex paramtilde_43_lastIndex;
    signal paramtilde_43_sigbuf;
    bool paramtilde_43_setupDone;
    SampleIndex paramtilde_44_lastIndex;
    signal paramtilde_44_sigbuf;
    bool paramtilde_44_setupDone;
    SampleIndex paramtilde_45_lastIndex;
    signal paramtilde_45_sigbuf;
    bool paramtilde_45_setupDone;
    SampleIndex ip_05_lastIndex;
    number ip_05_lastValue;
    SampleIndex ip_05_resetCount;
    signal ip_05_sigbuf;
    bool ip_05_setupDone;
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
    RNBOSubpatcher_760* p_10[32];

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

