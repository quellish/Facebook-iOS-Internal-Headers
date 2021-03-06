//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIView;

@interface FBReactionFooterView : UIControl
{
    UIView *_backgroundView;
    CAShapeLayer *_backgroundMaskLayer;
    UIView *_borderView;
    unsigned int _corners;
    float _cornerRadius;
    UIView *_contentView;
    UIView *_actionView;
    float _minContentHeight;
    struct UIEdgeInsets _contentViewInsets;
}

@property(nonatomic) struct UIEdgeInsets contentViewInsets; // @synthesize contentViewInsets=_contentViewInsets;
@property(nonatomic) float minContentHeight; // @synthesize minContentHeight=_minContentHeight;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutBackground;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithRoundedCorners:(unsigned int)arg1 cornerRadius:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

