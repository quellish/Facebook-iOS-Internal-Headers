//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBReactionAttachmentActionAdapterDelegate-Protocol.h"
#import "FBReactionAttachmentsAdapter-Protocol.h"
#import "_FBReactionAdapterHelperDelegate-Protocol.h"

@class FBReactionAdapterContext, FBReactionListAttachmentView, NSMutableArray, NSString;
@protocol FBQueriedReactionUnitFieldsProtocol, FBReactionActionAdapter, FBReactionAttachmentsAdapterDelegate;

@interface FBReactionTodayGenericImageBlocksAttachmentsAdapter : NSObject <_FBReactionAdapterHelperDelegate, FBReactionAttachmentActionAdapterDelegate, FBReactionAttachmentsAdapter>
{
    NSString *_style;
    FBReactionListAttachmentView *_attachmentsView;
    NSMutableArray *_adapterHelpers;
    FBReactionAdapterContext *_reactionContext;
    id <FBQueriedReactionUnitFieldsProtocol> _unit;
    NSMutableArray *_attachmentActionAdaptersForIndexing;
    id <FBReactionAttachmentsAdapterDelegate> delegate;
    id <FBReactionActionAdapter> _actionAdapter;
}

@property(retain, nonatomic) id <FBReactionActionAdapter> actionAdapter; // @synthesize actionAdapter=_actionAdapter;
@property(nonatomic) __weak id <FBReactionAttachmentsAdapterDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (unsigned int)_attachmentIndexOfAdapter:(id)arg1;
- (void)downloadUnitForReactionAttachmentActionAdapter:(id)arg1;
- (void)presentActionSheet:(id)arg1 forReactionAttachmentActionAdapter:(id)arg2;
- (void)userDidPerformInteraction:(id)arg1 withExtras:(id)arg2 forReactionAttachmentActionAdapter:(id)arg3;
- (void)presentComposerWithBootstrapContent:(id)arg1 delegate:(id)arg2 forReactionAttachmentActionAdapter:(id)arg3;
- (BOOL)_performMagicTapForAttachments;
- (void)openURL:(id)arg1 forAdapterHelper:(id)arg2;
- (BOOL)supportsBottomBorder;
- (id)actionsView;
- (id)_itemViewForAttachment:(id)arg1 attachmentAction:(id)arg2 index:(unsigned int)arg3;
- (id)attachmentsView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3;
- (id)init;
- (void)updateAttachmentsVisibility:(struct CGRect)arg1 scrollView:(id)arg2;
- (id)impressionEventLoggingExtras;
- (void)didEndDisplayingAttachments;
- (void)willDisplayAttachments;
- (BOOL)performMagicTap;
- (void)actionMessageDidChange:(id)arg1 forReactionActionAdapter:(id)arg2;
- (void)replaceUnit:(id)arg1 withUnit:(id)arg2 forReactionActionAdapter:(id)arg3;
- (void)hideUnit:(id)arg1 forReactionActionAdapter:(id)arg2;
- (void)downloadUnitForReactionActionAdapter:(id)arg1;
- (void)presentActionSheet:(id)arg1 forReactionActionAdapter:(id)arg2;
- (void)userDidPerformInteraction:(id)arg1 withExtras:(id)arg2 forReactionActionAdapter:(id)arg3;
- (void)presentComposerWithBootstrapContent:(id)arg1 delegate:(id)arg2 forReactionActionAdapter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

