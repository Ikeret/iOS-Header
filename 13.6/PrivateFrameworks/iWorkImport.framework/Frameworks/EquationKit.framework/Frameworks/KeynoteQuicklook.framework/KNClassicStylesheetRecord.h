//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <KeynoteQuicklook/TSKModel-Protocol.h>

@class NSDictionary, NSString;

@interface KNClassicStylesheetRecord : TSPObject <TSKModel>
{
    NSDictionary *_identifierToStyleMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *identifierToStyleMap; // @synthesize identifierToStyleMap=_identifierToStyleMap;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ClassicStylesheetRecordArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ClassicStylesheetRecordArchive *)arg1 unarchiver:(id)arg2;
- (id)childEnumerator;
- (id)referencedStyles;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

