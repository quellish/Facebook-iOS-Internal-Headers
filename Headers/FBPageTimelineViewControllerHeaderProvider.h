//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBStoryStreamViewControllerHeaderProvider-Protocol.h"

@class FBPublisherBar_DEPRECATED, NSString;

@interface FBPageTimelineViewControllerHeaderProvider : NSObject <FBStoryStreamViewControllerHeaderProvider>
{
    FBPublisherBar_DEPRECATED *_publisherBar;
}

- (void).cxx_destruct;
- (id)headerContentView;
- (id)initWithPublisherBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

