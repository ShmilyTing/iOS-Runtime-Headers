/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_isSiriAuthorizationRestricted;
+ (void)_requestSiriAuthorization:(id /* block */)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
+ (int)_siriAuthorizationStatusForAppID:(id)arg1;
+ (BOOL)_siriEnabled;
+ (id)_tccAccessInfoForBundle:(id)arg1;

@end