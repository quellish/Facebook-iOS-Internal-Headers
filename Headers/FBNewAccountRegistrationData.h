//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;
@protocol FBPhoneNumber;

@interface FBNewAccountRegistrationData : NSObject
{
    id <FBPhoneNumber> _phoneNumber;
    NSString *_email;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_gender;
    NSDate *_birthday;
    NSString *_password;
}

+ (id)_allPropertyNames;
+ (id)regInstance;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) id <FBPhoneNumber> phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)mergeRegistrationData:(id)arg1 propertyNames:(id)arg2;
@property(readonly, copy, nonatomic) NSString *normalizedContactPoint;

@end

