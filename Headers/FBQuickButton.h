//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CALayer, FBQuickButtonAsyncTitleLabelLayer, FBQuickButtonStateContents, NSAttributedString, NSString, UIColor, UIFont, UIImage;

@interface FBQuickButton : UIControl
{
    UIFont *_titleFont;
    CALayer *_imageLayer;
    CALayer *_backgroundImageLayer;
    FBQuickButtonAsyncTitleLabelLayer *_titleLayer;
    FBQuickButtonStateContents *_contentsForNormalState;
    FBQuickButtonStateContents *_contentsForSelectedState;
    FBQuickButtonStateContents *_contentsForHighlightedState;
    FBQuickButtonStateContents *_contentsForHighlightedAndSelectedState;
    FBQuickButtonStateContents *_contentsForDisabledState;
    FBQuickButtonStateContents *_contentsForDisabledSelectedState;
    FBQuickButtonStateContents *_contentsForDisabledHighlightedState;
    FBQuickButtonStateContents *_contentsForDisabledSelectedAndHighlightedState;
    FBQuickButtonStateContents *_currentButtonStateContents;
    unsigned int _currentState;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    struct UIEdgeInsets _tapEdgeInsets;
}

@property(nonatomic) unsigned int currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) FBQuickButtonStateContents *currentButtonStateContents; // @synthesize currentButtonStateContents=_currentButtonStateContents;
@property(retain, nonatomic) FBQuickButtonStateContents *contentsForDisabledSelectedAndHighlightedState; // @synthesize contentsForDisabledSelectedAndHighlightedState=_contentsForDisabledSelectedAndHighlightedState;
@property(retain, nonatomic) FBQuickButtonStateContents *contentsForDisabledHighlightedState; // @synthesize contentsForDisabledHighlightedState=_contentsForDisabledHighlightedState;
@property(retain, nonatomic) FBQuickButtonStateContents *contentsForDisabledSelectedState; // @synthesize contentsForDisabledSelectedState=_contentsForDisabledSelectedState;
@property(retain, nonatomic) FBQuickButtonStateContents *contentsForDisabledState; // @synthesize contentsForDisabledState=_contentsForDisabledState;
@property(retain, nonatomic) FBQuickButtonStateContents *contentsForHighlightedAndSelectedState; // @synthesize contentsForHighlightedAndSelectedState=_contentsForHighlightedAndSelectedState;
@property(retain, nonatomic) FBQuickButtonStateContents *contentsForHighlightedState; // @synthesize contentsForHighlightedState=_contentsForHighlightedState;
@property(retain, nonatomic) FBQuickButtonStateContents *contentsForSelectedState; // @synthesize contentsForSelectedState=_contentsForSelectedState;
@property(retain, nonatomic) FBQuickButtonStateContents *contentsForNormalState; // @synthesize contentsForNormalState=_contentsForNormalState;
@property(retain, nonatomic) FBQuickButtonAsyncTitleLabelLayer *titleLayer; // @synthesize titleLayer=_titleLayer;
@property(retain, nonatomic) CALayer *backgroundImageLayer; // @synthesize backgroundImageLayer=_backgroundImageLayer;
@property(nonatomic) struct UIEdgeInsets tapEdgeInsets; // @synthesize tapEdgeInsets=_tapEdgeInsets;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)createContentsDerivedFromNormalState;
@property(nonatomic) int imageContentMode;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, copy, nonatomic) NSAttributedString *currentAttributedTitle;
@property(readonly, nonatomic) UIImage *currentBackgroundImage;
@property(readonly, nonatomic) UIImage *currentImage;
@property(readonly, nonatomic) UIColor *currentTitleShadowColor;
@property(readonly, nonatomic) UIColor *currentTitleColor;
@property(readonly, copy, nonatomic) NSString *currentTitle;
- (id)attributedTitleForState:(unsigned int)arg1;
- (id)backgroundImageForState:(unsigned int)arg1;
- (id)imageForState:(unsigned int)arg1;
- (id)titleShadowColorForState:(unsigned int)arg1;
- (id)titleColorForState:(unsigned int)arg1;
- (id)titleForState:(unsigned int)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
- (id)contentsForState:(unsigned int)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateCurrentImages;
- (void)layoutSubviews;
- (struct CGRect)computeLabelRectForContentSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2;
- (struct CGRect)labelRectForContentSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2;
- (id)currentButtonStateForContentSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

