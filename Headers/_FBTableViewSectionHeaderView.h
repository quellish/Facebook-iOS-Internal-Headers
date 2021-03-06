//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel, UIView;

@interface _FBTableViewSectionHeaderView : UITableViewHeaderFooterView
{
    UIView *_cellSeparatorView;
    UIView *_sectionSeparatorView;
    BOOL _shouldHideSectionSeparator;
    UILabel *_labelView;
    int _style;
    float _labelViewPadding;
}

+ (float)sidePaddingForStyle:(int)arg1;
+ (void)initialize;
@property(nonatomic) BOOL shouldHideSectionSeparator; // @synthesize shouldHideSectionSeparator=_shouldHideSectionSeparator;
@property(nonatomic) float labelViewPadding; // @synthesize labelViewPadding=_labelViewPadding;
@property(nonatomic) int style; // @synthesize style=_style;
@property(readonly, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureForStyle:(int)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

