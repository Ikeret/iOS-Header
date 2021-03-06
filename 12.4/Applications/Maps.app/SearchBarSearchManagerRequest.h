//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AutocompleteContext, NSString;

__attribute__((visibility("hidden")))
@interface SearchBarSearchManagerRequest : NSObject
{
    NSString *_searchName;
    int _searchMode;
    AutocompleteContext *_context;
}

@property(retain, nonatomic) AutocompleteContext *context; // @synthesize context=_context;
@property(nonatomic) int searchMode; // @synthesize searchMode=_searchMode;
@property(copy, nonatomic) NSString *searchName; // @synthesize searchName=_searchName;
- (void).cxx_destruct;

@end

