/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PATimestampIndexedSampleThread : NSObject {
    unsigned long long  _lastTimestampIndex;
    PASampleThreadData * _sampleThread;
}

@property unsigned long long lastTimestampIndex;
@property (readonly) PASampleThreadData *sampleThread;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (unsigned long long)lastTimestampIndex;
- (id)sampleThread;
- (void)setLastTimestampIndex:(unsigned long long)arg1;

@end
