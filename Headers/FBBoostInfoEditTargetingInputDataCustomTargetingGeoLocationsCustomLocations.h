//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSNumber, NSString;

@interface FBBoostInfoEditTargetingInputDataCustomTargetingGeoLocationsCustomLocations : FBGraphQLInput
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_addressString;
    NSNumber *_radius;
    NSString *_distanceUnit;
}

@property(copy, nonatomic) NSString *distanceUnit; // @synthesize distanceUnit=_distanceUnit;
@property(copy, nonatomic) NSNumber *radius; // @synthesize radius=_radius;
@property(copy, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

