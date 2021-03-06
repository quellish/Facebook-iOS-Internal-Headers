//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBKVOController, FBNuxToolTipWithButtons, UIButton, UILabel;
@protocol FBNuxToolTipWithButtonsViewDelegate;

@interface FBNuxToolTipWithButtonsView : UIView
{
    id <FBNuxToolTipWithButtonsViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
    UIView *_buttonsHorizontalLineView;
    UIView *_buttonsVerticalLineView;
    FBNuxToolTipWithButtons *_toolTip;
    FBKVOController *_KVOController;
}

@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
@property(retain, nonatomic) FBNuxToolTipWithButtons *toolTip; // @synthesize toolTip=_toolTip;
@property(retain, nonatomic) UIView *buttonsVerticalLineView; // @synthesize buttonsVerticalLineView=_buttonsVerticalLineView;
@property(retain, nonatomic) UIView *buttonsHorizontalLineView; // @synthesize buttonsHorizontalLineView=_buttonsHorizontalLineView;
@property(retain, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <FBNuxToolTipWithButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapSecondaryButton:(id)arg1;
- (void)didTapPrimaryButton:(id)arg1;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)toolTipDidChange;
- (void)_unobserveToolTip;
- (void)_observeToolTip;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

