//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class CKQueryCursor, FCCKContentDatabase, NSArray, NSError, NSString;

@interface FCCKTagSearchQueryOperation : FCOperation
{
    FCCKContentDatabase *_database;
    unsigned long long _resultsLimit;
    NSString *_searchString;
    long long _tagType;
    CKQueryCursor *_cursor;
    NSArray *_desiredKeys;
    NSString *_locale;
    CDUnknownBlockType _queryCompletionHandler;
    NSString *_tagTypeString;
    NSArray *_resultRecords;
    CKQueryCursor *_resultCursor;
    NSError *_resultError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) CKQueryCursor *resultCursor; // @synthesize resultCursor=_resultCursor;
@property(retain, nonatomic) NSArray *resultRecords; // @synthesize resultRecords=_resultRecords;
@property(retain, nonatomic) NSString *tagTypeString; // @synthesize tagTypeString=_tagTypeString;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) long long tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) FCCKContentDatabase *database; // @synthesize database=_database;
- (id)_constructTagSearchQuery;
- (void)operationWillFinishWithError:(id)arg1;
- (void)resetForRetry;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end

