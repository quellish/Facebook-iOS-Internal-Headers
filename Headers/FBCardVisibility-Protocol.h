//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBCardVisibility <NSObject>

@optional
- (void)cardDidBeginModalFullscreenInteraction;
- (void)cardWillEndModalFullscreenInteraction;
- (void)cardDidSettleWithoutFullscreenFocus:(int)arg1;
- (void)cardMaySettleWithoutFullscreenFocus;
- (void)cardDidSettleWithFullscreenFocus;
- (void)cardMaySettleWithFullscreenFocus;
- (void)cardDidBeginMoving:(int)arg1;
- (void)cardWasCulledFromWorkingRange;
- (void)cardDidEnterWorkingRange;
@end

