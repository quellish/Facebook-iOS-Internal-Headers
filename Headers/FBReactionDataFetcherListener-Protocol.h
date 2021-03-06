//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBReactionDataFetcher, NSAttributedString, NSError, NSOrderedSet, NSString;
@protocol FBQueriedReactionUnitFieldsProtocol;

@protocol FBReactionDataFetcherListener <NSObject>
- (void)dataFetcher:(FBReactionDataFetcher *)arg1 willAttemptToReloadUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg2;
- (void)dataFetcher:(FBReactionDataFetcher *)arg1 didFailToReloadUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg2 withError:(NSError *)arg3;
- (void)dataFetcher:(FBReactionDataFetcher *)arg1 didReplaceUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg2 withUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg3;
- (void)dataFetcher:(FBReactionDataFetcher *)arg1 didAddUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg2 toPosition:(unsigned int)arg3;
- (void)dataFetcher:(FBReactionDataFetcher *)arg1 didMoveUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg2 toPosition:(unsigned int)arg3;
- (void)dataFetcher:(FBReactionDataFetcher *)arg1 didRemoveUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg2;
- (void)dataFetcher:(FBReactionDataFetcher *)arg1 didLoadUnits:(NSOrderedSet *)arg2 sessionId:(NSString *)arg3 networkTime:(unsigned long long)arg4 hasNextPage:(BOOL)arg5;
- (void)loadFailedForDataFetcher:(FBReactionDataFetcher *)arg1 sessionId:(NSString *)arg2 cancelled:(BOOL)arg3 error:(NSError *)arg4;
- (void)dataFetcher:(FBReactionDataFetcher *)arg1 receivedUnitsTitle:(NSAttributedString *)arg2;
- (void)dataFetcherWillStartLoading:(FBReactionDataFetcher *)arg1;
@end

