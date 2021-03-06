//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBVerveFlatView, FBVervePackageBackgroundView, FBVervePackageGroupView, FBVerveSlide, FBVerveSlideLayout;

@interface FBVerveFlatSlideView : UIView
{
    FBVervePackageBackgroundView *_bgView;
    FBVervePackageGroupView *_groupView;
    FBVerveFlatView *_owner;
    FBVerveSlide *_slide;
    FBVerveSlideLayout *_slideLayout;
}

@property(retain, nonatomic) FBVerveSlideLayout *slideLayout; // @synthesize slideLayout=_slideLayout;
@property(readonly, nonatomic) FBVerveSlide *slide; // @synthesize slide=_slide;
@property(readonly, nonatomic) __weak FBVerveFlatView *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)foreachFactoryView:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidateFrom:(id)arg1;
- (id)initWithFlatView:(id)arg1 slide:(id)arg2;

@end

