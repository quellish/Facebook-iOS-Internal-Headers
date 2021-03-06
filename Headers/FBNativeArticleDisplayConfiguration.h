//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBRichStoryBlockDisplayContext, FBRichStoryLayoutMetrics;
@protocol FBRichStoryLayoutDescriptionGenerator;

@interface FBNativeArticleDisplayConfiguration : NSObject
{
    id <FBRichStoryLayoutDescriptionGenerator> _layoutGenerator;
    FBRichStoryLayoutMetrics *_metrics;
    FBRichStoryBlockDisplayContext *_context;
}

+ (id)configWithLayoutGenerator:(id)arg1 metrics:(id)arg2 context:(id)arg3;
@property(retain, nonatomic) FBRichStoryBlockDisplayContext *context; // @synthesize context=_context;
@property(retain, nonatomic) FBRichStoryLayoutMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) id <FBRichStoryLayoutDescriptionGenerator> layoutGenerator; // @synthesize layoutGenerator=_layoutGenerator;
- (void).cxx_destruct;

@end

