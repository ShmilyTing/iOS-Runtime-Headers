/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    NSMutableArray *_assets;
    CKDPRecordFieldIdentifier *_field;
    CKDPRecordType *_type;
    NSMutableArray *_uploads;
}

@property(retain) NSMutableArray * assets;
@property(retain) CKDPRecordFieldIdentifier * field;
@property(readonly) bool hasField;
@property(readonly) bool hasType;
@property(retain) CKDPRecordType * type;
@property(retain) NSMutableArray * uploads;

+ (id)options;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (void)addUploads:(id)arg1;
- (id)assets;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)clearAssets;
- (void)clearUploads;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)field;
- (bool)hasField;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAssets:(id)arg1;
- (void)setField:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUploads:(id)arg1;
- (id)type;
- (id)uploads;
- (id)uploadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadsCount;
- (void)writeTo:(id)arg1;

@end