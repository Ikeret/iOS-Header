//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CPLItemChange : CPLRecordChange <NSSecureCoding, NSCopying>
{
    NSArray *_containerRelations;
}

+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
@property(copy, nonatomic) NSArray *containerRelations; // @synthesize containerRelations=_containerRelations;
- (void).cxx_destruct;
- (id)containerRelationChangesComparedToRelationEnumerator:(id)arg1 error:(id *)arg2;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)containerDescription;
- (id)init;

@end

