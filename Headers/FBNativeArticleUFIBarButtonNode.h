//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNativeArticleEngagementActionButtonNode.h"

@class UIImage;

@interface FBNativeArticleUFIBarButtonNode : FBNativeArticleEngagementActionButtonNode
{
    UIImage *_lightButtonImage;
    struct FBTextMetrics _lightTextMetrics;
    unsigned int _style;
}

@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)buttonTintColor;
- (id)buttonIcon;
- (id)initWithText:(id)arg1 configuration:(id)arg2;

@end

