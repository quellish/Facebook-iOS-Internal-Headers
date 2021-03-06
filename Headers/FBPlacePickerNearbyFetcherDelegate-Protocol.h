//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, FBNearbyDataSet, FBPlacePickerNearbyFetcher, NSError;

@protocol FBPlacePickerNearbyFetcherDelegate <NSObject>
- (BOOL)canAccessLocation;
- (void)nearbyFetcher:(FBPlacePickerNearbyFetcher *)arg1 didFetchNearby:(FBNearbyDataSet *)arg2 withError:(NSError *)arg3;
- (void)nearbyFetcher:(FBPlacePickerNearbyFetcher *)arg1 didFetchLocation:(CLLocation *)arg2 withError:(NSError *)arg3;
@end

