
#ifndef VTKCOMMONEXECUTIONMODEL_EXPORT_H
#define VTKCOMMONEXECUTIONMODEL_EXPORT_H

#ifdef VTKCOMMONEXECUTIONMODEL_STATIC_DEFINE
#  define VTKCOMMONEXECUTIONMODEL_EXPORT
#  define VTKCOMMONEXECUTIONMODEL_NO_EXPORT
#else
#  ifndef VTKCOMMONEXECUTIONMODEL_EXPORT
#    ifdef CommonExecutionModel_EXPORTS
        /* We are building this library */
#      define VTKCOMMONEXECUTIONMODEL_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKCOMMONEXECUTIONMODEL_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKCOMMONEXECUTIONMODEL_NO_EXPORT
#    define VTKCOMMONEXECUTIONMODEL_NO_EXPORT 
#  endif
#endif

#ifndef VTKCOMMONEXECUTIONMODEL_DEPRECATED
#  define VTKCOMMONEXECUTIONMODEL_DEPRECATED __declspec(deprecated)
#endif

#ifndef VTKCOMMONEXECUTIONMODEL_DEPRECATED_EXPORT
#  define VTKCOMMONEXECUTIONMODEL_DEPRECATED_EXPORT VTKCOMMONEXECUTIONMODEL_EXPORT VTKCOMMONEXECUTIONMODEL_DEPRECATED
#endif

#ifndef VTKCOMMONEXECUTIONMODEL_DEPRECATED_NO_EXPORT
#  define VTKCOMMONEXECUTIONMODEL_DEPRECATED_NO_EXPORT VTKCOMMONEXECUTIONMODEL_NO_EXPORT VTKCOMMONEXECUTIONMODEL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKCOMMONEXECUTIONMODEL_NO_DEPRECATED
#    define VTKCOMMONEXECUTIONMODEL_NO_DEPRECATED
#  endif
#endif

#endif /* VTKCOMMONEXECUTIONMODEL_EXPORT_H */
