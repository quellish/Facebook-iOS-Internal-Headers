//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBNearbyPlace, NSString;

@protocol FBCrowdsourcingCityPickerNullStateDataSourceDelegate <NSObject>
- (void)nullStateTableViewDidSelectSuggestedCityWithID:(NSString *)arg1;
- (void)nullStateTableViewDidSelectCurrentLocationWithCityID:(NSString *)arg1;
- (void)nullStateTableViewWillBeginDragging;
- (void)nullStateTableViewDidSelectCity:(FBNearbyPlace *)arg1 useCurrentLocation:(BOOL)arg2;
@end

