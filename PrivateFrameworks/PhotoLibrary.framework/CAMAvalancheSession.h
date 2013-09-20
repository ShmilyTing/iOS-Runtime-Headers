/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <CAMAvalancheSessionDelegate>, CIBurstImageSet, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, PLManagedAsset;

@interface CAMAvalancheSession : NSObject {
    CIBurstImageSet *__burstImageSet;
    NSDate *__expirationDate;
    NSObject<OS_dispatch_queue> *__expirationQueue;
    NSObject<OS_dispatch_source> *__expirationTimer;
    <CAMAvalancheSessionDelegate> *_delegate;
    unsigned int _numberOfPhotos;
    PLManagedAsset *_possibleAvalancheAsset;
    int _state;
    int _type;
    NSString *_uuid;
}

@property(readonly) CIBurstImageSet * _burstImageSet;
@property(setter=_setExpirationDate:,retain) NSDate * _expirationDate;
@property(readonly) NSObject<OS_dispatch_queue> * _expirationQueue;
@property(readonly) NSObject<OS_dispatch_source> * _expirationTimer;
@property <CAMAvalancheSessionDelegate> * delegate;
@property(readonly) unsigned int numberOfPhotos;
@property(retain) PLManagedAsset * possibleAvalancheAsset;
@property int state;
@property(readonly) int type;
@property(copy) NSString * uuid;

- (id)_burstImageSet;
- (void)_didTransitionToState:(int)arg1;
- (BOOL)_ensureValidStateChange:(int)arg1;
- (id)_expirationDate;
- (id)_expirationQueue;
- (id)_expirationTimer;
- (void)_expirationTimerFired;
- (void)_setExpirationDate:(id)arg1;
- (void)_setPossibleAvalancheAsset:(id)arg1;
- (void)_setState:(int)arg1;
- (void)_setUUID:(id)arg1;
- (void)_setupExpirationTimer;
- (void)_teardownExpirationTimer;
- (void)_transitionToState:(int)arg1;
- (void)addAssetForAnalysis:(id)arg1 withIOSurface:(struct __IOSurface { }*)arg2 metadata:(id)arg3 completionHandler:(id)arg4;
- (id)allAssetIdentifiers;
- (id)bestAssetIndentifiers;
- (void)dealloc;
- (id)delegate;
- (BOOL)extend;
- (void)finalizeWithAnalysis:(BOOL)arg1;
- (id)init;
- (id)initWithType:(int)arg1;
- (unsigned int)numberOfPhotos;
- (id)possibleAvalancheAsset;
- (void)setDelegate:(id)arg1;
- (id)stackAssetIdentifier;
- (int)state;
- (int)type;
- (id)uuid;

@end