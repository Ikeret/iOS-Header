//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions
{
    _Bool _optimizeForSharing;
    NUImageExportFormat *_imageExportFormat;
    CDUnknownBlockType _metadataProcessor;
}

- (void).cxx_destruct;
@property _Bool optimizeForSharing; // @synthesize optimizeForSharing=_optimizeForSharing;
@property(copy) CDUnknownBlockType metadataProcessor; // @synthesize metadataProcessor=_metadataProcessor;
@property(copy) NUImageExportFormat *imageExportFormat; // @synthesize imageExportFormat=_imageExportFormat;
- (id)imageExportFormatForURL:(id)arg1;
- (void)setImageExportFormatJpegWithQuality:(double)arg1;

@end

