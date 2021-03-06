//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface FBPageGameChallengeUnitViewModel : FBValueObject <NSCopying>
{
    NSString *_requestMessage;
    NSDate *_requestTimestamp;
    NSString *_requestTitle;
    NSString *_personFullName;
    NSString *_personFirstName;
    NSString *_personProfilePictureURL;
    NSString *_graphQLID;
}

@property(readonly, copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
@property(readonly, copy, nonatomic) NSString *personProfilePictureURL; // @synthesize personProfilePictureURL=_personProfilePictureURL;
@property(readonly, copy, nonatomic) NSString *personFirstName; // @synthesize personFirstName=_personFirstName;
@property(readonly, copy, nonatomic) NSString *personFullName; // @synthesize personFullName=_personFullName;
@property(readonly, copy, nonatomic) NSString *requestTitle; // @synthesize requestTitle=_requestTitle;
@property(readonly, copy, nonatomic) NSDate *requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(readonly, copy, nonatomic) NSString *requestMessage; // @synthesize requestMessage=_requestMessage;
- (void).cxx_destruct;
- (id)initWithRequestMessage:(id)arg1 requestTimestamp:(id)arg2 requestTitle:(id)arg3 personFullName:(id)arg4 personFirstName:(id)arg5 personProfilePictureURL:(id)arg6 graphQLID:(id)arg7;

@end

