//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NUExportResult.h>

#import <NeutrinoCore/NUImageExportResult-Protocol.h>

@class NSData, NSString, NSURL, NUImageGeometry;
@protocol NURenderStatistics;

@interface _NUImageExportResult : _NUExportResult <NUImageExportResult>
{
    NSData *_destinationData;
}

- (void).cxx_destruct;
@property(retain) NSData *destinationData; // @synthesize destinationData=_destinationData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain) NSURL *destinationURL; // @dynamic destinationURL;
@property(readonly) NUImageGeometry *geometry;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

