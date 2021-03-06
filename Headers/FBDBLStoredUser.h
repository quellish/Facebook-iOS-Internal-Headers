//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBDBLStoredUser : FBValueObject <NSCopying>
{
    NSString *_accountID;
    NSString *_shortName;
    NSString *_platformTestAppID;
    unsigned int _accountType;
}

@property(readonly, nonatomic) unsigned int accountType; // @synthesize accountType=_accountType;
@property(readonly, copy, nonatomic) NSString *platformTestAppID; // @synthesize platformTestAppID=_platformTestAppID;
@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)arg1 shortName:(id)arg2 platformTestAppID:(id)arg3 accountType:(unsigned int)arg4;

@end

