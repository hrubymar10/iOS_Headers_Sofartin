/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKMedicalIDData : NSObject <NSCopying, NSSecureCoding> {
    NSString *_allergyInfo;
    NSDate *_birthdate;
    long long _bloodType;
    NSDate *_dateSaved;
    NSArray *_emergencyContacts;
    HKQuantity *_height;
    bool _isDisabled;
    NSNumber *_isOrganDonor;
    NSString *_medicalConditions;
    NSString *_medicalNotes;
    NSString *_medicationInfo;
    NSString *_name;
    NSData *_pictureData;
    long long _schemaVersion;
    HKQuantity *_weight;
}

@property(assign,retain) NSString * allergyInfo;
@property(assign,retain) NSDate * birthdate;
@property(assign,readwrite) long long bloodType;
@property(assign,retain) NSDate * dateSaved;
@property(assign,retain) NSArray * emergencyContacts;
@property(assign,retain) HKQuantity * height;
@property(assign,readwrite) bool isDisabled;
@property(assign,retain) NSNumber * isOrganDonor;
@property(assign,retain) NSString * medicalConditions;
@property(assign,retain) NSString * medicalNotes;
@property(assign,retain) NSString * medicationInfo;
@property(assign,retain) NSString * name;
@property(assign,retain) NSData * pictureData;
@property(assign,readwrite) long long schemaVersion;
@property(assign,retain) HKQuantity * weight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allergyInfo;
- (id)birthdate;
- (long long)bloodType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSaved;
- (id)emergencyContacts;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAnyData;
- (id)height;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDisabled;
- (id)isOrganDonor;
- (void)loadDataFromABPerson:(void*)arg1;
- (id)medicalConditions;
- (id)medicalNotes;
- (id)medicationInfo;
- (id)name;
- (id)pictureData;
- (long long)schemaVersion;
- (void)setAllergyInfo:(id)arg1;
- (void)setBirthdate:(id)arg1;
- (void)setBloodType:(long long)arg1;
- (void)setDateSaved:(id)arg1;
- (void)setEmergencyContacts:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setIsDisabled:(bool)arg1;
- (void)setIsOrganDonor:(id)arg1;
- (void)setMedicalConditions:(id)arg1;
- (void)setMedicalNotes:(id)arg1;
- (void)setMedicationInfo:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPictureData:(id)arg1;
- (void)setSchemaVersion:(long long)arg1;
- (void)setWeight:(id)arg1;
- (id)weight;

@end