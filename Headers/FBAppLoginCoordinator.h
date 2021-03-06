//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppSessionControllerDelegate-Protocol.h"
#import "FBAppSessionLoginHelperDelegate-Protocol.h"
#import "FBAuthListener-Protocol.h"

@class FBDependencyManager, NSString;

@interface FBAppLoginCoordinator : NSObject <FBAppSessionControllerDelegate, FBAppSessionLoginHelperDelegate, FBAuthListener>
{
    FBDependencyManager *_dependencyManager;
    shared_ptr_1a4817e6 _pendingAuthPromise;
    shared_ptr_035b12b0 _pendingSessionPromise;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appSessionControllerDidBeginSession:(id)arg1 isBackgroundStartup:(BOOL)arg2;
- (void)appSessionControllerDidEndSession:(id)arg1 wasShowingSpinner:(BOOL)arg2;
- (id)startupEventsToLogForLoginInterruptionForAppSessionLoginHelper:(id)arg1;
- (void)_beginAppSessionInBackground:(BOOL)arg1 keychainWasLocked:(BOOL)arg2;
- (shared_ptr_035b12b0)beginAppSession:(const struct AuthenticationCompletedInformation *)arg1;
- (void)appSessionLoginHelper:(id)arg1 didValidateAccessTokenInBackground:(BOOL)arg2 keychainWasLockedAtPreviousLoginAttempt:(BOOL)arg3;
- (void)handleOpenURL:(id)arg1;
- (id)thirdPartyAuthController;
- (id)thirdPartyAuthViewControllerForAppSessionLoginHelper:(id)arg1 accessToken:(id)arg2;
- (id)authenticationViewControllerForAppSessionLoginHelper:(id)arg1 authenticationManager:(id)arg2 defaultLoginCredential:(id)arg3;
- (void)didCompleteAuthenticationRequest:(BOOL)arg1;
- (void)willSendAuthenticationRequestForCredentialType:(int)arg1 dblPinProvided:(BOOL)arg2;
- (void)processBeginSessionCompletion:(const struct SessionBeganInformation *)arg1;
- (void)markBeginSessionCompleted;
- (void)markAuthenticationCompleted;
- (shared_ptr_1a4817e6)authenticate;
- (void)dealloc;
- (id)initWithDependencyManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

