//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchActiveStudentCourseIdentifiersResultObject : CATTaskResultObject
{
    NSArray *_activeCourseIdentifiers;
    NSArray *_activeInstructorIdentifiers;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *activeInstructorIdentifiers; // @synthesize activeInstructorIdentifiers=_activeInstructorIdentifiers;
@property(copy, nonatomic) NSArray *activeCourseIdentifiers; // @synthesize activeCourseIdentifiers=_activeCourseIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

