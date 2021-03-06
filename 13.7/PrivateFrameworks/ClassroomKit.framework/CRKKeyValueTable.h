//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTablePrinting-Protocol.h>

@class CRKTable, NSArray;

@interface CRKKeyValueTable : NSObject <CRKTablePrinting>
{
    CRKTable *_table;
    NSArray *_keyValuePairs;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
- (id)tableString;
@property(readonly, nonatomic) CRKTable *table; // @synthesize table=_table;
- (id)crk_JSONRepresentationWithPrettyPrinting:(_Bool)arg1 sortKeys:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithKeyValuePairs:(id)arg1;

@end

