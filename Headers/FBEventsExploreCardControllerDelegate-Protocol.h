//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBEventsExploreCardController, FBMemEvent, UIButton;

@protocol FBEventsExploreCardControllerDelegate <NSObject>

@optional
- (void)exploreCardController:(FBEventsExploreCardController *)arg1 didTakeNegativeActionForEvent:(FBMemEvent *)arg2;
- (void)exploreCardController:(FBEventsExploreCardController *)arg1 didTapFooterButton:(UIButton *)arg2;
- (void)exploreCardController:(FBEventsExploreCardController *)arg1 didTapHeader:(UIButton *)arg2;
@end

