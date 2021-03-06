//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPhotoReorderingViewController, UIView;

@protocol FBPhotoReorderingViewControllerDelegate <NSObject>
- (struct CGRect)rectOfItemInWindowAtIndex:(int)arg1 toView:(UIView *)arg2;
- (void)photoReorderingViewController:(FBPhotoReorderingViewController *)arg1 movedItemFromIndex:(int)arg2 toIndex:(int)arg3;

@optional
- (void)photoReorderingViewController:(FBPhotoReorderingViewController *)arg1 prepareForCloseAnimationAtIndex:(int)arg2;
@end

