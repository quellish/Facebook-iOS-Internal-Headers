//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface FBMegaphoneSocialContextView : UIView
{
    NSArray *_facepileViews;
    UILabel *_facepileMessageLabel;
}

@property(retain, nonatomic) UILabel *facepileMessageLabel; // @synthesize facepileMessageLabel=_facepileMessageLabel;
@property(copy, nonatomic) NSArray *facepileViews; // @synthesize facepileViews=_facepileViews;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFacepileViewsWithViews:(id)arg1;
- (id)initWithSocialContext:(id)arg1 userSession:(id)arg2;

@end

