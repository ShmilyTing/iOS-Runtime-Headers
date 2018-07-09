/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUTraceableResourceToken : NSObject <TSUTraceableResourceToken> {
    NSArray * _acquireCallStack;
    NSObject * _context;
    NSArray * _copiedAcquireCallStack;
    NSArray * _copiedRelinquishCallStack;
    NSString * _intent;
    NSArray * _relinquishCallStack;
    double  _timeout;
    int  _timeoutPauseCount;
}

@property (nonatomic, readonly) NSArray *acquireCallStack;
@property (nonatomic, readonly) NSObject *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *intent;
@property (nonatomic, readonly) bool isTimeoutPaused;
@property (nonatomic, readonly) NSArray *relinquishCallStack;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeout;

+ (id)callStackDescriptionWithAction:(id)arg1 intent:(id)arg2 callStackSymbols:(id)arg3 index:(id)arg4 indentLevel:(unsigned long long)arg5;

- (void).cxx_destruct;
- (id)acquireCallStack;
- (id)acquireCallStackDescriptionWithIndex:(id)arg1 indentLevel:(unsigned long long)arg2;
- (id)context;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIntent:(id)arg1 timeout:(double)arg2 context:(id)arg3 acquireCallStack:(id)arg4;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (bool)isTimeoutPaused;
- (void)pauseTimeout;
- (id)relinquishCallStack;
- (void)resumeTimeout;
- (void)setRelinquishCallStackIfNeeded:(id)arg1;
- (double)timeout;

@end