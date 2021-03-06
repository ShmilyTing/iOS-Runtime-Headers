/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchCategoricalHistogramWithPersistentBackup : _ATXAppLaunchCategoricalHistogram <NSSecureCoding> {
    _ATXDataStore * _datastore;
    long long  _histogramType;
    bool  _saveInBackground;
    ATXBackgroundSaver * _saver;
}

@property (nonatomic, readonly) _ATXDataStore *datastore;
@property (nonatomic, readonly) long long histogramType;
@property (nonatomic) bool saveInBackground;

- (void).cxx_destruct;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3;
- (id)datastore;
- (void)flush;
- (long long)histogramType;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 saveInBackground:(bool)arg3 maxCategoryCount:(unsigned short)arg4 pruningMethod:(long long)arg5;
- (int)removeHistoryForAllBundleIds:(id)arg1;
- (bool)removeHistoryForBundleId:(id)arg1;
- (void)resetData;
- (bool)saveInBackground;
- (void)setSaveInBackground:(bool)arg1;

@end
