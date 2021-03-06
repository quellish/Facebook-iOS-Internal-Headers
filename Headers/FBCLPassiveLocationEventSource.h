//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCLEventSource.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface FBCLPassiveLocationEventSource : FBCLEventSource <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    BOOL _started;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)dealloc;
- (id)initWithLocationManager:(id)arg1 eventChannel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

