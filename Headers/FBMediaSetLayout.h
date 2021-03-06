//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBRichStoryLayout.h"

#import "FBRichStoryElementDisplayAttributeCalculator-Protocol.h"

@class FBMediaSetAnalyzer, FBRichStoryBlockDisplayContext, NSDictionary, NSMutableDictionary, NSString;

@interface FBMediaSetLayout : FBRichStoryLayout <FBRichStoryElementDisplayAttributeCalculator>
{
    FBRichStoryLayout *_existingMediaLayout;
    NSMutableDictionary *_blockLayouts;
    float _fitHeight;
    BOOL _isPagingStyle;
    FBMediaSetAnalyzer *_mediaSetAnalyzer;
    NSDictionary *_presentationAttributes;
    FBRichStoryBlockDisplayContext *_displayContext;
    struct CGSize _constrainingSize;
}

+ (BOOL)_blockIsVideo:(id)arg1;
+ (struct CGSize)mediaSizeForBlock:(id)arg1;
+ (id)_mediaAnalyzerForBlocks:(id)arg1;
@property(nonatomic) struct CGSize constrainingSize; // @synthesize constrainingSize=_constrainingSize;
@property(retain, nonatomic) FBRichStoryBlockDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
@property(copy, nonatomic) NSDictionary *presentationAttributes; // @synthesize presentationAttributes=_presentationAttributes;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)mediaAtIndexShouldAspectFill:(unsigned int)arg1;
- (id)layoutForElement:(id)arg1 constrainingSize:(struct CGSize)arg2;
- (struct CGSize)_mediaConstrainingSize;
- (void)_generateLayoutsForMediaBlocks:(id)arg1;
- (id)_layoutDescriptionForBlocks:(id)arg1;
- (id)initWithMediaBlocks:(id)arg1 existingMediaSetLayout:(id)arg2 constrainingSize:(struct CGSize)arg3 presentationAttributes:(id)arg4 displayContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

