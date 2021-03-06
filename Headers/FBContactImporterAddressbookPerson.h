//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBContactImporterAddressBookPersonPropertyCollection, FBContactImporterAddressbookPersonBirthday, FBContactImporterAddressbookPersonCredentialCollection, FBContactImporterAddressbookPersonName, NSString, UIImage;

@interface FBContactImporterAddressbookPerson : NSObject
{
    FBContactImporterAddressbookPersonName *_nameObj;
    NSString *_name;
    FBContactImporterAddressbookPersonCredentialCollection *_phones;
    FBContactImporterAddressbookPersonCredentialCollection *_emails;
    FBContactImporterAddressBookPersonPropertyCollection *_addresses;
    FBContactImporterAddressbookPersonBirthday *_birthday;
    FBContactImporterAddressBookPersonPropertyCollection *_webSites;
    FBContactImporterAddressBookPersonPropertyCollection *_dates;
    FBContactImporterAddressBookPersonPropertyCollection *_socialProfiles;
    FBContactImporterAddressBookPersonPropertyCollection *_relatedNames;
    FBContactImporterAddressBookPersonPropertyCollection *_instantMessages;
    UIImage *_image;
    NSString *_note;
    unsigned int _recordID;
}

@property(readonly, nonatomic) unsigned int recordID; // @synthesize recordID=_recordID;
@property(readonly, copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) FBContactImporterAddressBookPersonPropertyCollection *instantMessages; // @synthesize instantMessages=_instantMessages;
@property(readonly, nonatomic) FBContactImporterAddressBookPersonPropertyCollection *relatedNames; // @synthesize relatedNames=_relatedNames;
@property(readonly, nonatomic) FBContactImporterAddressBookPersonPropertyCollection *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(readonly, nonatomic) FBContactImporterAddressBookPersonPropertyCollection *dates; // @synthesize dates=_dates;
@property(readonly, nonatomic) FBContactImporterAddressBookPersonPropertyCollection *webSites; // @synthesize webSites=_webSites;
@property(readonly, nonatomic) FBContactImporterAddressbookPersonBirthday *birthday; // @synthesize birthday=_birthday;
@property(readonly, nonatomic) FBContactImporterAddressBookPersonPropertyCollection *addresses; // @synthesize addresses=_addresses;
@property(readonly, nonatomic) FBContactImporterAddressbookPersonCredentialCollection *emails; // @synthesize emails=_emails;
@property(readonly, nonatomic) FBContactImporterAddressbookPersonCredentialCollection *phones; // @synthesize phones=_phones;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) FBContactImporterAddressbookPersonName *nameObj; // @synthesize nameObj=_nameObj;
- (void).cxx_destruct;
- (id)description;
- (id)primaryCredential;
- (BOOL)hasCredentials;
- (id)initWithName:(id)arg1 emails:(id)arg2 phones:(id)arg3 birthday:(id)arg4 addresses:(id)arg5 webSites:(id)arg6 dates:(id)arg7 socialProfiles:(id)arg8 relatedNames:(id)arg9 instantMessages:(id)arg10 image:(id)arg11 note:(id)arg12 recordID:(unsigned int)arg13;
- (id)initWithABRecord:(void *)arg1 allFields:(BOOL)arg2;
- (id)init;

@end

