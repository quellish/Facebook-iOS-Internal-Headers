//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVURLAsset, FBComposerLoopsCreatorViewController, NSArray;

@protocol FBComposerLoopsCreatorViewControllerDelegate <NSObject>
- (void)loopsCreatorViewControllerNeedsMediaPickerPresentation:(FBComposerLoopsCreatorViewController *)arg1;
- (void)loopsCreatorViewControllerDidHitDone:(FBComposerLoopsCreatorViewController *)arg1 withVideoAsset:(AVURLAsset *)arg2 withPhotoAttachments:(NSArray *)arg3 withTimeBetweenFrames:(float)arg4;
- (void)loopsCreatorViewControllerDidHitBack:(FBComposerLoopsCreatorViewController *)arg1;
@end

