//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBNearbyPlace, FBPlacePickerCrowdsourcingController, NSString;

@protocol FBPlacePickerCrowdsourcingControllerDelegate <NSObject>
- (void)placePickerCrowdsourcingController:(FBPlacePickerCrowdsourcingController *)arg1 didSelectExistingPlace:(FBNearbyPlace *)arg2;
- (void)placePickerCrowdsourcingController:(FBPlacePickerCrowdsourcingController *)arg1 didCreatePlace:(FBNearbyPlace *)arg2 suggestedPhoto:(BOOL)arg3 creationFlowType:(NSString *)arg4;
- (void)placePickerCrowdsourcingController:(FBPlacePickerCrowdsourcingController *)arg1 willNavigateToCrowdsourcingFlow:(unsigned int)arg2;
@end

