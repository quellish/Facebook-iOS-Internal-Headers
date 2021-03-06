//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAttachmentNodeDelegate-Protocol.h"
#import "FBCardVisibility-Protocol.h"
#import "FBIndirectNavigationHandler-Protocol.h"

@class FBUserSession, NSString;
@protocol FBAttachmentControllerDelegate;

@interface FBAttachmentController : NSObject <FBCardVisibility, FBIndirectNavigationHandler, FBAttachmentNodeDelegate>
{
    FBUserSession *_session;
    id <FBAttachmentControllerDelegate> _delegate;
    id _attachment;
}

+ (BOOL)controllerCanRenderFeedAttachment:(id)arg1 withAttachmentDisplayContext:(id)arg2 session:(id)arg3;
+ (id)attachmentControllerForFeedAttachment:(id)arg1 withAttachmentContext:(id)arg2 session:(id)arg3 lowResolutionImageFlag:(unsigned int)arg4 highResolutionImageFlag:(unsigned int)arg5;
@property(retain, nonatomic) id attachment; // @synthesize attachment=_attachment;
@property(nonatomic) __weak id <FBAttachmentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)handleIntent:(id)arg1;
- (BOOL)shouldAllowDismissGestureAtPoint:(struct CGPoint)arg1 inDirection:(int)arg2;
- (id)attachmentNode;
- (BOOL)allowsAttachmentUpdates;
- (void)didUpdateAttachment:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;
- (void)cardDidBeginModalFullscreenInteraction;
- (void)cardWillEndModalFullscreenInteraction;
- (void)cardDidSettleWithoutFullscreenFocus:(int)arg1;
- (void)cardMaySettleWithoutFullscreenFocus;
- (void)cardDidBeginMoving:(int)arg1;
- (void)cardDidSettleWithFullscreenFocus;
- (void)cardMaySettleWithFullscreenFocus;
- (BOOL)handleIndirectNavigation:(id)arg1;
- (id)initWithAttachmentContext:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

