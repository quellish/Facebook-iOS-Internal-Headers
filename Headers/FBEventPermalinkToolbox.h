//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBEventActionResponder, FBEventAnalyticTracker, FBEventPermalinkChangeListenerAnnouncer, FBFeedComponentToolbox, FBScenePath, FBUserSession;
@protocol FBIntentHandler, FBNavigationCoordinator;

@interface FBEventPermalinkToolbox : NSObject
{
    FBEventActionResponder *_actionResponder;
    FBScenePath *_scenePath;
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    id <FBIntentHandler> _intentHandler;
    FBEventAnalyticTracker *_tracker;
    FBEventPermalinkChangeListenerAnnouncer *_announcer;
    FBFeedComponentToolbox *_feedToolbox;
}

+ (id)toolboxWithSession:(id)arg1 actionResponder:(id)arg2 scenePath:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 tracker:(id)arg6 announcer:(id)arg7 feedToolbox:(id)arg8;
@property(readonly, nonatomic) FBFeedComponentToolbox *feedToolbox; // @synthesize feedToolbox=_feedToolbox;
@property(readonly, nonatomic) FBEventPermalinkChangeListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(readonly, nonatomic) FBEventAnalyticTracker *tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) FBEventActionResponder *actionResponder; // @synthesize actionResponder=_actionResponder;
- (void).cxx_destruct;
- (id)initWithSession:(id)arg1 actionResponder:(id)arg2 scenePath:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 tracker:(id)arg6 announcer:(id)arg7 feedToolbox:(id)arg8;

@end

