//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMediaUFIBarControllerDelegate-Protocol.h"

@class FBStoryShareHandler, FBVideoViewManager, NSArray, NSString, UIViewController;
@protocol FBNavigationCoordinator;

@interface FBVideoUFIHandler : NSObject <FBMediaUFIBarControllerDelegate>
{
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBVideoViewManager *_videoViewManager;
    FBStoryShareHandler *_shareHandler;
    UIViewController *_presentedVC;
    NSArray *_trackingCodes;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)mediaUFIBarWillAnimateRotation:(id)arg1;
- (void)mediaUFIBarWillPresentShareView:(id)arg1 withFeedback:(id)arg2 feedStory:(id)arg3 analyticsModule:(id)arg4 navigationCoordinator:(id)arg5;
- (void)mediaUFIBarWillPresentFeedbackView:(id)arg1;
- (void)openURL:(id)arg1;
- (id)initWithViewManager:(id)arg1 navigationCoordinator:(id)arg2 shareHandler:(id)arg3 presentedVC:(id)arg4 trackingCodes:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

