//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HDSQLiteDatabaseIndexSchema : NSObject
{
    _Bool _isUnique;
    NSString *_name;
    NSArray *_columns;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUnique; // @synthesize isUnique=_isUnique;
@property(retain, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

