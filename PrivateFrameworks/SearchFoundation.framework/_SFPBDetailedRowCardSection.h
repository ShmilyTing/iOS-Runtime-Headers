/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBDetailedRowCardSection : PBCodable <NSSecureCoding, _SFPBDetailedRowCardSection> {
    _SFPBActionItem * _action;
    _SFPBColor * _backgroundColor;
    _SFPBButton * _button;
    bool  _canBeHidden;
    NSArray * _descriptions;
    _SFPBRichText * _footnote;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int preventThumbnailImageScaling : 1; 
        unsigned int isSecondaryTitleDetached : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _isSecondaryTitleDetached;
    bool  _preventThumbnailImageScaling;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    _SFPBFormattedText * _secondaryTitle;
    _SFPBImage * _secondaryTitleImage;
    int  _separatorStyle;
    _SFPBImage * _thumbnail;
    _SFPBRichText * _title;
    _SFPBFormattedText * _trailingBottomText;
    _SFPBFormattedText * _trailingMiddleText;
    _SFPBFormattedText * _trailingTopText;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBActionItem *action;
@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic, retain) _SFPBButton *button;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *descriptions;
@property (nonatomic, retain) _SFPBRichText *footnote;
@property (nonatomic, readonly) bool hasAction;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic, readonly) bool hasButton;
@property (nonatomic, readonly) bool hasCanBeHidden;
@property (nonatomic, readonly) bool hasFootnote;
@property (nonatomic, readonly) bool hasHasBottomPadding;
@property (nonatomic, readonly) bool hasHasTopPadding;
@property (nonatomic, readonly) bool hasIsSecondaryTitleDetached;
@property (nonatomic, readonly) bool hasPreventThumbnailImageScaling;
@property (nonatomic, readonly) bool hasPunchoutPickerDismissText;
@property (nonatomic, readonly) bool hasPunchoutPickerTitle;
@property (nonatomic, readonly) bool hasSecondaryTitle;
@property (nonatomic, readonly) bool hasSecondaryTitleImage;
@property (nonatomic, readonly) bool hasSeparatorStyle;
@property (nonatomic, readonly) bool hasThumbnail;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasTopPadding;
@property (nonatomic, readonly) bool hasTrailingBottomText;
@property (nonatomic, readonly) bool hasTrailingMiddleText;
@property (nonatomic, readonly) bool hasTrailingTopText;
@property (nonatomic, readonly) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSecondaryTitleDetached;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool preventThumbnailImageScaling;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, retain) _SFPBFormattedText *secondaryTitle;
@property (nonatomic, retain) _SFPBImage *secondaryTitleImage;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBImage *thumbnail;
@property (nonatomic, retain) _SFPBRichText *title;
@property (nonatomic, retain) _SFPBFormattedText *trailingBottomText;
@property (nonatomic, retain) _SFPBFormattedText *trailingMiddleText;
@property (nonatomic, retain) _SFPBFormattedText *trailingTopText;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)action;
- (void)addDescriptions:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (id)button;
- (bool)canBeHidden;
- (void)clearDescriptions;
- (void)clearPunchoutOptions;
- (id)descriptions;
- (id)descriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)descriptionsCount;
- (id)dictionaryRepresentation;
- (id)footnote;
- (bool)hasAction;
- (bool)hasBackgroundColor;
- (bool)hasBottomPadding;
- (bool)hasButton;
- (bool)hasCanBeHidden;
- (bool)hasFootnote;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasIsSecondaryTitleDetached;
- (bool)hasPreventThumbnailImageScaling;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSecondaryTitle;
- (bool)hasSecondaryTitleImage;
- (bool)hasSeparatorStyle;
- (bool)hasThumbnail;
- (bool)hasTitle;
- (bool)hasTopPadding;
- (bool)hasTrailingBottomText;
- (bool)hasTrailingMiddleText;
- (bool)hasTrailingTopText;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSecondaryTitleDetached;
- (id)jsonData;
- (bool)preventThumbnailImageScaling;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (int)separatorStyle;
- (void)setAction:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrailingBottomText:(id)arg1;
- (void)setTrailingMiddleText:(id)arg1;
- (void)setTrailingTopText:(id)arg1;
- (void)setType:(id)arg1;
- (id)thumbnail;
- (id)title;
- (id)trailingBottomText;
- (id)trailingMiddleText;
- (id)trailingTopText;
- (id)type;
- (void)writeTo:(id)arg1;

@end
