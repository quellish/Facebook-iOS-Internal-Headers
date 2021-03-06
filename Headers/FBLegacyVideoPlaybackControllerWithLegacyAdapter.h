//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBLegacyVideoPlaybackController.h"

#import "FBLegacyFeedVideoPlayerViewAdapter-Protocol.h"

@class NSString, ZRTariffedUxSentry;
@protocol FBLegacyFeedVideoPlayerViewEndScreenDelegate;

@interface FBLegacyVideoPlaybackControllerWithLegacyAdapter : FBLegacyVideoPlaybackController <FBLegacyFeedVideoPlayerViewAdapter>
{
    CDUnknownBlockType _didToggleFullScreenModeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didToggleFullScreenModeBlock; // @synthesize didToggleFullScreenModeBlock=_didToggleFullScreenModeBlock;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isOnEndScreen;
@property(nonatomic) __weak id <FBLegacyFeedVideoPlayerViewEndScreenDelegate> endScreenDelegate;
- (int)videoViewState;
@property(nonatomic) BOOL manuallyPaused;
- (id)videoPlayerItem;
@property(readonly, nonatomic) double videoTimePosition;
@property(retain, nonatomic) ZRTariffedUxSentry *zeroRatingSentry;
- (void)stopStreaming;
- (void)willBePresentedInFullScreen:(BOOL)arg1;
- (void)videoView:(id)arg1 isInFullScreenMode:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

