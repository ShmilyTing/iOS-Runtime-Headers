/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class <WBSURLCompletionMatchData>;

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {
    void *_private;
}

@property(readonly) <WBSURLCompletionMatchData> * data;

- (id)data;
- (void)dealloc;
- (id)initWithBookmarkAndHistoryCompletionMatch:(struct PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> { struct BookmarkAndHistoryCompletionMatch {} *x1; })arg1;
- (id)originalURLString;
- (id)title;
- (id)userVisibleURLString;

@end