//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

@class NSString;

@interface ODRTag : SQLiteMemoryEntity
{
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) double preservationPriority;
@property(nonatomic, getter=isAlwaysPreserved) _Bool alwaysPreserved;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *bundleKey;
@property(readonly, nonatomic) NSString *bundleID;

@end

