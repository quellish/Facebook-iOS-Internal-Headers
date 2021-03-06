//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBKVOController, FBNuxToolTip, UILabel;

@interface FBNuxToolTipView : UIView
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_thumbnailView;
    FBNuxToolTip *_toolTip;
    FBKVOController *_KVOController;
}

@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
@property(retain, nonatomic) FBNuxToolTip *toolTip; // @synthesize toolTip=_toolTip;
@property(retain, nonatomic) UIView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)toolTipDidChange;
- (void)_unobserveToolTip;
- (void)_observeToolTip;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

