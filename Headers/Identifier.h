//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol FBPhoneNumber;

@interface Identifier : NSObject <NSCopying>
{
    NSString *_userId;
    NSString *_value;
    NSString *_normalizedValue;
    NSString *_label;
    id <FBPhoneNumber> _phoneNumber;
    int _identifierType;
    BOOL _isMobile;
    BOOL _isVerified;
    BOOL _picked;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL picked; // @synthesize picked=_picked;
@property(nonatomic) BOOL isVerified; // @synthesize isVerified=_isVerified;
@property(nonatomic) BOOL isMobile; // @synthesize isMobile=_isMobile;
@property(nonatomic) int identifierType; // @synthesize identifierType=_identifierType;
@property(retain, nonatomic) id <FBPhoneNumber> phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayString;
- (id)key;
- (id)initWithEmail:(id)arg1 userId:(id)arg2 name:(id)arg3 label:(id)arg4;
- (id)initWithNormalizedPhone:(id)arg1 userId:(id)arg2 name:(id)arg3 label:(id)arg4;
- (id)initWithPhoneNumber:(id)arg1 userId:(id)arg2 name:(id)arg3 label:(id)arg4;
- (id)initWithMessengerUserId:(id)arg1 name:(id)arg2 label:(id)arg3;

@end

